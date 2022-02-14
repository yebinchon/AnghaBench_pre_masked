
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpData; int dwBufferSize; int dwCaps; int dwFlags; int dwSize; } ;
typedef TYPE_1__ D3DEXECUTEBUFFERDESC ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(const D3DEXECUTEBUFFERDESC *VAR_0) {
    FUNC_0("dwSize       : %d\n", VAR_0->dwSize);
    FUNC_0("dwFlags      : %x\n", VAR_0->dwFlags);
    FUNC_0("dwCaps       : %x\n", VAR_0->dwCaps);
    FUNC_0("dwBufferSize : %d\n", VAR_0->dwBufferSize);
    FUNC_0("lpData       : %p\n", VAR_0->lpData);
}
