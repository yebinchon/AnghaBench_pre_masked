
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int nDfltBlksz; int nDfltPgsz; int aSnapshot; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_5__ {int aSnap2; int aSnap1; } ;
typedef TYPE_2__ ShmHeader ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int,int*,int*) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static void FUNC_3(lsm_db *VAR_4){
  u32 VAR_5[] = {
    0,
    10,
    0,
    VAR_3,
    0,
    0,
    0,
    0,
    0,
    0, 0, 1234, 5678,
    0,0,0,0, 0,0,0,0,
    0,
    0,
    0, 0
  };
  u32 VAR_6 = FUNC_0(VAR_5);
  ShmHeader *VAR_7 = VAR_4->pShmhdr;

  VAR_5[VAR_1] = VAR_6;
  VAR_5[VAR_0] = VAR_4->nDfltBlksz;
  VAR_5[VAR_2] = VAR_4->nDfltPgsz;
  FUNC_1(VAR_5, FUNC_0(VAR_5), &VAR_5[VAR_6-2], &VAR_5[VAR_6-1]);

  FUNC_2(VAR_7->aSnap1, VAR_5, VAR_6*sizeof(u32));
  FUNC_2(VAR_7->aSnap2, VAR_5, VAR_6*sizeof(u32));
  FUNC_2(VAR_4->aSnapshot, VAR_5, VAR_6*sizeof(u32));
}
