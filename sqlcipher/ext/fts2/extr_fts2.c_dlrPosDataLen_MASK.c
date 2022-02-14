
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_4__ {int nElement; int pData; } ;
typedef TYPE_1__ DLReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(DLReader *VAR_0){
  sqlite_int64 VAR_1;
  int VAR_2 = FUNC_2(VAR_0->pData, &VAR_1);
  FUNC_0( !FUNC_1(VAR_0) );
  return VAR_0->nElement-VAR_2;
}
