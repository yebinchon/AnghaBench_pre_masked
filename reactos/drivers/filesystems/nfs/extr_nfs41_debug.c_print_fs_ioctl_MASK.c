
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
void FUNC_1(int VAR_0, int VAR_1)
{
    if(!VAR_0) return;
    switch(VAR_1) {
        case 132:
            FUNC_0("IOCTL_NFS41_INVALCACHE\n");
            break;
        case 131:
            FUNC_0("IOCTL_NFS41_UPCALL\n");
            break;
        case 128:
            FUNC_0("IOCTL_NFS41_DOWNCALL\n");
            break;
        case 135:
            FUNC_0("IOCTL_NFS41_ADDCONN\n");
            break;
        case 134:
            FUNC_0("IOCTL_NFS41_DELCONN\n");
            break;
        case 133:
            FUNC_0("IOCTL_NFS41_GETSTATE\n");
            break;
        case 130:
            FUNC_0("IOCTL_NFS41_START\n");
            break;
        case 129:
            FUNC_0("IOCTL_NFS41_STOP\n");
            break;
        default:
            FUNC_0("UNKNOWN FS IOCTL %d\n", VAR_1);
    };
}
