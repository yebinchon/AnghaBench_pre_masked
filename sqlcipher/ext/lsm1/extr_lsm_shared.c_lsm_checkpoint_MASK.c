
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int pFS; } ;
typedef TYPE_1__ lsm_db ;
typedef int i64 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__*) ;
 int FUNC_1 (int ) ;

int FUNC_2(lsm_db *VAR_1, int *VAR_2){
  int VAR_3;
  u32 VAR_4 = 0;



  VAR_3 = FUNC_0(VAR_1, &VAR_4);



  if( VAR_2 ){
    int VAR_5 = 0;
    if( VAR_3==VAR_0 && VAR_4 ){
      VAR_5 = (((i64)VAR_4 * FUNC_1(VAR_1->pFS)) + 1023) / 1024;
    }
    *VAR_2 = VAR_5;
  }

  return VAR_3;
}
