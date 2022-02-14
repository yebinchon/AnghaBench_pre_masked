
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int NTSTATUS ;
typedef int LONGLONG ;


 int FUNC_0 (char*,char const*,...) ;




void FUNC_1(int VAR_0, const char *VAR_1, NTSTATUS VAR_2,
                       const char *VAR_3, PVOID VAR_4, LONGLONG VAR_5)
{
    if (!VAR_0) return;
    switch (VAR_2) {
    case 129:
        if (VAR_3)
            FUNC_0("%s Got a wakeup call, finishing %s entry=%p xid=%lld\n",
                VAR_1, VAR_3, VAR_4, VAR_5);
        else
            FUNC_0("%s Got a wakeup call\n", VAR_1);
        break;
    case 128:
        FUNC_0("%s KeWaitForSingleObject returned STATUS_USER_APC\n", VAR_1);
        break;
    case 130:
        FUNC_0("%s KeWaitForSingleObject returned STATUS_ALERTED\n", VAR_1);
        break;
    default:
        FUNC_0("%s KeWaitForSingleObject returned %d\n", VAR_1, VAR_2);
    }
}
