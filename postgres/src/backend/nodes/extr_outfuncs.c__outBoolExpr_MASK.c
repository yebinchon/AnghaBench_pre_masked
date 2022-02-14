
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int boolop; } ;
typedef int StringInfo ;
typedef TYPE_1__ BoolExpr ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(StringInfo VAR_2, const BoolExpr *VAR_3)
{
 char *VAR_4 = ((void*)0);

 FUNC_2("BOOLEXPR");


 switch (VAR_3->boolop)
 {
  case 130:
   VAR_4 = "and";
   break;
  case 128:
   VAR_4 = "or";
   break;
  case 129:
   VAR_4 = "not";
   break;
 }
 FUNC_3(VAR_2, " :boolop ");
 FUNC_4(VAR_2, VAR_4);

 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
