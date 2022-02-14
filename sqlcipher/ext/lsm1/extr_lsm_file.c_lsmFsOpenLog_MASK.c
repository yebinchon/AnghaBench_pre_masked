
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bReadonly; TYPE_2__* pFS; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_6__ {scalar_t__ fdLog; } ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int,int*) ;

int FUNC_1(lsm_db *VAR_2, int *VAR_3){
  int VAR_4 = VAR_1;
  FileSystem *VAR_5 = VAR_2->pFS;

  if( 0==VAR_5->fdLog ){
    VAR_5->fdLog = FUNC_0(VAR_5, VAR_2->bReadonly, 1, &VAR_4);

    if( VAR_4==VAR_0 && VAR_2->bReadonly ){
      VAR_4 = VAR_1;
    }
  }

  if( VAR_3 ) *VAR_3 = (VAR_5->fdLog!=0);
  return VAR_4;
}
