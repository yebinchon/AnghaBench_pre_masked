
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int style; int hwndSelf; } ;
typedef int LPWSTR ;
typedef int HGLOBAL ;
typedef TYPE_1__ EDITSTATE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(EDITSTATE *VAR_5)
{
 HGLOBAL VAR_6;
 LPWSTR VAR_7;


 if(VAR_5->style & VAR_2)
     return;

 FUNC_5(VAR_5->hwndSelf);
 if ((VAR_6 = FUNC_2(VAR_0))) {
  VAR_7 = FUNC_3(VAR_6);
  FUNC_1(VAR_5, VAR_3, VAR_7, VAR_3, VAR_3);
  FUNC_4(VAR_6);
 }
        else if (VAR_5->style & VAR_1) {

            FUNC_1(VAR_5, VAR_3, VAR_4, VAR_3, VAR_3);
        }
 FUNC_0();
}
