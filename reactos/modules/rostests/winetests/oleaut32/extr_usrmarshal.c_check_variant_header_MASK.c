
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clSize; scalar_t__ rpcReserved; int vt; int wReserved1; int wReserved2; int wReserved3; int switch_is; } ;
typedef TYPE_1__ variant_wire_t ;
typedef int VARIANT ;
typedef int ULONG ;
struct TYPE_4__ {int wReserved1; int wReserved2; int wReserved3; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,int,...) ;

__attribute__((used)) static DWORD *FUNC_3(DWORD *VAR_2, VARIANT *VAR_3, ULONG VAR_4)
{
    const variant_wire_t *VAR_5 = (const variant_wire_t*)VAR_2;
    DWORD VAR_6;

    FUNC_2(VAR_5->clSize == (VAR_4 + 7) >> 3, "wv[0] %08x, expected %08x\n", VAR_5->clSize, (VAR_4 + 7) >> 3);
    FUNC_2(VAR_5->rpcReserved == 0, "wv[1] %08x\n", VAR_5->rpcReserved);
    FUNC_2(VAR_5->vt == FUNC_1(VAR_3), "vt %04x expected %04x\n", VAR_5->vt, FUNC_1(VAR_3));
    FUNC_2(VAR_5->wReserved1 == FUNC_0(VAR_3).wReserved1, "res1 %04x expected %04x\n", VAR_5->wReserved1, FUNC_0(VAR_3).wReserved1);
    FUNC_2(VAR_5->wReserved2 == FUNC_0(VAR_3).wReserved2, "res2 %04x expected %04x\n", VAR_5->wReserved2, FUNC_0(VAR_3).wReserved2);
    FUNC_2(VAR_5->wReserved3 == FUNC_0(VAR_3).wReserved3, "res3 %04x expected %04x\n", VAR_5->wReserved3, FUNC_0(VAR_3).wReserved3);

    VAR_6 = FUNC_1(VAR_3);
    if(VAR_6 & VAR_0)
        VAR_6 &= ~VAR_1;
    FUNC_2(VAR_5->switch_is == VAR_6, "switch_is %08x expected %08x\n", VAR_5->switch_is, VAR_6);

    return (DWORD*)((unsigned char*)VAR_2 + sizeof(variant_wire_t));
}
