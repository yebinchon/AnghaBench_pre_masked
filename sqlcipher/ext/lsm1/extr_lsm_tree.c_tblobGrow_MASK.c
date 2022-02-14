
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_6__ {int n; scalar_t__ a; } ;
typedef TYPE_2__ TreeBlob ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int*) ;

__attribute__((used)) static int FUNC_2(lsm_db *VAR_0, TreeBlob *VAR_1, int VAR_2, int *VAR_3){
  if( VAR_2>VAR_1->n ){
    FUNC_0(VAR_0->pEnv, VAR_1->a);
    VAR_1->a = FUNC_1(VAR_0->pEnv, VAR_2, VAR_3);
    VAR_1->n = VAR_2;
  }
  return (VAR_1->a==0);
}
