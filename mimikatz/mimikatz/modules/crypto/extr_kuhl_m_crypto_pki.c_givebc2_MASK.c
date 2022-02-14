
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fCA; } ;
struct TYPE_6__ {int Value; int pszObjId; int fCritical; } ;
typedef TYPE_1__* PCERT_EXTENSION ;
typedef TYPE_2__* PCERT_BASIC_CONSTRAINTS2_INFO ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*,int *) ;
 int VAR_0 ;

BOOL FUNC_1(PCERT_EXTENSION VAR_1, PCERT_BASIC_CONSTRAINTS2_INFO VAR_2)
{
 VAR_1->pszObjId = VAR_0;
 VAR_1->fCritical = VAR_2->fCA;
 return FUNC_0(VAR_1->pszObjId, VAR_2, &VAR_1->Value);
}
