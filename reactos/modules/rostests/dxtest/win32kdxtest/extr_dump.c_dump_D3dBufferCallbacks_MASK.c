
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwSize; scalar_t__ UnlockD3DBuffer; scalar_t__ LockD3DBuffer; scalar_t__ DestroyD3DBuffer; scalar_t__ CreateD3DBuffer; scalar_t__ CanCreateD3DBuffer; int dwFlags; } ;
typedef int DWORD ;
typedef TYPE_1__ DD_D3DBUFCALLBACKS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(DD_D3DBUFCALLBACKS *VAR_5, char *VAR_6)
{
    int VAR_7 = 0;
    DWORD VAR_8 = 0;

    FUNC_2("dumping the DD_D3DBUFCALLBACKS from %s\n",VAR_6);

    if (VAR_5->dwSize == sizeof(DD_D3DBUFCALLBACKS))
    {
        FUNC_2(" puD3dBufferCallbacks->dwSize                                   : 0x%08lx\n",(long)VAR_5->dwSize);
        FUNC_2(" puD3dBufferCallbacks->dwFlags                                  : ");


        VAR_7 = 0;
        VAR_8 = VAR_5->dwFlags;
        FUNC_0(VAR_8,VAR_0,"DDHAL_D3DBUFCB32_CANCREATED3DBUF");
        FUNC_0(VAR_8,VAR_1,"DDHAL_D3DBUFCB32_CREATED3DBUF");

        FUNC_0(VAR_8,VAR_2,"DDHAL_D3DBUFCB32_DESTROYD3DBUF");

        FUNC_0(VAR_8,VAR_3,"DDHAL_D3DBUFCB32_LOCKD3DBUF");
        FUNC_0(VAR_8,VAR_4,"DDHAL_D3DBUFCB32_UNLOCKD3DBUF");
        FUNC_1(VAR_8,"puD3dBufferCallbacks->dwFlags");

        FUNC_2(" puD3dBufferCallbacks->CanCreateD3DBuffer                       : 0x%08lx\n",(long)VAR_5->CanCreateD3DBuffer);
        FUNC_2(" puD3dBufferCallbacks->CreateD3DBuffer                          : 0x%08lx\n",(long)VAR_5->CreateD3DBuffer);
        FUNC_2(" puD3dBufferCallbacks->DestroyD3DBuffer                         : 0x%08lx\n",(long)VAR_5->DestroyD3DBuffer);
        FUNC_2(" puD3dBufferCallbacks->LockD3DBuffer                            : 0x%08lx\n",(long)VAR_5->LockD3DBuffer);
        FUNC_2(" puD3dBufferCallbacks->UnlockD3DBuffer                          : 0x%08lx\n",(long)VAR_5->UnlockD3DBuffer);
    }
    else
    {
        FUNC_2("none puD3dBufferCallbacks from the driver 0x%08lx\n",VAR_5->dwSize);
    }

}
