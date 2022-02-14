
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HPDF_NameTree ;
typedef size_t HPDF_NameDictKey ;
typedef int HPDF_NameDict ;


 int * FUNC_0 (int ,int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

HPDF_NameTree
FUNC_1 (HPDF_NameDict VAR_2,
                            HPDF_NameDictKey VAR_3)
{
    if (!VAR_2)
        return ((void*)0);
    return FUNC_0 (VAR_2, VAR_0[VAR_3], VAR_1);
}
