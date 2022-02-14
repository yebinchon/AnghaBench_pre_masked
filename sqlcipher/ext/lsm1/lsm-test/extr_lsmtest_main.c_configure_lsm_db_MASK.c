
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int TestDb ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static lsm_db *FUNC_2(TestDb *VAR_0){
  lsm_db *VAR_1;
  VAR_1 = FUNC_0(VAR_0);
  if( VAR_1 ){
    FUNC_1(VAR_0, "mmap=1 autowork=1 automerge=4 worker_automerge=4");
  }
  return VAR_1;
}
