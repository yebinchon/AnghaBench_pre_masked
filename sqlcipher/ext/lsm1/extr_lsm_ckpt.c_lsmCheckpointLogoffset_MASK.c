
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_5__ {int iSnapshotId; void* cksum1; void* cksum0; TYPE_1__* aRegion; } ;
struct TYPE_4__ {int iStart; } ;
typedef TYPE_2__ DbLog ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void**,int ) ;
 int FUNC_1 (void**) ;

void FUNC_2(
  u32 *VAR_2,
  DbLog *VAR_3
){
  VAR_3->aRegion[2].iStart = (FUNC_1(VAR_2) >> 1);

  VAR_3->cksum0 = VAR_2[VAR_0];
  VAR_3->cksum1 = VAR_2[VAR_1];
  VAR_3->iSnapshotId = FUNC_0(VAR_2, 0);
}
