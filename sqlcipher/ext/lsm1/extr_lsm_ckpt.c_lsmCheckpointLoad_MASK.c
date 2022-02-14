
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int aSnapshot; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_6__ {int* aSnap1; int* aSnap2; } ;
typedef TYPE_2__ ShmHeader ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int*,int) ;

int FUNC_3(lsm_db *VAR_5, int *VAR_6){
  int VAR_7 = VAR_1;
  ShmHeader *VAR_8 = VAR_5->pShmhdr;
  while( (VAR_7--)>0 ){
    int VAR_9;

    VAR_9 = VAR_8->aSnap1[VAR_0];
    if( VAR_9<=(VAR_2 / sizeof(u32)) ){
      FUNC_2(VAR_5->aSnapshot, VAR_8->aSnap1, VAR_9*sizeof(u32));
      if( FUNC_0(VAR_5->aSnapshot) ){
        if( VAR_6 ) *VAR_6 = 1;
        return VAR_3;
      }
    }

    VAR_9 = VAR_8->aSnap2[VAR_0];
    if( VAR_9<=(VAR_2 / sizeof(u32)) ){
      FUNC_2(VAR_5->aSnapshot, VAR_8->aSnap2, VAR_9*sizeof(u32));
      if( FUNC_0(VAR_5->aSnapshot) ){
        if( VAR_6 ) *VAR_6 = 2;
        return VAR_3;
      }
    }

    FUNC_1(VAR_5);
  }
  return VAR_4;
}
