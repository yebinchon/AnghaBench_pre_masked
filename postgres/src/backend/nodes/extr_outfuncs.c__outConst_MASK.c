
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int constbyval; int constlen; int constvalue; scalar_t__ constisnull; } ;
typedef int StringInfo ;
typedef TYPE_1__ Const ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_7, const Const *VAR_8)
{
 FUNC_3("CONST");

 FUNC_4(VAR_4);
 FUNC_1(VAR_5);
 FUNC_4(VAR_1);
 FUNC_1(VAR_3);
 FUNC_0(VAR_0);
 FUNC_0(VAR_2);
 FUNC_2(VAR_6);

 FUNC_5(VAR_7, " :constvalue ");
 if (VAR_8->constisnull)
  FUNC_5(VAR_7, "<>");
 else
  FUNC_6(VAR_7, VAR_8->constvalue, VAR_8->constlen, VAR_8->constbyval);
}
