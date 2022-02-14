
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int ht_slot ;
struct TYPE_5__ {int mxFrame; } ;
struct TYPE_6__ {int writeLock; size_t nWiData; int* apWiData; TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int volatile) ;
 int FUNC_5 (TYPE_2__*,size_t,int volatile**,int volatile**,int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(Wal *VAR_2){
  volatile ht_slot *VAR_3 = 0;
  volatile u32 *VAR_4 = 0;
  u32 VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7;
  int VAR_8;

  FUNC_0( VAR_2->writeLock );
  FUNC_2( VAR_2->hdr.mxFrame==VAR_0-1 );
  FUNC_2( VAR_2->hdr.mxFrame==VAR_0 );
  FUNC_2( VAR_2->hdr.mxFrame==VAR_0+1 );

  if( VAR_2->hdr.mxFrame==0 ) return;





  FUNC_0( VAR_2->nWiData>FUNC_3(VAR_2->hdr.mxFrame) );
  FUNC_0( VAR_2->apWiData[FUNC_3(VAR_2->hdr.mxFrame)] );
  FUNC_5(VAR_2, FUNC_3(VAR_2->hdr.mxFrame), &VAR_3, &VAR_4, &VAR_5);




  VAR_6 = VAR_2->hdr.mxFrame - VAR_5;
  FUNC_0( VAR_6>0 );
  for(VAR_8=0; VAR_8<VAR_1; VAR_8++){
    if( VAR_3[VAR_8]>VAR_6 ){
      VAR_3[VAR_8] = 0;
    }
  }




  VAR_7 = (int)((char *)VAR_3 - (char *)&VAR_4[VAR_6+1]);
  FUNC_1((void *)&VAR_4[VAR_6+1], 0, VAR_7);
}
