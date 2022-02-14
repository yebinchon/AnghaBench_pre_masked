
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hMainWnd; int hInstance; } ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPCTSTR ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int ,scalar_t__*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(LPCTSTR VAR_6)
{
    TCHAR VAR_7[VAR_1];

    FUNC_2(VAR_0.hInstance, VAR_5, VAR_7, FUNC_0(VAR_7));

    return FUNC_1(VAR_0.hMainWnd, VAR_4,
                               VAR_6[0] ? VAR_6 : VAR_7,
                               VAR_2 | VAR_3);
}
