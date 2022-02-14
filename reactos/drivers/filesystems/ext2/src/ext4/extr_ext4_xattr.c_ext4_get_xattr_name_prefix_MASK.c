
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ __u8 ;
struct TYPE_2__ {char const* prefix; scalar_t__ name_index; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (char const*) ;

const char *FUNC_1(__u8 VAR_1,
           size_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].prefix; VAR_3++) {
  size_t VAR_4 = FUNC_0(VAR_0[VAR_3].prefix);
  if (VAR_0[VAR_3].name_index == VAR_1) {
   if (VAR_2)
    *VAR_2 = VAR_4;

   return VAR_0[VAR_3].prefix;
  }
 }
 if (VAR_2)
  *VAR_2 = 0;

 return ((void*)0);
}
