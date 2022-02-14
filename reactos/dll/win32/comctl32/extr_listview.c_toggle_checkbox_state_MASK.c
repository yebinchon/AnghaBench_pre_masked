
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stateMask; int state; } ;
typedef TYPE_1__ LVITEMW ;
typedef int LISTVIEW_INFO ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(LISTVIEW_INFO *VAR_1, INT VAR_2)
{
    DWORD VAR_3 = FUNC_3(FUNC_1(VAR_1, VAR_2, VAR_0));
    if(VAR_3 == 1 || VAR_3 == 2)
    {
        LVITEMW VAR_4;
        VAR_3 ^= 3;
        VAR_4.state = FUNC_0(VAR_3);
        VAR_4.stateMask = VAR_0;
        FUNC_2(VAR_1, VAR_2, &VAR_4);
    }
}
