
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int (* GetInfo ) (TYPE_1__*) ;} ;
struct TYPE_8__ {int fCapabilities; int wVersion; int wRPCID; int cbMaxToken; } ;
typedef TYPE_1__ SecPkgInfoW ;
typedef TYPE_2__* PSECPKG_FUNCTION_TABLE ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,int*,TYPE_2__**,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    PSECPKG_FUNCTION_TABLE VAR_4;
    SecPkgInfoW VAR_5;
    ULONG VAR_6, VAR_7;
    NTSTATUS VAR_8;


    VAR_8 = FUNC_3(0, &VAR_7, &VAR_4, &VAR_6);
    FUNC_2(VAR_8 == VAR_3, "status: 0x%x\n", VAR_8);




    VAR_8 = VAR_4->GetInfo(&VAR_5);
    FUNC_2(VAR_8 == VAR_3, "status: 0x%x\n", VAR_8);
    FUNC_2(VAR_5.fCapabilities == VAR_0 ||
       VAR_5.fCapabilities == (VAR_0|VAR_1),
       "fCapabilities: 0x%x\n", VAR_5.fCapabilities);
    FUNC_2(VAR_5.wVersion == 1, "wVersion: %d\n", VAR_5.wVersion);
    FUNC_2(VAR_5.wRPCID == 14, "wRPCID: %d\n", VAR_5.wRPCID);
    FUNC_2(VAR_5.cbMaxToken == 0x4000 ||
       VAR_5.cbMaxToken == 0x6000,
       "cbMaxToken: 0x%x\n",
       VAR_5.cbMaxToken);


    if (VAR_6 == 1)
    {
        FUNC_6("Second package missing\n");
        return;
    }
    VAR_4 = FUNC_1(VAR_4, VAR_7);
    if (!VAR_4)
        return;
    if (!VAR_4->GetInfo)
    {
        FUNC_6("GetInfo function missing\n");
        return;
    }
    VAR_8 = VAR_4->GetInfo(&VAR_5);
    FUNC_2(FUNC_0(VAR_8) ||
       VAR_8 == VAR_2,
       "status: 0x%x\n", VAR_8);

    if (FUNC_0(VAR_8))
    {
        FUNC_2(VAR_5.fCapabilities == VAR_0 ||
           VAR_5.fCapabilities == (VAR_0|VAR_1),
           "fCapabilities: 0x%x\n", VAR_5.fCapabilities);
        FUNC_2(VAR_5.wVersion == 1, "wVersion: %d\n", VAR_5.wVersion);
        FUNC_2(VAR_5.wRPCID == 14, "wRPCID: %d\n", VAR_5.wRPCID);
        FUNC_2(VAR_5.cbMaxToken == 0x4000 ||
           VAR_5.cbMaxToken == 0x6000,
           "cbMaxToken: 0x%x\n",
           VAR_5.cbMaxToken);
    }
}
