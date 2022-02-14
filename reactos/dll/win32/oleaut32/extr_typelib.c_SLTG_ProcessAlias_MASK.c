
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sltg_ref_lookup_t ;
typedef int WORD ;
struct TYPE_13__ {int vt; } ;
struct TYPE_12__ {TYPE_4__* tdescAlias; int pTypeLib; } ;
struct TYPE_11__ {int href_table; } ;
struct TYPE_10__ {int tdescalias_vt; scalar_t__ simple_alias; } ;
typedef int TYPEDESC ;
typedef TYPE_1__ SLTG_TypeInfoTail ;
typedef TYPE_2__ SLTG_TypeInfoHeader ;
typedef int SLTG_RefInfo ;
typedef TYPE_3__ ITypeInfoImpl ;


 int * FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,char*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(char *VAR_0, ITypeInfoImpl *VAR_1,
         char *VAR_2, SLTG_TypeInfoHeader *VAR_3,
         const SLTG_TypeInfoTail *VAR_4)
{
  WORD *VAR_5;
  sltg_ref_lookup_t *VAR_6 = ((void*)0);

  if (VAR_4->simple_alias) {

      VAR_1->tdescAlias = FUNC_3(sizeof(TYPEDESC));
      VAR_1->tdescAlias->vt = VAR_4->tdescalias_vt;
      return;
  }

  if(VAR_3->href_table != 0xffffffff) {
      VAR_6 = FUNC_0((SLTG_RefInfo*)((char *)VAR_3 + VAR_3->href_table), VAR_1->pTypeLib,
    VAR_2);
  }


  VAR_5 = (WORD *)(VAR_0 + VAR_4->tdescalias_vt);

  VAR_1->tdescAlias = FUNC_2(sizeof(TYPEDESC));
  FUNC_1(VAR_5, VAR_0, VAR_1->tdescAlias, VAR_6);

  FUNC_4(VAR_6);
}
