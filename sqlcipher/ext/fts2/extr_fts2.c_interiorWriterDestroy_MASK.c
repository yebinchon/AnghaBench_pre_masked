
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int term; struct TYPE_6__* parentWriter; int data; struct TYPE_6__* next; struct TYPE_6__* first; } ;
typedef TYPE_1__ InteriorWriter ;
typedef TYPE_1__ InteriorBlock ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(InteriorWriter *VAR_1){
  InteriorBlock *VAR_2 = VAR_1->first;

  while( VAR_2!=((void*)0) ){
    InteriorBlock *VAR_3 = VAR_2;
    VAR_2 = VAR_2->next;
    FUNC_1(&VAR_3->term);
    FUNC_1(&VAR_3->data);
    FUNC_2(VAR_3);
  }
  if( VAR_1->parentWriter!=((void*)0) ){
    FUNC_3(VAR_1->parentWriter);
    FUNC_2(VAR_1->parentWriter);
  }
  FUNC_1(&VAR_1->term);
  FUNC_0(VAR_1);
  return VAR_0;
}
