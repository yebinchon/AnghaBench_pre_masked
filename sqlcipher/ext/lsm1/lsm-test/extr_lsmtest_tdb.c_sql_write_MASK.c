
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {int pInsert; } ;
typedef TYPE_1__ SqlDb ;


 int VAR_0 ;
 int FUNC_0 (int ,int,void*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
  TestDb *VAR_1,
  void *VAR_2,
  int VAR_3,
  void *VAR_4,
  int VAR_5
){
  SqlDb *VAR_6 = (SqlDb *)VAR_1;
  FUNC_0(VAR_6->pInsert, 1, VAR_2, VAR_3, VAR_0);
  FUNC_0(VAR_6->pInsert, 2, VAR_4, VAR_5, VAR_0);
  FUNC_2(VAR_6->pInsert);
  return FUNC_1(VAR_6->pInsert);
}
