
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nTest; int pWrMutex; int tid; } ;
typedef TYPE_1__ WorkerInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int,int,char*,int ) ;

__attribute__((used)) static void FUNC_3(WorkerInfo *VAR_0, int VAR_1, int VAR_2, int VAR_3){
  char *VAR_4;
  switch( VAR_3 ){
    case 1: VAR_4 = "t1(tid,sp,a,b,c)"; break;
    case 2: VAR_4 = "t2(tid,sp,d,e,f)"; break;
    case 3: VAR_4 = "t3(tid,sp,x,y,z)"; break;
  }
  FUNC_0(VAR_0->pWrMutex);
  FUNC_2(VAR_0,
     "WITH RECURSIVE\n"
     " c(i) AS (VALUES(%d) UNION ALL SELECT i+1 FROM c WHERE i<%d)\n"
     "INSERT INTO %s SELECT %d, zeroblob(3000), i, printf('%%d',i), i FROM c;",
     VAR_1, VAR_2, VAR_4, VAR_0->tid
  );
  FUNC_1(VAR_0->pWrMutex);
  VAR_0->nTest++;
}
