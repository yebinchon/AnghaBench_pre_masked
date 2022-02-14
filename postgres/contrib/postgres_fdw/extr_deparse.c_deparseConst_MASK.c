
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_6__ {int consttype; int consttypmod; int constvalue; scalar_t__ constisnull; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef TYPE_2__ Const ;
 char* FUNC_0 (int ,int ) ;


 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (int,int *,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(Const *VAR_0, deparse_expr_cxt *VAR_1, int VAR_2)
{
 StringInfo VAR_3 = VAR_1->buf;
 Oid VAR_4;
 bool VAR_5;
 char *VAR_6;
 bool VAR_7 = 0;
 bool VAR_8;

 if (VAR_0->constisnull)
 {
  FUNC_2(VAR_3, "NULL");
  if (VAR_2 >= 0)
   FUNC_1(VAR_3, "::%s",
        FUNC_4(VAR_0->consttype,
              VAR_0->consttypmod));
  return;
 }

 FUNC_5(VAR_0->consttype,
       &VAR_4, &VAR_5);
 VAR_6 = FUNC_0(VAR_4, VAR_0->constvalue);

 switch (VAR_0->consttype)
 {
  case 134:
  case 133:
  case 132:
  case 130:
  case 136:
  case 135:
  case 131:
   {




    if (FUNC_10(VAR_6, "0123456789+-eE.") == FUNC_9(VAR_6))
    {
     if (VAR_6[0] == '+' || VAR_6[0] == '-')
      FUNC_1(VAR_3, "(%s)", VAR_6);
     else
      FUNC_2(VAR_3, VAR_6);
     if (FUNC_8(VAR_6, "eE.") != FUNC_9(VAR_6))
      VAR_7 = 1;
    }
    else
     FUNC_1(VAR_3, "'%s'", VAR_6);
   }
   break;
  case 138:
  case 128:
   FUNC_1(VAR_3, "B'%s'", VAR_6);
   break;
  case 137:
   if (FUNC_7(VAR_6, "t") == 0)
    FUNC_2(VAR_3, "true");
   else
    FUNC_2(VAR_3, "false");
   break;
  default:
   FUNC_3(VAR_3, VAR_6);
   break;
 }

 FUNC_6(VAR_6);

 if (VAR_2 < 0)
  return;
 switch (VAR_0->consttype)
 {
  case 137:
  case 133:
  case 129:
   VAR_8 = 0;
   break;
  case 131:
   VAR_8 = !VAR_7 || (VAR_0->consttypmod >= 0);
   break;
  default:
   VAR_8 = 1;
   break;
 }
 if (VAR_8 || VAR_2 > 0)
  FUNC_1(VAR_3, "::%s",
       FUNC_4(VAR_0->consttype,
             VAR_0->consttypmod));
}
