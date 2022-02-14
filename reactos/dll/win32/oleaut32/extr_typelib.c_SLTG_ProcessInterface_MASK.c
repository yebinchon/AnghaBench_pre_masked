
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sltg_ref_lookup_t ;
typedef scalar_t__ WORD ;
struct TYPE_10__ {int cFuncs; } ;
struct TYPE_13__ {TYPE_1__ typeattr; int funcdescs; int pTypeLib; } ;
struct TYPE_12__ {int href_table; } ;
struct TYPE_11__ {int funcs_off; int cFuncs; } ;
typedef TYPE_2__ SLTG_TypeInfoTail ;
typedef TYPE_3__ SLTG_TypeInfoHeader ;
typedef int SLTG_RefInfo ;
typedef TYPE_4__ ITypeInfoImpl ;
typedef int BYTE ;


 int FUNC_0 (char*,char*,TYPE_4__*,int ,char*,int *,int const*) ;
 int FUNC_1 (char*,TYPE_4__*,int ,int *) ;
 int * FUNC_2 (int *,int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(char *VAR_3, ITypeInfoImpl *VAR_4,
      char *VAR_5, SLTG_TypeInfoHeader *VAR_6,
      const SLTG_TypeInfoTail *VAR_7, const BYTE *VAR_8)
{
    char *VAR_9;
    sltg_ref_lookup_t *VAR_10 = ((void*)0);

    if(VAR_6->href_table != 0xffffffff) {
        VAR_10 = FUNC_2((SLTG_RefInfo*)((char *)VAR_6 + VAR_6->href_table), VAR_4->pTypeLib,
      VAR_5);
    }

    VAR_9 = VAR_3;

    if(*(WORD*)VAR_9 == VAR_0) {
        FUNC_1(VAR_9, VAR_4, VAR_1, VAR_10);
    }

    if (VAR_7->funcs_off != 0xffff)
        FUNC_0(VAR_3, VAR_3 + VAR_7->funcs_off, VAR_4, VAR_7->cFuncs, VAR_5, VAR_10, VAR_8);

    FUNC_5(VAR_10);

    if (FUNC_3(VAR_2))
        FUNC_4(VAR_4->funcdescs, VAR_4->typeattr.cFuncs);
}
