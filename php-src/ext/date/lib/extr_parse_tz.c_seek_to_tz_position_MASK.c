
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int index_size; unsigned char* data; TYPE_1__* index; } ;
typedef TYPE_2__ timelib_tzdb ;
struct TYPE_4__ {size_t pos; int id; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(const unsigned char **VAR_0, char *VAR_1, const timelib_tzdb *VAR_2)
{
 int VAR_3 = 0, VAR_4 = VAR_2->index_size - 1;

 if (VAR_2->index_size == 0) {
  return 0;
 }

 do {
  int VAR_5 = ((unsigned)VAR_3 + VAR_4) >> 1;
  int VAR_6 = FUNC_0(VAR_1, VAR_2->index[VAR_5].id);

  if (VAR_6 < 0) {
   VAR_4 = VAR_5 - 1;
  } else if (VAR_6 > 0) {
   VAR_3 = VAR_5 + 1;
  } else {
   (*VAR_0) = &(VAR_2->data[VAR_2->index[VAR_5].pos]);
   return 1;
  }

 } while (VAR_3 <= VAR_4);

 return 0;
}
