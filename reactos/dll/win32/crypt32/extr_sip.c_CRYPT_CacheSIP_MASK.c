
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; int info; int subject; } ;
typedef TYPE_1__ WINE_SIP_PROVIDER ;
typedef int SIP_DISPATCH_INFO ;
typedef int GUID ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(const GUID *VAR_2, SIP_DISPATCH_INFO *VAR_3)
{
    WINE_SIP_PROVIDER *VAR_4 = FUNC_0(sizeof(WINE_SIP_PROVIDER));

    if (VAR_4)
    {
        VAR_4->subject = *VAR_2;
        VAR_4->info = *VAR_3;
        FUNC_1(&VAR_1);
        FUNC_3(&VAR_0, &VAR_4->entry);
        FUNC_2(&VAR_1);
    }
}
