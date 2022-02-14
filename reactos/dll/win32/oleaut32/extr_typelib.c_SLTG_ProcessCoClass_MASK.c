
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sltg_ref_lookup_t ;
typedef scalar_t__ WORD ;
struct TYPE_7__ {int pTypeLib; } ;
struct TYPE_6__ {int href_table; } ;
typedef int SLTG_TypeInfoTail ;
typedef TYPE_1__ SLTG_TypeInfoHeader ;
typedef int SLTG_RefInfo ;
typedef TYPE_2__ ITypeInfoImpl ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int *) ;
 int * FUNC_1 (int *,int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(char *VAR_2, ITypeInfoImpl *VAR_3,
    char *VAR_4, SLTG_TypeInfoHeader *VAR_5,
    SLTG_TypeInfoTail *VAR_6)
{
    char *VAR_7;
    sltg_ref_lookup_t *VAR_8 = ((void*)0);

    if(VAR_5->href_table != 0xffffffff) {
        VAR_8 = FUNC_1((SLTG_RefInfo*)((char *)VAR_5 + VAR_5->href_table), VAR_3->pTypeLib,
      VAR_4);
    }

    VAR_7 = VAR_2;

    if(*(WORD*)VAR_7 == VAR_1) {
        FUNC_0(VAR_7, VAR_3, VAR_0, VAR_8);
    }
    FUNC_2(VAR_8);
}
