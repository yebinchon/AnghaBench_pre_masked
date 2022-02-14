
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int * aSnapshot; TYPE_1__* pShmhdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_4__ {int * aSnap2; int * aSnap1; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;

int FUNC_2(lsm_db *VAR_0, int VAR_1){
  u32 *VAR_2;
  FUNC_0( VAR_1==1 || VAR_1==2 );
  VAR_2 = (VAR_1==1) ? VAR_0->pShmhdr->aSnap1 : VAR_0->pShmhdr->aSnap2;
  return (FUNC_1(VAR_0->aSnapshot, 0)==FUNC_1(VAR_2, 0) );
}
