
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int QuadPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
struct TYPE_8__ {int LowPart; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_11__ {TYPE_2__ cbSize; int clsid; } ;
typedef TYPE_4__ STATSTG ;
typedef int IStorage ;
typedef int ILockBytes ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__,char*,int,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int *,int,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int *,int,int *,int ,int **) ;
 int VAR_7 ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (int,char*,...) ;

__attribute__((used)) static void FUNC_12(void)
{
    ILockBytes *VAR_8 = ((void*)0);
    IStorage *VAR_9 = ((void*)0);
    HRESULT VAR_10;
    STATSTG VAR_11;
    char VAR_12[512];
    ULARGE_INTEGER VAR_13;

    VAR_10 = FUNC_0(((void*)0), VAR_7, &VAR_8);
    FUNC_11(VAR_10 == VAR_6, "CreateILockBytesOnHGlobal failed, hr=%x\n", VAR_10);

    VAR_13.QuadPart = 0;
    FUNC_10(VAR_12, 0xaa, 512);
    VAR_10 = FUNC_3(VAR_8, VAR_13, VAR_12, 512, ((void*)0));
    FUNC_11(VAR_10 == VAR_6, "ILockBytes_WriteAt failed, hr=%x\n", VAR_10);

    VAR_13.QuadPart = 2000;
    VAR_10 = FUNC_3(VAR_8, VAR_13, VAR_12, 512, ((void*)0));
    FUNC_11(VAR_10 == VAR_6, "ILockBytes_WriteAt failed, hr=%x\n", VAR_10);

    VAR_10 = FUNC_8(VAR_8, VAR_2|VAR_5|VAR_4, 0, &VAR_9);
    FUNC_11(VAR_10 == VAR_6, "StgCreateDocfileOnILockBytes failed, hr=%x\n", VAR_10);

    FUNC_4(VAR_9);

    VAR_10 = FUNC_9(VAR_8, ((void*)0), VAR_3|VAR_5,
        ((void*)0), 0, &VAR_9);
    FUNC_11(VAR_10 == VAR_6, "StgOpenStorageOnILockBytes failed, hr=%x\n", VAR_10);

    if (FUNC_7(VAR_10))
    {
        VAR_10 = FUNC_5(VAR_9, &VAR_11, VAR_1);
        FUNC_11(VAR_10 == VAR_6, "StgOpenStorageOnILockBytes failed, hr=%x\n", VAR_10);
        FUNC_11(FUNC_6(&VAR_11.clsid, &VAR_0), "unexpected CLSID value\n");

        FUNC_4(VAR_9);
    }

    VAR_10 = FUNC_2(VAR_8, &VAR_11, VAR_1);
    FUNC_11(VAR_10 == VAR_6, "ILockBytes_Stat failed, hr=%x\n", VAR_10);
    FUNC_11(VAR_11.cbSize.u.LowPart < 2512, "expected truncated size, got %d\n", VAR_11.cbSize.u.LowPart);

    FUNC_1(VAR_8);
}
