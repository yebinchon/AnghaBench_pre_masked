
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sltg_ref_lookup_t ;
struct TYPE_16__ {int ptr_size; } ;
struct TYPE_12__ {int cbSizeVft; int cFuncs; } ;
struct TYPE_15__ {TYPE_1__ typeattr; int funcdescs; TYPE_9__* pTypeLib; } ;
struct TYPE_14__ {int href_table; } ;
struct TYPE_13__ {int vars_off; int funcs_off; int impls_off; int cFuncs; int cVars; } ;
typedef TYPE_2__ SLTG_TypeInfoTail ;
typedef TYPE_3__ SLTG_TypeInfoHeader ;
typedef int SLTG_RefInfo ;
typedef TYPE_4__ ITypeInfoImpl ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,TYPE_4__*,int ,char*,int *,int const*) ;
 int FUNC_1 (char*,TYPE_4__*,int ,int *) ;
 int * FUNC_2 (int *,TYPE_9__*,char*) ;
 int FUNC_3 (char*,char*,TYPE_4__*,int ,char*,int *,int const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(char *VAR_2, ITypeInfoImpl *VAR_3,
     char *VAR_4, SLTG_TypeInfoHeader *VAR_5,
     const SLTG_TypeInfoTail *VAR_6, const BYTE *VAR_7)
{
  sltg_ref_lookup_t *VAR_8 = ((void*)0);
  if (VAR_5->href_table != 0xffffffff)
      VAR_8 = FUNC_2((SLTG_RefInfo*)((char *)VAR_5 + VAR_5->href_table), VAR_3->pTypeLib,
                                  VAR_4);

  if (VAR_6->vars_off != 0xffff)
    FUNC_3(VAR_2, VAR_2 + VAR_6->vars_off, VAR_3, VAR_6->cVars, VAR_4, VAR_8, VAR_7);

  if (VAR_6->funcs_off != 0xffff)
    FUNC_0(VAR_2, VAR_2 + VAR_6->funcs_off, VAR_3, VAR_6->cFuncs, VAR_4, VAR_8, VAR_7);

  if (VAR_6->impls_off != 0xffff)
    FUNC_1(VAR_2 + VAR_6->impls_off, VAR_3, VAR_0, VAR_8);




  VAR_3->typeattr.cbSizeVft = VAR_3->typeattr.cFuncs * VAR_3->pTypeLib->ptr_size;

  FUNC_6(VAR_8);
  if (FUNC_4(VAR_1))
      FUNC_5(VAR_3->funcdescs, VAR_3->typeattr.cFuncs);
}
