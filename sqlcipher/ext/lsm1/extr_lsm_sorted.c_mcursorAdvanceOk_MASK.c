
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nData; int pData; } ;
struct TYPE_9__ {int flags; int eType; TYPE_1__ key; int * aTree; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int*) ;
 int FUNC_3 (TYPE_2__*,int ,int*,void**,int*) ;
 int FUNC_4 (TYPE_2__*,int,void*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(
  MultiCursor *VAR_3,
  int VAR_4,
  int *VAR_5
){
  void *VAR_6;
  int VAR_7;
  int VAR_8;

  if( *VAR_5 ) return 1;





  FUNC_3(VAR_3, VAR_3->aTree[1], &VAR_8, &VAR_6, &VAR_7);
  if( VAR_6 ){
    int VAR_9 = (VAR_3->flags & VAR_0) ? ~(0) : VAR_2;
    int VAR_10 = FUNC_4(VAR_3,
      VAR_8 & VAR_9, VAR_6, VAR_7,
      VAR_3->eType & VAR_9, VAR_3->key.pData, VAR_3->key.nData
    );

    if( (VAR_4==0 && VAR_10<=0) || (VAR_4!=0 && VAR_10>=0) ){
      return 0;
    }

    FUNC_2(VAR_3, VAR_5);
    FUNC_0( VAR_3->eType==VAR_8 );
    if( *VAR_5==VAR_1 && 0==FUNC_1(VAR_3, 0) ) return 0;
  }
  return 1;
}
