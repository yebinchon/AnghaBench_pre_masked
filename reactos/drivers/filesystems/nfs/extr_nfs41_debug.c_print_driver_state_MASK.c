
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;





void FUNC_1(int VAR_0)
{
    switch (VAR_0) {
        case 131:
            FUNC_0("NFS41_START_DRIVER_STARTABLE\n");
            break;
        case 128:
            FUNC_0("NFS41_START_DRIVER_STOPPED\n");
            break;
        case 129:
            FUNC_0("NFS41_START_DRIVER_START_IN_PROGRESS\n");
            break;
        case 130:
            FUNC_0("NFS41_START_DRIVER_STARTED\n");
            break;
        default:
            FUNC_0("UNKNOWN DRIVER STATE %d\n", VAR_0);
    };

}
