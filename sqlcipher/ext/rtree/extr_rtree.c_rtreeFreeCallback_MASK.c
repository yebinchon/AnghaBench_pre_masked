
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pContext; int (* xDestructor ) (int ) ;} ;
typedef TYPE_1__ RtreeGeomCallback ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0){
  RtreeGeomCallback *VAR_1 = (RtreeGeomCallback*)VAR_0;
  if( VAR_1->xDestructor ) VAR_1->xDestructor(VAR_1->pContext);
  FUNC_0(VAR_0);
}
