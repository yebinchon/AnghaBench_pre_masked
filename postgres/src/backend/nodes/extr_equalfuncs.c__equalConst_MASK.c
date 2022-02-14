
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int constlen; int constbyval; int constvalue; scalar_t__ constisnull; } ;
typedef TYPE_1__ Const ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_3(const Const *VAR_7, const Const *VAR_8)
{
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
 FUNC_1(VAR_1);
 FUNC_1(VAR_3);
 FUNC_1(VAR_2);
 FUNC_1(VAR_0);
 FUNC_0(VAR_6);





 if (VAR_7->constisnull)
  return 1;
 return FUNC_2(VAR_7->constvalue, VAR_8->constvalue,
      VAR_7->constbyval, VAR_7->constlen);
}
