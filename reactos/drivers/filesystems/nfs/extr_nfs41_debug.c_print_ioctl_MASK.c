
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;




void FUNC_1(int VAR_0, int VAR_1)
{
    if(!VAR_0) return;
    switch(VAR_1) {
        case 129:
            FUNC_0("IRP_MJ_FILE_SYSTEM_CONTROL\n");
            break;
        case 130:
            FUNC_0("IRP_MJ_DEVICE_CONTROL\n");
            break;
        case 128:
            FUNC_0("IRP_MJ_INTERNAL_DEVICE_CONTROL\n");
            break;
        default:
            FUNC_0("UNKNOWN MJ IRP %d\n", VAR_1);
    };
}
