
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(int VAR_2){
  Error VAR_3 = {0};
  Sqlite VAR_4 = {0};
  Threadset VAR_5 = {0};

  FUNC_3(&VAR_3, &VAR_4, "test.db", 1);
  FUNC_7(&VAR_3, &VAR_4,
      "PRAGMA page_size = 1024;"
      "PRAGMA journal_mode = WAL;"
      "CREATE TABLE t1(x, y);"
      "CREATE TABLE t2(x, y);"
      "CREATE TABLE t3(x, y);"
      "CREATE TABLE t4(x, y);"
      "CREATE TABLE t5(x, y);"
      "CREATE TABLE t6(x, y);"
      "CREATE TABLE t7(x, y);"
      "CREATE TABLE t8(x, y);"
      "CREATE TABLE t9(x, y);"
  );
  FUNC_0(&VAR_3, &VAR_4);

  FUNC_5(&VAR_3, VAR_2);

  FUNC_8(1);
  FUNC_2(&VAR_3, &VAR_5, VAR_1, 0);
  FUNC_2(&VAR_3, &VAR_5, VAR_1, 0);

  FUNC_6(2);
  FUNC_8(0);

  FUNC_2(&VAR_3, &VAR_5, VAR_1, 0);
  FUNC_2(&VAR_3, &VAR_5, VAR_0, 0);

  FUNC_1(&VAR_3, &VAR_5);

  FUNC_4(&VAR_3);
}
