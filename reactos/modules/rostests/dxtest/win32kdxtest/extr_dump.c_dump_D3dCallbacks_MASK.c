
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwSize; scalar_t__ dwReserved9; scalar_t__ dwReserved8; scalar_t__ dwReserved7; scalar_t__ dwReserved6; scalar_t__ dwReserved5; scalar_t__ dwReserved4; scalar_t__ dwReserved3; scalar_t__ dwReserved2; scalar_t__ dwReserved1; scalar_t__ dwReserved0; scalar_t__ dwReserved24; scalar_t__ dwReserved21; scalar_t__ dwReserved20; scalar_t__ dwReserved19; scalar_t__ dwReserved18; scalar_t__ dwReserved17; scalar_t__ dwReserved16; scalar_t__ dwReserved15; scalar_t__ dwReserved14; scalar_t__ dwReserved13; scalar_t__ dwReserved12; scalar_t__ TextureGetSurf; scalar_t__ TextureSwap; scalar_t__ TextureDestroy; scalar_t__ TextureCreate; scalar_t__ dwReserved; scalar_t__ dwReserved23; scalar_t__ dwReserved22; scalar_t__ dwReserved11; scalar_t__ dwReserved10; scalar_t__ SceneCapture; scalar_t__ ContextDestroyAll; scalar_t__ ContextDestroy; scalar_t__ ContextCreate; } ;
typedef TYPE_1__ D3DNTHAL_CALLBACKS ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(D3DNTHAL_CALLBACKS *VAR_0, char *VAR_1)
{
    FUNC_0("dumping the D3DNTHAL_CALLBACKS from %s\n",VAR_1);
    if (VAR_0->dwSize == sizeof(D3DNTHAL_CALLBACKS))
    {
        FUNC_0(" puD3dCallbacks->dwSize                                         : 0x%08lx\n",(long)VAR_0->dwSize);
        FUNC_0(" puD3dCallbacks->ContextCreate                                  : 0x%08lx\n",(long)VAR_0->ContextCreate);
        FUNC_0(" puD3dCallbacks->ContextDestroy                                 : 0x%08lx\n",(long)VAR_0->ContextDestroy);
        FUNC_0(" puD3dCallbacks->ContextDestroyAll                              : 0x%08lx\n",(long)VAR_0->ContextDestroyAll);
        FUNC_0(" puD3dCallbacks->SceneCapture                                   : 0x%08lx\n",(long)VAR_0->SceneCapture);
        FUNC_0(" puD3dCallbacks->dwReserved10                                   : 0x%08lx\n",(long)VAR_0->dwReserved10);
        FUNC_0(" puD3dCallbacks->dwReserved11                                   : 0x%08lx\n",(long)VAR_0->dwReserved11);
        FUNC_0(" puD3dCallbacks->dwReserved22                                   : 0x%08lx\n",(long)VAR_0->dwReserved22);
        FUNC_0(" puD3dCallbacks->dwReserved23                                   : 0x%08lx\n",(long)VAR_0->dwReserved23);
        FUNC_0(" puD3dCallbacks->dwReserved                                     : 0x%08lx\n",(long)VAR_0->dwReserved);
        FUNC_0(" puD3dCallbacks->TextureCreate                                  : 0x%08lx\n",(long)VAR_0->TextureCreate);
        FUNC_0(" puD3dCallbacks->TextureDestroy                                 : 0x%08lx\n",(long)VAR_0->TextureDestroy);
        FUNC_0(" puD3dCallbacks->TextureSwap                                    : 0x%08lx\n",(long)VAR_0->TextureSwap);
        FUNC_0(" puD3dCallbacks->TextureGetSurf                                 : 0x%08lx\n",(long)VAR_0->TextureGetSurf);
        FUNC_0(" puD3dCallbacks->dwReserved12                                   : 0x%08lx\n",(long)VAR_0->dwReserved12);
        FUNC_0(" puD3dCallbacks->dwReserved13                                   : 0x%08lx\n",(long)VAR_0->dwReserved13);
        FUNC_0(" puD3dCallbacks->dwReserved14                                   : 0x%08lx\n",(long)VAR_0->dwReserved14);
        FUNC_0(" puD3dCallbacks->dwReserved15                                   : 0x%08lx\n",(long)VAR_0->dwReserved15);
        FUNC_0(" puD3dCallbacks->dwReserved16                                   : 0x%08lx\n",(long)VAR_0->dwReserved16);
        FUNC_0(" puD3dCallbacks->dwReserved17                                   : 0x%08lx\n",(long)VAR_0->dwReserved17);
        FUNC_0(" puD3dCallbacks->dwReserved18                                   : 0x%08lx\n",(long)VAR_0->dwReserved18);
        FUNC_0(" puD3dCallbacks->dwReserved19                                   : 0x%08lx\n",(long)VAR_0->dwReserved19);
        FUNC_0(" puD3dCallbacks->dwReserved20                                   : 0x%08lx\n",(long)VAR_0->dwReserved20);
        FUNC_0(" puD3dCallbacks->dwReserved21                                   : 0x%08lx\n",(long)VAR_0->dwReserved21);
        FUNC_0(" puD3dCallbacks->dwReserved24                                   : 0x%08lx\n",(long)VAR_0->dwReserved24);
        FUNC_0(" puD3dCallbacks->dwReserved0                                    : 0x%08lx\n",(long)VAR_0->dwReserved0);
        FUNC_0(" puD3dCallbacks->dwReserved1                                    : 0x%08lx\n",(long)VAR_0->dwReserved1);
        FUNC_0(" puD3dCallbacks->dwReserved2                                    : 0x%08lx\n",(long)VAR_0->dwReserved2);
        FUNC_0(" puD3dCallbacks->dwReserved3                                    : 0x%08lx\n",(long)VAR_0->dwReserved3);
        FUNC_0(" puD3dCallbacks->dwReserved4                                    : 0x%08lx\n",(long)VAR_0->dwReserved4);
        FUNC_0(" puD3dCallbacks->dwReserved5                                    : 0x%08lx\n",(long)VAR_0->dwReserved5);
        FUNC_0(" puD3dCallbacks->dwReserved6                                    : 0x%08lx\n",(long)VAR_0->dwReserved6);
        FUNC_0(" puD3dCallbacks->dwReserved7                                    : 0x%08lx\n",(long)VAR_0->dwReserved7);
        FUNC_0(" puD3dCallbacks->dwReserved8                                    : 0x%08lx\n",(long)VAR_0->dwReserved8);
        FUNC_0(" puD3dCallbacks->dwReserved9                                    : 0x%08lx\n",(long)VAR_0->dwReserved9);
    }
     else
    {
        FUNC_0("none puD3dCallbacks from the driver 0x%08lx\n",VAR_0->dwSize);
    }
}
