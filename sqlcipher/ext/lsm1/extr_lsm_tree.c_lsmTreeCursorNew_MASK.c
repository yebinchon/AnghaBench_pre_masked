
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pEnv; } ;
typedef TYPE_1__ lsm_db ;
typedef int TreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;

int FUNC_2(lsm_db *VAR_2, int VAR_3, TreeCursor **VAR_4){
  TreeCursor *VAR_5;
  *VAR_4 = VAR_5 = FUNC_0(VAR_2->pEnv, sizeof(TreeCursor));
  if( VAR_5 ){
    FUNC_1(VAR_2, VAR_3, VAR_5);
    return VAR_1;
  }
  return VAR_0;
}
