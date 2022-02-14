
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_type {int dummy; } ;


 struct hash_type* FUNC_0 (char*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (struct hash_type*,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char const*) ;

int FUNC_4(int VAR_1, char **VAR_2)
{
 struct hash_type *VAR_3;
 const char *VAR_4 = VAR_2[0];
 int VAR_5, VAR_6;
 bool VAR_7 = 0;

 while ((VAR_6 = FUNC_1(VAR_1, VAR_2, "n")) != -1) {
  switch (VAR_6) {
  case 'n':
   VAR_7 = 1;
   break;
  default:
   return FUNC_3(VAR_4);
  }
 }

 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 if (VAR_1 < 1)
  return FUNC_3(VAR_4);

 VAR_3 = FUNC_0(VAR_2[0]);
 if (!VAR_3)
  return FUNC_3(VAR_4);

 if (VAR_1 < 2)
  return FUNC_2(VAR_3, ((void*)0), VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++)
  FUNC_2(VAR_3, VAR_2[1 + VAR_5], VAR_7);

 return 0;
}
