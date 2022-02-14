
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int locks_supported; int ILockBytes_iface; scalar_t__ lock_hr; int lock_called; } ;
typedef TYPE_1__ TestLockBytes ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,char const*,int,int ,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (int *,int,int ,int **) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_9[] = { 'C','O','N','T','E','N','T','S',0 };
    TestLockBytes* VAR_10;
    HRESULT VAR_11;
    IStorage* VAR_12;
    IStream* VAR_13;

    FUNC_0(&VAR_10);

    VAR_11 = FUNC_6(&VAR_10->ILockBytes_iface, VAR_3|VAR_4|VAR_6, 0, &VAR_12);
    FUNC_7(VAR_11==VAR_8, "StgCreateDocfileOnILockBytes failed %x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_12, VAR_9, VAR_5|VAR_4, 0, 0, &VAR_13);
    FUNC_7(VAR_11==VAR_8, "IStorage_CreateStream failed %x\n", VAR_11);

    FUNC_5(VAR_13);

    VAR_11 = FUNC_2(VAR_12, 0);

    FUNC_4(VAR_12);

    FUNC_7(!VAR_10->lock_called, "unexpected call to LockRegion\n");

    VAR_10->locks_supported = VAR_2|VAR_0|VAR_1;

    VAR_11 = FUNC_6(&VAR_10->ILockBytes_iface, VAR_3|VAR_4|VAR_6, 0, &VAR_12);
    FUNC_7(VAR_11==VAR_8, "StgCreateDocfileOnILockBytes failed %x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_12, VAR_9, VAR_5|VAR_4, 0, 0, &VAR_13);
    FUNC_7(VAR_11==VAR_8, "IStorage_CreateStream failed %x\n", VAR_11);

    FUNC_5(VAR_13);

    VAR_11 = FUNC_2(VAR_12, 0);

    FUNC_4(VAR_12);

    FUNC_7(VAR_10->lock_called, "expected LockRegion to be called\n");

    VAR_10->lock_hr = VAR_7;

    VAR_11 = FUNC_6(&VAR_10->ILockBytes_iface, VAR_3|VAR_4|VAR_6, 0, &VAR_12);
    FUNC_7(VAR_11==VAR_7, "StgCreateDocfileOnILockBytes failed %x\n", VAR_11);

    FUNC_1(VAR_10);
}
