
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int *** aliases; int * short_name; int * name; } ;
typedef TYPE_1__ mbfl_language ;


 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

const mbfl_language *
FUNC_1(const char *VAR_1)
{
 const mbfl_language *VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_3 = 0;
 while ((VAR_2 = VAR_0[VAR_3++]) != ((void*)0)){
  if (FUNC_0(VAR_2->name, VAR_1) == 0) {
   return VAR_2;
  }
 }

 VAR_3 = 0;
 while ((VAR_2 = VAR_0[VAR_3++]) != ((void*)0)){
  if (FUNC_0(VAR_2->short_name, VAR_1) == 0) {
   return VAR_2;
  }
 }


 VAR_3 = 0;
 while ((VAR_2 = VAR_0[VAR_3++]) != ((void*)0)) {
  if (VAR_2->aliases != ((void*)0)) {
   VAR_4 = 0;
   while ((*VAR_2->aliases)[VAR_4] != ((void*)0)) {
    if (FUNC_0((*VAR_2->aliases)[VAR_4], VAR_1) == 0) {
     return VAR_2;
    }
    VAR_4++;
   }
  }
 }

 return ((void*)0);
}
