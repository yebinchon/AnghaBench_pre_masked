
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ shi2_max_uses; scalar_t__ shi2_current_uses; int shi2_remark; int shi2_path; int shi2_netname; } ;
typedef int PWSTR ;
typedef TYPE_1__* PSHARE_INFO_2 ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPBYTE ;
typedef int INT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ,int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;

NET_API_STATUS
FUNC_5(
    PWSTR VAR_2)
{
    PSHARE_INFO_2 VAR_3 = ((void*)0);
    INT VAR_4 = 22;
    NET_API_STATUS VAR_5;

    VAR_5 = FUNC_2(((void*)0),
                             VAR_2,
                             2,
                             (LPBYTE*)&VAR_3);
    if (VAR_5 != VAR_0)
        return VAR_5;

    FUNC_4(4731, VAR_4);
    FUNC_0(VAR_1, L"%s\n", VAR_3->shi2_netname);

    FUNC_4(4339, VAR_4);
    FUNC_0(VAR_1, L"%s\n", VAR_3->shi2_path);

    FUNC_4(4334, VAR_4);
    FUNC_0(VAR_1, L"%s\n", VAR_3->shi2_remark);

    FUNC_4(4735, VAR_4);
    if (VAR_3->shi2_max_uses == (DWORD)-1)
        FUNC_3(4736);
    else
        FUNC_0(VAR_1, L"%lu", VAR_3->shi2_max_uses);
    FUNC_0(VAR_1, L"\n");

    FUNC_4(4737, VAR_4);
    if (VAR_3->shi2_current_uses > 0)
        FUNC_0(VAR_1, L"%lu", VAR_3->shi2_current_uses);
    FUNC_0(VAR_1, L"\n");

    FUNC_1(VAR_3);

    return VAR_0;
}
