
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
void FUNC_1(int VAR_0, int VAR_1)
{
    if (!VAR_0) return;
    switch (VAR_1) {
    case 137:
        FUNC_0("[ERROR] nfs41_Create: STATUS_ACCESS_DENIED\n");
        break;
    case 133:
        FUNC_0("[ERROR] nfs41_Create: STATUS_NETWORK_ACCESS_DENIED\n");
        break;
    case 131:
        FUNC_0("[ERROR] nfs41_Create: STATUS_OBJECT_NAME_INVALID\n");
        break;
    case 132:
        FUNC_0("[ERROR] nfs41_Create: STATUS_OBJECT_NAME_COLLISION\n");
        break;
    case 135:
        FUNC_0("[ERROR] nfs41_Create: STATUS_FILE_INVALID\n");
        break;
    case 130:
        FUNC_0("[ERROR] nfs41_Create: STATUS_OBJECT_NAME_NOT_FOUND\n");
        break;
    case 134:
        FUNC_0("[ERROR] nfs41_Create: STATUS_NAME_TOO_LONG\n");
        break;
    case 129:
        FUNC_0("[ERROR] nfs41_Create: STATUS_OBJECT_PATH_NOT_FOUND\n");
        break;
    case 136:
        FUNC_0("[ERROR] nfs41_Create: STATUS_BAD_NETWORK_PATH\n");
        break;
    case 128:
        FUNC_0("[ERROR] nfs41_Create: STATUS_SHARING_VIOLATION\n");
        break;
    case 139:
        FUNC_0("[ERROR] nfs41_Create: STATUS_REPARSE\n");
        break;
    case 138:
        FUNC_0("[ERROR] nfs41_Create: STATUS_TOO_MANY_LINKS\n");
        break;
    case 140:
        FUNC_0("[ERROR] nfs41_Create: STATUS_FILE_IS_A_DIRECTORY\n");
        break;
    case 141:
        FUNC_0("[ERROR] nfs41_Create: STATUS_NOT_A_DIRECTORY\n");
        break;
    default:
        FUNC_0("[ERROR] nfs41_Create: STATUS_INSUFFICIENT_RESOURCES\n");
        break;
    }
}
