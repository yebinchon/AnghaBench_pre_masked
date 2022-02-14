
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint64_t ;
typedef int zip_int64_t ;
struct zip_stat {int valid; int size; } ;
struct zip_source {int dummy; } ;
struct window {int skip; int left; void** e; int len; } ;
typedef enum zip_source_cmd { ____Placeholder_zip_source_cmd } zip_source_cmd ;
typedef int b ;


 void* VAR_0 ;


 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct window*) ;
 int FUNC_1 (void*,void**,int) ;
 int FUNC_2 (struct zip_source*,void*,int) ;

__attribute__((used)) static zip_int64_t
FUNC_3(struct zip_source *VAR_5, void *VAR_6, void *VAR_7,
     zip_uint64_t VAR_8, enum zip_source_cmd VAR_9)
{
    struct window *VAR_10;
    zip_int64_t VAR_11;
    zip_uint64_t VAR_12, VAR_13;
    char VAR_14[8192];

    VAR_10 = (struct window *)VAR_6;

    switch (VAR_9) {
    case 130:
 for (VAR_12=0; VAR_12<VAR_10->skip; VAR_12+=(zip_uint64_t)VAR_11) {
     VAR_13 = (VAR_10->skip-VAR_12 > sizeof(VAR_14) ? sizeof(VAR_14) : VAR_10->skip-VAR_12);
     if ((VAR_11=FUNC_2(VAR_5, VAR_14, VAR_13)) < 0)
  return VAR_1;
     if (VAR_11==0) {
  VAR_10->e[0] = VAR_0;
  VAR_10->e[1] = 0;
  return -1;
     }
 }
 return 0;

    case 129:
 if (VAR_8 > VAR_10->left)
     VAR_8 = VAR_10->left;

 if (VAR_8 == 0)
     return 0;

 if ((VAR_11=FUNC_2(VAR_5, VAR_7, VAR_8)) < 0)
     return VAR_1;

 VAR_10->left -= (zip_uint64_t)VAR_11;

        if (VAR_11 == 0) {
     if (VAR_10->left > 0) {
  VAR_10->e[0] = VAR_0;
  VAR_10->e[1] = 0;
  return -1;
     }
 }
 return VAR_11;

    case 133:
 return 0;

    case 128:
 {
     struct zip_stat *VAR_15;

     VAR_15 = (struct zip_stat *)VAR_7;

     VAR_15->size = VAR_10->len;
     VAR_15->valid |= VAR_4;
     VAR_15->valid &= ~(VAR_3|VAR_2);
 }
 return 0;

    case 132:
 FUNC_1(VAR_7, VAR_10->e, sizeof(VAR_10->e));
 return 0;

    case 131:
 FUNC_0(VAR_10);
 return 0;

    default:
 return -1;
    }

}
