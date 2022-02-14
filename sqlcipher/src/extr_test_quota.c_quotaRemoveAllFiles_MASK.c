
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pFiles; } ;
typedef TYPE_1__ quotaGroup ;
struct TYPE_5__ {scalar_t__ nRef; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(quotaGroup *VAR_0){
  while( VAR_0->pFiles ){
    FUNC_0( VAR_0->pFiles->nRef==0 );
    FUNC_1(VAR_0->pFiles);
  }
}
