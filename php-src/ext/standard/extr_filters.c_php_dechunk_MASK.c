
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int chunk_size; } ;
typedef TYPE_1__ php_chunked_filter_data ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1, php_chunked_filter_data *VAR_2)
{
 char *VAR_3 = VAR_0;
 char *VAR_4 = VAR_3 + VAR_1;
 char *VAR_5 = VAR_0;
 size_t VAR_6 = 0;

 while (VAR_3 < VAR_4) {
  switch (VAR_2->state) {
   case 129:
    VAR_2->chunk_size = 0;
   case 133:
    while (VAR_3 < VAR_4) {
     if (*VAR_3 >= '0' && *VAR_3 <= '9') {
      VAR_2->chunk_size = (VAR_2->chunk_size * 16) + (*VAR_3 - '0');
     } else if (*VAR_3 >= 'A' && *VAR_3 <= 'F') {
      VAR_2->chunk_size = (VAR_2->chunk_size * 16) + (*VAR_3 - 'A' + 10);
     } else if (*VAR_3 >= 'a' && *VAR_3 <= 'f') {
      VAR_2->chunk_size = (VAR_2->chunk_size * 16) + (*VAR_3 - 'a' + 10);
     } else if (VAR_2->state == 129) {
      VAR_2->state = 134;
      break;
     } else {
      VAR_2->state = 131;
      break;
     }
     VAR_2->state = 133;
     VAR_3++;
    }
    if (VAR_2->state == 134) {
     continue;
    } else if (VAR_3 == VAR_4) {
     return VAR_6;
    }
   case 131:

    while (VAR_3 < VAR_4 && *VAR_3 != '\r' && *VAR_3 != '\n') {
     VAR_3++;
    }
    if (VAR_3 == VAR_4) {
     return VAR_6;
    }
   case 132:
    if (*VAR_3 == '\r') {
     VAR_3++;
     if (VAR_3 == VAR_4) {
      VAR_2->state = 130;
      return VAR_6;
     }
    }
   case 130:
    if (*VAR_3 == '\n') {
     VAR_3++;
     if (VAR_2->chunk_size == 0) {

      VAR_2->state = 128;
      continue;
     } else if (VAR_3 == VAR_4) {
      VAR_2->state = 137;
      return VAR_6;
     }
    } else {
     VAR_2->state = 134;
     continue;
    }
   case 137:
    if ((size_t) (VAR_4 - VAR_3) >= VAR_2->chunk_size) {
     if (VAR_3 != VAR_5) {
      FUNC_0(VAR_5, VAR_3, VAR_2->chunk_size);
     }
     VAR_5 += VAR_2->chunk_size;
     VAR_6 += VAR_2->chunk_size;
     VAR_3 += VAR_2->chunk_size;
     if (VAR_3 == VAR_4) {
      VAR_2->state = 136;
      return VAR_6;
     }
    } else {
     if (VAR_3 != VAR_5) {
      FUNC_0(VAR_5, VAR_3, VAR_4 - VAR_3);
     }
     VAR_2->chunk_size -= VAR_4 - VAR_3;
     VAR_2->state=137;
     VAR_6 += VAR_4 - VAR_3;
     return VAR_6;
    }
   case 136:
    if (*VAR_3 == '\r') {
     VAR_3++;
     if (VAR_3 == VAR_4) {
      VAR_2->state = 135;
      return VAR_6;
     }
    }
   case 135:
    if (*VAR_3 == '\n') {
     VAR_3++;
     VAR_2->state = 129;
     continue;
    } else {
     VAR_2->state = 134;
     continue;
    }
   case 128:

    VAR_3 = VAR_4;
    continue;
   case 134:
    if (VAR_3 != VAR_5) {
     FUNC_0(VAR_5, VAR_3, VAR_4 - VAR_3);
    }
    VAR_6 += VAR_4 - VAR_3;
    return VAR_6;
  }
 }
 return VAR_6;
}
