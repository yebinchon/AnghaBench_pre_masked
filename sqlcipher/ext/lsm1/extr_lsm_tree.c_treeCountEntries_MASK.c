
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lsm_db ;
struct TYPE_6__ {int blob; int pDb; } ;
typedef TYPE_1__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(lsm_db *VAR_1){
  TreeCursor VAR_2;
  int VAR_3;
  int VAR_4 = 0;

  FUNC_4(VAR_1, 0, &VAR_2);
  for( VAR_3 = FUNC_0(&VAR_2, 0);
       VAR_3==VAR_0 && FUNC_2(&VAR_2);
       VAR_3 = FUNC_1(&VAR_2)
  ){
    VAR_4++;
  }

  FUNC_3(VAR_2.pDb, &VAR_2.blob);

  return VAR_4;
}
