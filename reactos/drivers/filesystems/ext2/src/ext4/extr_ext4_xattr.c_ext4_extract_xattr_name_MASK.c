
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int __u8 ;
struct TYPE_2__ {char* prefix; int name_index; } ;
typedef int BOOL ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*,size_t) ;
 TYPE_1__* VAR_2 ;
 size_t FUNC_2 (char*) ;

const char *FUNC_3(const char *VAR_3, size_t VAR_4,
         __u8 *VAR_5, size_t *VAR_6,
         BOOL *VAR_7)
{
 int VAR_8;
 FUNC_0(VAR_5);
 FUNC_0(VAR_7);

 *VAR_7 = VAR_0;

 if (!VAR_4) {
  if (VAR_6)
   *VAR_6 = 0;

  return ((void*)0);
 }

 for (VAR_8 = 0; VAR_2[VAR_8].prefix; VAR_8++) {
  size_t VAR_9 = FUNC_2(VAR_2[VAR_8].prefix);
  if (VAR_4 >= VAR_9 &&
      !FUNC_1(VAR_3, VAR_2[VAR_8].prefix, VAR_9)) {
   BOOL VAR_10 =
    VAR_2[VAR_8].prefix[VAR_9 - 1] == '.';
   *VAR_5 = VAR_2[VAR_8].name_index;
   if (VAR_6)
    *VAR_6 = VAR_4 - VAR_9;

   if (!(VAR_4 - VAR_9) && VAR_10)
    return ((void*)0);

   *VAR_7 = VAR_1;
   if (VAR_10)
    return VAR_3 + VAR_9;

   return ((void*)0);
  }
 }
 if (VAR_6)
  *VAR_6 = 0;

 return ((void*)0);
}
