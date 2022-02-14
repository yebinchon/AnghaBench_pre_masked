
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int aTask ;
struct TYPE_18__ {int member_0; } ;
typedef TYPE_1__ Threadset ;
struct TYPE_20__ {int member_0; } ;
struct TYPE_19__ {int member_0; } ;
typedef TYPE_2__ Sqlite ;
typedef TYPE_3__ Error ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int ,void*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,char const*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*,char const*,void (*) (Error*,Sqlite*,int)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_9(int VAR_14){
  struct Stress2Task {
    void (*x)(Error*,Sqlite*,int);
  } VAR_15[] = {
    { VAR_0 },
    { VAR_6 },
    { VAR_7 },
    { VAR_8 },
    { VAR_9 },
    { VAR_10 },
    { VAR_11 },
    { VAR_12 },
    { VAR_13 },
    { VAR_1 },
    { VAR_2 },
    { VAR_3 },
    { VAR_4 },
  };
  const char *VAR_16 = "test.db";

  int VAR_17;
  Error VAR_18 = {0};
  Sqlite VAR_19 = {0};
  Threadset VAR_20 = {0};


  FUNC_3(&VAR_18, &VAR_19, VAR_16, 1);
  FUNC_6(&VAR_18, &VAR_19,
      "CREATE TABLE IF NOT EXISTS t0(x PRIMARY KEY, y, z);"
      "CREATE INDEX IF NOT EXISTS i0 ON t0(y);"
  );
  FUNC_0(&VAR_18, &VAR_19);

  FUNC_5(&VAR_18, VAR_14);
  FUNC_7(1);

  for(VAR_17=0; VAR_17<sizeof(VAR_15)/sizeof(VAR_15[0]); VAR_17++){
    FUNC_8(&VAR_18, &VAR_20, VAR_16, VAR_15[VAR_17].x);
  }
  FUNC_2(&VAR_18, &VAR_20, VAR_5, (void*)VAR_16);
  FUNC_2(&VAR_18, &VAR_20, VAR_5, (void*)VAR_16);

  FUNC_1(&VAR_18, &VAR_20);
  FUNC_7(0);
  FUNC_4(&VAR_18);
}
