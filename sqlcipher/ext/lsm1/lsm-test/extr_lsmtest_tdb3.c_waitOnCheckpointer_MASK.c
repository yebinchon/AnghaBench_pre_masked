
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_db ;
struct TYPE_4__ {int nMtMaxCkpt; scalar_t__ eMode; } ;
typedef TYPE_1__ LsmDb ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(LsmDb *VAR_3, lsm_db *VAR_4){
  int VAR_5 = 0;
  int VAR_6;
  int VAR_7;

  do {
    VAR_6 = 0;
    VAR_7 = FUNC_0(VAR_4, VAR_1, &VAR_6);
    if( VAR_7!=VAR_2 || VAR_6<VAR_3->nMtMaxCkpt ) break;





    FUNC_3(5000);
    VAR_5 += 5;
  }while( 1 );





  return VAR_7;
}
