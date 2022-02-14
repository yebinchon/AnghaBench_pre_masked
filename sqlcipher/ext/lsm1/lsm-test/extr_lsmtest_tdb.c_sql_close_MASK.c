
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {scalar_t__ aAlloc; int db; int * apScan; int pFetch; int pDeleteRange; int pDelete; int pInsert; } ;
typedef TYPE_1__ SqlDb ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(TestDb *VAR_1){
  SqlDb *VAR_2 = (SqlDb *)VAR_1;
  FUNC_2(VAR_2->pInsert);
  FUNC_2(VAR_2->pDelete);
  FUNC_2(VAR_2->pDeleteRange);
  FUNC_2(VAR_2->pFetch);
  FUNC_2(VAR_2->apScan[0]);
  FUNC_2(VAR_2->apScan[1]);
  FUNC_2(VAR_2->apScan[2]);
  FUNC_2(VAR_2->apScan[3]);
  FUNC_2(VAR_2->apScan[4]);
  FUNC_2(VAR_2->apScan[5]);
  FUNC_2(VAR_2->apScan[6]);
  FUNC_2(VAR_2->apScan[7]);
  FUNC_1(VAR_2->db);
  FUNC_0((char *)VAR_2->aAlloc);
  FUNC_0((char *)VAR_2);
  return VAR_0;
}
