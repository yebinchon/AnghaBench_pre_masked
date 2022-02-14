
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int lsm_db ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_1__ TreeKey ;
struct TYPE_14__ {int member_1; int member_0; } ;
struct TYPE_13__ {int pDb; TYPE_3__ blob; } ;
typedef TYPE_2__ TreeCursor ;
typedef TYPE_3__ TreeBlob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,TYPE_3__*,int*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(lsm_db *VAR_3){
  int VAR_4 = 0;
  TreeBlob VAR_5 = {0, 0};
  TreeCursor VAR_6;
  int VAR_7;

  FUNC_6(VAR_3, 0, &VAR_6);
  for( VAR_7 = FUNC_2(&VAR_6, 0);
       VAR_7==VAR_1 && FUNC_4(&VAR_6);
       VAR_7 = FUNC_3(&VAR_6)
  ){
    TreeKey *VAR_8 = FUNC_1(&VAR_6, &VAR_5, &VAR_7);
    if( VAR_7!=VAR_1 ) break;
    FUNC_0( ((VAR_4&VAR_2)==0)==((VAR_8->flags&VAR_0)==0) );
    VAR_4 = VAR_8->flags;
  }

  FUNC_5(VAR_6.pDb, &VAR_6.blob);
  FUNC_5(VAR_6.pDb, &VAR_5);

  return 1;
}
