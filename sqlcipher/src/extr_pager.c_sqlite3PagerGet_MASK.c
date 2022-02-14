
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xGet ) (TYPE_1__*,int ,int **,int) ;} ;
typedef int Pgno ;
typedef TYPE_1__ Pager ;
typedef int DbPage ;


 int FUNC_0 (TYPE_1__*,int ,int **,int) ;

int FUNC_1(
  Pager *VAR_0,
  Pgno VAR_1,
  DbPage **VAR_2,
  int VAR_3
){
  return VAR_0->xGet(VAR_0, VAR_1, VAR_2, VAR_3);
}
