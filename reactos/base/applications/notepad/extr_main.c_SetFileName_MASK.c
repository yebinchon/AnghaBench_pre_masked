
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {scalar_t__* szFileTitle; scalar_t__* szFileName; } ;
typedef int LPCTSTR ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (scalar_t__*,int ,int ) ;

VOID FUNC_3(LPCTSTR VAR_1)
{
    FUNC_2(VAR_0.szFileName, FUNC_0(VAR_0.szFileName), VAR_1);
    VAR_0.szFileTitle[0] = 0;
    FUNC_1(VAR_1, VAR_0.szFileTitle, FUNC_0(VAR_0.szFileTitle));
}
