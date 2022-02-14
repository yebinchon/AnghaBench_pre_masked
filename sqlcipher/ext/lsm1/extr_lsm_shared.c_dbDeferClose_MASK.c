
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pFS; TYPE_3__* pDatabase; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_8__ {TYPE_2__* pLsmFile; } ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ LsmFile ;
typedef TYPE_3__ Database ;


 TYPE_2__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(lsm_db *VAR_0){
  if( VAR_0->pFS ){
    LsmFile *VAR_1;
    Database *VAR_2 = VAR_0->pDatabase;
    VAR_1 = FUNC_0(VAR_0->pFS);
    VAR_1->pNext = VAR_2->pLsmFile;
    VAR_2->pLsmFile = VAR_1;
  }
}
