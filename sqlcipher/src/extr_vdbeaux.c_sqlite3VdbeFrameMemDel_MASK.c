
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* v; struct TYPE_5__* pParent; } ;
typedef TYPE_2__ VdbeFrame ;
struct TYPE_4__ {TYPE_2__* pDelFrame; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(void *VAR_0){
  VdbeFrame *VAR_1 = (VdbeFrame*)VAR_0;
  FUNC_0( FUNC_1(VAR_1) );
  VAR_1->pParent = VAR_1->v->pDelFrame;
  VAR_1->v->pDelFrame = VAR_1;
}
