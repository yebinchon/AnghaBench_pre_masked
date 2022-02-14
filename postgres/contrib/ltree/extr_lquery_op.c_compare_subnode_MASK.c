
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int len; } ;
typedef TYPE_1__ ltree_level ;


 char* FUNC_0 (char*,char*,int*) ;
 int FUNC_1 (char const*,char const*,size_t) ;

bool
FUNC_2(ltree_level *VAR_0, char *VAR_1, int VAR_2, int (*VAR_3) (const char *, const char *, size_t), bool VAR_4)
{
 char *VAR_5 = VAR_0->name + VAR_0->len;
 char *VAR_6 = VAR_1 + VAR_2;
 char *VAR_7;
 int VAR_8,
    VAR_9;
 bool VAR_10;

 while ((VAR_1 = FUNC_0(VAR_1, VAR_6, &VAR_9)) != ((void*)0))
 {
  VAR_7 = VAR_0->name;
  VAR_10 = 0;
  while ((VAR_7 = FUNC_0(VAR_7, VAR_5, &VAR_8)) != ((void*)0))
  {
   if (
    (
     VAR_8 == VAR_9 ||
     (VAR_8 > VAR_9 && VAR_4)
     ) &&
    (*VAR_3) (VAR_1, VAR_7, VAR_9) == 0)
   {

    VAR_10 = 1;
    break;
   }
   VAR_7 += VAR_8;
  }

  if (!VAR_10)
   return 0;
  VAR_1 += VAR_9;
 }

 return 1;
}
