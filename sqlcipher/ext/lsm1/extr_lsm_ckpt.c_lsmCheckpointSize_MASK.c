
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* pShmhdr; } ;
typedef TYPE_2__ lsm_db ;
typedef int i64 ;
struct TYPE_5__ {int* aSnap1; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int*) ;

int FUNC_1(lsm_db *VAR_3, int *VAR_4){
  int VAR_5 = VAR_2;
  u32 VAR_6;



  VAR_5 = FUNC_0(VAR_3, 0, 0, &VAR_6);

  if( VAR_5==VAR_2 ){
    u32 VAR_7 = VAR_3->pShmhdr->aSnap1[VAR_1];
    u32 VAR_8 = VAR_3->pShmhdr->aSnap1[VAR_0];
    *VAR_4 = (int)(( ((i64)(VAR_8 - VAR_6) * VAR_7) + 1023) / 1024);
  }

  return VAR_5;
}
