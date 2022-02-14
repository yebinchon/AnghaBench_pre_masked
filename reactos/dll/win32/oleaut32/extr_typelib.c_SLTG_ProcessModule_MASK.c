
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sltg_ref_lookup_t ;
struct TYPE_12__ {int pTypeLib; } ;
struct TYPE_11__ {int href_table; } ;
struct TYPE_10__ {int vars_off; int funcs_off; int cFuncs; int cVars; } ;
typedef TYPE_1__ SLTG_TypeInfoTail ;
typedef TYPE_2__ SLTG_TypeInfoHeader ;
typedef int SLTG_RefInfo ;
typedef TYPE_3__ ITypeInfoImpl ;
typedef int BYTE ;


 int FUNC_0 (char*,char*,TYPE_3__*,int ,char*,int *,int const*) ;
 int * FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,char*,TYPE_3__*,int ,char*,int *,int const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(char *VAR_1, ITypeInfoImpl *VAR_2,
          char *VAR_3, SLTG_TypeInfoHeader *VAR_4,
          const SLTG_TypeInfoTail *VAR_5, const BYTE *VAR_6)
{
  sltg_ref_lookup_t *VAR_7 = ((void*)0);
  if (VAR_4->href_table != 0xffffffff)
      VAR_7 = FUNC_1((SLTG_RefInfo*)((char *)VAR_4 + VAR_4->href_table), VAR_2->pTypeLib,
                                  VAR_3);

  if (VAR_5->vars_off != 0xffff)
    FUNC_2(VAR_1, VAR_1 + VAR_5->vars_off, VAR_2, VAR_5->cVars, VAR_3, VAR_7, VAR_6);

  if (VAR_5->funcs_off != 0xffff)
    FUNC_0(VAR_1, VAR_1 + VAR_5->funcs_off, VAR_2, VAR_5->cFuncs, VAR_3, VAR_7, VAR_6);
  FUNC_5(VAR_7);
  if (FUNC_3(VAR_0))
    FUNC_4(VAR_2);
}
