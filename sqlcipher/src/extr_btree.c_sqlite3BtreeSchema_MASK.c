
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* pSchema; void (* xFreeSchema ) (void*) ;} ;
struct TYPE_6__ {TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int ,int) ;

void *FUNC_3(Btree *VAR_0, int VAR_1, void(*VAR_2)(void *)){
  BtShared *VAR_3 = VAR_0->pBt;
  FUNC_0(VAR_0);
  if( !VAR_3->pSchema && VAR_1 ){
    VAR_3->pSchema = FUNC_2(0, VAR_1);
    VAR_3->xFreeSchema = VAR_2;
  }
  FUNC_1(VAR_0);
  return VAR_3->pSchema;
}
