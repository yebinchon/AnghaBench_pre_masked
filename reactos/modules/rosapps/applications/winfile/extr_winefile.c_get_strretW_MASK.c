
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uType; scalar_t__ (* UNION_MEMBER ) (int ) ;} ;
typedef TYPE_1__ STRRET ;
typedef int SHITEMID ;
typedef int LPWSTR ;
typedef scalar_t__ LPCSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int,int ,int) ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(STRRET* VAR_4, const SHITEMID* VAR_5, LPWSTR VAR_6, int VAR_7)
{
 switch(VAR_4->uType) {
  case 128:
 FUNC_4(VAR_6, VAR_4->UNION_MEMBER(VAR_2), VAR_7);
 break;

  case 129:
 FUNC_0(VAR_0, 0, (LPCSTR)VAR_5+VAR_4->UNION_MEMBER(VAR_3), -1, VAR_6, VAR_7);
 break;

  case 130:
 FUNC_0(VAR_0, 0, VAR_4->UNION_MEMBER(VAR_1), -1, VAR_6, VAR_7);
 }
}
