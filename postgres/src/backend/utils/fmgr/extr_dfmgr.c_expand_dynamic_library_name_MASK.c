
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*,int ) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static char *
FUNC_8(const char *VAR_1)
{
 bool VAR_2;
 char *VAR_3;
 char *VAR_4;

 FUNC_0(VAR_1);

 VAR_2 = (FUNC_3(VAR_1) != ((void*)0));

 if (!VAR_2)
 {
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4)
   return VAR_4;
 }
 else
 {
  VAR_4 = FUNC_7(VAR_1);
  if (FUNC_1(VAR_4))
   return VAR_4;
  FUNC_4(VAR_4);
 }

 VAR_3 = FUNC_5("%s%s", VAR_1, VAR_0);

 if (!VAR_2)
 {
  VAR_4 = FUNC_2(VAR_3);
  FUNC_4(VAR_3);
  if (VAR_4)
   return VAR_4;
 }
 else
 {
  VAR_4 = FUNC_7(VAR_3);
  FUNC_4(VAR_3);
  if (FUNC_1(VAR_4))
   return VAR_4;
  FUNC_4(VAR_4);
 }





 return FUNC_6(VAR_1);
}
