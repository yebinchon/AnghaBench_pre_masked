
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {size_t* aSnapshot; TYPE_1__* pShmhdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_4__ {size_t* aSnap1; size_t* aSnap2; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t*,size_t,size_t*,size_t*) ;
 scalar_t__ FUNC_2 (size_t*,size_t*,size_t) ;
 int FUNC_3 (size_t*,size_t*,size_t) ;

void FUNC_4(lsm_db *VAR_3){
  u32 VAR_4;

  VAR_4 = VAR_3->aSnapshot[VAR_2];
  FUNC_0( VAR_4>VAR_2 );
  FUNC_0( VAR_4==VAR_3->pShmhdr->aSnap1[VAR_2] );
  FUNC_0( 0==FUNC_2(VAR_3->aSnapshot, VAR_3->pShmhdr->aSnap1, VAR_4*sizeof(u32)) );
  FUNC_0( 0==FUNC_2(VAR_3->aSnapshot, VAR_3->pShmhdr->aSnap2, VAR_4*sizeof(u32)) );

  VAR_3->aSnapshot[VAR_1] = 0;
  VAR_3->aSnapshot[VAR_0] = 0;
  FUNC_1(VAR_3->aSnapshot, VAR_4,
      &VAR_3->aSnapshot[VAR_4-2], &VAR_3->aSnapshot[VAR_4-1]
  );

  FUNC_3(VAR_3->pShmhdr->aSnap1, VAR_3->aSnapshot, VAR_4*sizeof(u32));
  FUNC_3(VAR_3->pShmhdr->aSnap2, VAR_3->aSnapshot, VAR_4*sizeof(u32));
}
