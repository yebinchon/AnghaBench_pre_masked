
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int iUsrVersion; } ;
struct TYPE_8__ {scalar_t__ nTransOpen; TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

int FUNC_3(lsm_db *VAR_1, unsigned int VAR_2){
  int VAR_3 = VAR_0;
  int VAR_4 = 0;

  if( VAR_1->nTransOpen==0 ){
    VAR_4 = 1;
    VAR_3 = FUNC_0(VAR_1, 1);
  }

  if( VAR_3==VAR_0 ){
    VAR_1->treehdr.iUsrVersion = VAR_2;
  }



  if( VAR_4 ){
    if( VAR_3==VAR_0 ){
      VAR_3 = FUNC_1(VAR_1, 0);
    }else{
      FUNC_2(VAR_1, 0);
    }
  }

  return VAR_3;
}
