
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_7__ {scalar_t__ nDim; int nLeaf; int nNonLeaf; } ;
typedef TYPE_1__ RtreeCheck ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int,...) ;
 int FUNC_4 (TYPE_1__*,int,int,int *,int *) ;
 int * FUNC_5 (TYPE_1__*,int,int*) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  RtreeCheck *VAR_1,
  int VAR_2,
  u8 *VAR_3,
  i64 VAR_4
){
  u8 *VAR_5 = 0;
  int VAR_6 = 0;

  FUNC_0( VAR_4==1 || VAR_3!=0 );
  FUNC_0( VAR_1->nDim>0 );

  VAR_5 = FUNC_5(VAR_1, VAR_4, &VAR_6);
  if( VAR_5 ){
    if( VAR_6<4 ){
      FUNC_3(VAR_1,
          "Node %lld is too small (%d bytes)", VAR_4, VAR_6
      );
    }else{
      int VAR_7;
      int VAR_8;
      if( VAR_3==0 ){
        VAR_2 = FUNC_1(VAR_5);
        if( VAR_2>VAR_0 ){
          FUNC_3(VAR_1, "Rtree depth out of range (%d)", VAR_2);
          FUNC_7(VAR_5);
          return;
        }
      }
      VAR_7 = FUNC_1(&VAR_5[2]);
      if( (4 + VAR_7*(8 + VAR_1->nDim*2*4))>VAR_6 ){
        FUNC_3(VAR_1,
            "Node %lld is too small for cell count of %d (%d bytes)",
            VAR_4, VAR_7, VAR_6
        );
      }else{
        for(VAR_8=0; VAR_8<VAR_7; VAR_8++){
          u8 *VAR_9 = &VAR_5[4 + VAR_8*(8 + VAR_1->nDim*2*4)];
          i64 VAR_10 = FUNC_2(VAR_9);
          FUNC_4(VAR_1, VAR_4, VAR_8, &VAR_9[8], VAR_3);

          if( VAR_2>0 ){
            FUNC_6(VAR_1, 0, VAR_10, VAR_4);
            FUNC_8(VAR_1, VAR_2-1, &VAR_9[8], VAR_10);
            VAR_1->nNonLeaf++;
          }else{
            FUNC_6(VAR_1, 1, VAR_10, VAR_4);
            VAR_1->nLeaf++;
          }
        }
      }
    }
    FUNC_7(VAR_5);
  }
}
