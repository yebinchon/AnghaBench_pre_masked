
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t typekind; int cImplTypes; int cVars; int cFuncs; int wTypeFlags; } ;
struct TYPE_6__ {TYPE_1__ typeattr; int impltypes; int vardescs; int funcdescs; int DllName; int index; int pTypeLib; int guid; int DocString; int Name; int ref; } ;
typedef TYPE_2__ ITypeInfoImpl ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_2__ const*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_9(const ITypeInfoImpl * VAR_3)
{
    FUNC_2("%p ref=%u\n", VAR_3, VAR_3->ref);
    FUNC_2("%s %s\n", FUNC_5(FUNC_0(VAR_3->Name)), FUNC_5(FUNC_0(VAR_3->DocString)));
    FUNC_2("attr:%s\n", FUNC_4(FUNC_1(VAR_3->guid)));
    FUNC_2("kind:%s\n", VAR_2[VAR_3->typeattr.typekind]);
    FUNC_2("fct:%u var:%u impl:%u\n", VAR_3->typeattr.cFuncs, VAR_3->typeattr.cVars, VAR_3->typeattr.cImplTypes);
    FUNC_2("wTypeFlags: 0x%04x\n", VAR_3->typeattr.wTypeFlags);
    FUNC_2("parent tlb:%p index in TLB:%u\n",VAR_3->pTypeLib, VAR_3->index);
    if (VAR_3->typeattr.typekind == VAR_0) FUNC_2("dllname:%s\n", FUNC_5(FUNC_0(VAR_3->DllName)));
    if (FUNC_3(VAR_1))
        FUNC_6(VAR_3->funcdescs, VAR_3->typeattr.cFuncs);
    FUNC_8(VAR_3->vardescs, VAR_3->typeattr.cVars);
    FUNC_7(VAR_3->impltypes, VAR_3->typeattr.cImplTypes);
}
