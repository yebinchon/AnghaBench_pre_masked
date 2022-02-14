
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int member_0; } ;
typedef TYPE_1__ Threadset ;
struct TYPE_18__ {int member_0; } ;
struct TYPE_17__ {int member_0; } ;
typedef TYPE_2__ Sqlite ;
typedef TYPE_3__ Error ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int ,void*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(int VAR_1){
  Error VAR_2 = {0};
  Sqlite VAR_3 = {0};
  Threadset VAR_4 = {0};

  FUNC_3(&VAR_2, &VAR_3, "test.db", 1);
  FUNC_6(&VAR_2, &VAR_3, "CREATE TABLE t1(x INTEGER PRIMARY KEY, y UNIQUE)");
  FUNC_0(&VAR_2, &VAR_3);

  FUNC_5(&VAR_2, VAR_1);
  FUNC_2(&VAR_2, &VAR_4, VAR_0, 0);
  FUNC_2(&VAR_2, &VAR_4, VAR_0, 0);
  FUNC_2(&VAR_2, &VAR_4, VAR_0, (void*)1);
  FUNC_2(&VAR_2, &VAR_4, VAR_0, (void*)1);
  FUNC_1(&VAR_2, &VAR_4);

  FUNC_4(&VAR_2);
}
