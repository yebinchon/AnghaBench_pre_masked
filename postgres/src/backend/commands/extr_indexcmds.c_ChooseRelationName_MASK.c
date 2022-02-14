
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int modlabel ;
typedef int Oid ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (char const*,char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,char const*,int) ;

char *
FUNC_7(const char *VAR_1, const char *VAR_2,
       const char *VAR_3, Oid VAR_4,
       bool VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 char VAR_8[VAR_0];


 FUNC_2(VAR_8, VAR_3, sizeof(VAR_8));

 for (;;)
 {
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_8);

  if (!FUNC_1(FUNC_3(VAR_7, VAR_4)))
  {
   if (!VAR_5 ||
    !FUNC_0(VAR_7, VAR_4))
    break;
  }


  FUNC_5(VAR_7);
  FUNC_6(VAR_8, sizeof(VAR_8), "%s%d", VAR_3, ++VAR_6);
 }

 return VAR_7;
}
