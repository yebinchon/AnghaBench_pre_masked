
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {TYPE_1__* pDb; } ;
struct TYPE_8__ {int flags; int pSeg; int * pPg; int blob1; scalar_t__ nCell; } ;
struct TYPE_7__ {int (* xCmp ) (void*,int,void*,int) ;} ;
typedef TYPE_2__ SegmentPtr ;
typedef int Page ;
typedef TYPE_3__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int,int **) ;
 int * FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int ,int *,scalar_t__,int*,int*,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int (*) (void*,int,void*,int),int,int *,int,int,void*,int) ;

__attribute__((used)) static int FUNC_10(
  MultiCursor *VAR_4,
  SegmentPtr *VAR_5,
  int VAR_6,
  void *VAR_7, int VAR_8
){
  int (*VAR_9)(void *, int, void *, int) = VAR_4->pDb->xCmp;
  int VAR_10 = VAR_0;







  while( VAR_10==VAR_0 && (VAR_5->flags & VAR_1) ){
    u8 *VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    Page *VAR_15;


    VAR_11 = FUNC_6(VAR_5->pSeg,
        VAR_5->pPg, VAR_5->nCell-1, &VAR_13, &VAR_12, &VAR_5->blob1
    );




    VAR_14 = FUNC_9(
        VAR_9, VAR_13, VAR_11, VAR_12, VAR_6, VAR_7, VAR_8
    );
    if( VAR_14>=0 ) break;


    VAR_15 = VAR_5->pPg;
    FUNC_3(VAR_15);
    while( 1 ){
      Page *VAR_16;
      u8 *VAR_17; int VAR_18;

      VAR_10 = FUNC_1(VAR_5->pSeg, VAR_15, 1, &VAR_16);
      FUNC_4(VAR_15);
      VAR_15 = VAR_16;
      if( VAR_15==0 ) break;

      FUNC_0( VAR_10==VAR_0 );
      VAR_17 = FUNC_2(VAR_15, &VAR_18);
      if( (FUNC_5(VAR_17, VAR_18) & VAR_3)==0
       && FUNC_7(VAR_17, VAR_18)>0
      ){
        break;
      }
    }
    if( VAR_15==0 ) break;
    FUNC_8(VAR_5, VAR_15);


    FUNC_0( VAR_10!=VAR_0 || (VAR_5->flags & VAR_2) );
  }

  return VAR_10;
}
