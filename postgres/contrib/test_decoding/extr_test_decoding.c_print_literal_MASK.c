
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int Oid ;
 int FUNC_0 (char,int) ;

 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(StringInfo VAR_0, Oid VAR_1, char *VAR_2)
{
 const char *VAR_3;

 switch (VAR_1)
 {
  case 133:
  case 132:
  case 131:
  case 129:
  case 135:
  case 134:
  case 130:

   FUNC_3(VAR_0, VAR_2);
   break;

  case 137:
  case 128:
   FUNC_1(VAR_0, "B'%s'", VAR_2);
   break;

  case 136:
   if (FUNC_4(VAR_2, "t") == 0)
    FUNC_3(VAR_0, "true");
   else
    FUNC_3(VAR_0, "false");
   break;

  default:
   FUNC_2(VAR_0, '\'');
   for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
   {
    char VAR_4 = *VAR_3;

    if (FUNC_0(VAR_4, 0))
     FUNC_2(VAR_0, VAR_4);
    FUNC_2(VAR_0, VAR_4);
   }
   FUNC_2(VAR_0, '\'');
   break;
 }
}
