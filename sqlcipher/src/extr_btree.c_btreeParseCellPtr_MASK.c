
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
typedef int i64 ;
struct TYPE_10__ {int nPayload; int* pPayload; int nSize; void* nLocal; int nKey; } ;
struct TYPE_9__ {int leaf; int intKeyLeaf; scalar_t__ childPtrSize; int maxLocal; TYPE_1__* pBt; } ;
struct TYPE_8__ {int mutex; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int*,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(
  MemPage *VAR_0,
  u8 *VAR_1,
  CellInfo *VAR_2
){
  u8 *VAR_3;
  u32 VAR_4;
  u64 VAR_5;

  FUNC_0( FUNC_2(VAR_0->pBt->mutex) );
  FUNC_0( VAR_0->leaf==0 || VAR_0->leaf==1 );
  FUNC_0( VAR_0->intKeyLeaf );
  FUNC_0( VAR_0->childPtrSize==0 );
  VAR_3 = VAR_1;







  VAR_4 = *VAR_3;
  if( VAR_4>=0x80 ){
    u8 *VAR_6 = &VAR_3[8];
    VAR_4 &= 0x7f;
    do{
      VAR_4 = (VAR_4<<7) | (*++VAR_3 & 0x7f);
    }while( (*VAR_3)>=0x80 && VAR_3<VAR_6 );
  }
  VAR_3++;







  VAR_5 = *VAR_3;
  if( VAR_5>=0x80 ){
    u8 *VAR_7 = &VAR_3[7];
    VAR_5 &= 0x7f;
    while(1){
      VAR_5 = (VAR_5<<7) | (*++VAR_3 & 0x7f);
      if( (*VAR_3)<0x80 ) break;
      if( VAR_3>=VAR_7 ){
        VAR_5 = (VAR_5<<8) | *++VAR_3;
        break;
      }
    }
  }
  VAR_3++;

  VAR_2->nKey = *(i64*)&VAR_5;
  VAR_2->nPayload = VAR_4;
  VAR_2->pPayload = VAR_3;
  FUNC_3( VAR_4==VAR_0->maxLocal );
  FUNC_3( VAR_4==VAR_0->maxLocal+1 );
  if( VAR_4<=VAR_0->maxLocal ){



    VAR_2->nSize = VAR_4 + (u16)(VAR_3 - VAR_1);
    if( VAR_2->nSize<4 ) VAR_2->nSize = 4;
    VAR_2->nLocal = (u16)VAR_4;
  }else{
    FUNC_1(VAR_0, VAR_1, VAR_2);
  }
}
