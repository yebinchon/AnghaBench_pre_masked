
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pStubDesc; } ;
struct TYPE_6__ {int Version; int aUserMarshalQuadruple; int pfnFree; int pfnAllocate; } ;
struct TYPE_5__ {int aUserMarshalQuadruple; } ;
typedef TYPE_2__ MIDL_STUB_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 () ;

__attribute__((used)) static void FUNC_1(MIDL_STUB_DESC *VAR_2)
{
    VAR_2->pfnAllocate = VAR_0;
    VAR_2->pfnFree = VAR_1;
    VAR_2->Version = 0x50002;
    VAR_2->aUserMarshalQuadruple = FUNC_0()->pStubDesc->aUserMarshalQuadruple;

}
