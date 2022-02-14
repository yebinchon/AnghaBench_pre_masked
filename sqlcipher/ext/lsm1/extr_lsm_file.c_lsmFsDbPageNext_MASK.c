
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int nPagesize; scalar_t__ pCompress; } ;
struct TYPE_21__ {scalar_t__ iPg; int nCompress; int flags; int * aData; TYPE_3__* pFS; } ;
struct TYPE_20__ {scalar_t__ iFirst; scalar_t__ iLastPg; int * pRedirect; } ;
typedef TYPE_1__ Segment ;
typedef int Redirect ;
typedef TYPE_2__ Page ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,scalar_t__,int,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*,scalar_t__,int ,TYPE_2__**,int*) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_10 (int *) ;

int FUNC_11(Segment *VAR_2, Page *VAR_3, int VAR_4, Page **VAR_5){
  int VAR_6 = VAR_0;
  FileSystem *VAR_7 = VAR_3->pFS;
  LsmPgno VAR_8 = VAR_3->iPg;

  FUNC_0( 0==FUNC_9(VAR_7, VAR_2) );
  if( VAR_7->pCompress ){
    int VAR_9 = VAR_3->nCompress + 2*3;

    do {
      if( VAR_4>0 ){
        VAR_6 = FUNC_6(VAR_7, VAR_2, VAR_8, VAR_9, &VAR_8);
      }else{
        if( VAR_8==VAR_2->iFirst ){
          VAR_8 = 0;
        }else{
          VAR_6 = FUNC_2(VAR_7, VAR_2, VAR_8, &VAR_8);
        }
      }

      VAR_9 = 0;
      if( VAR_8!=0 ){
        VAR_6 = FUNC_7(VAR_7, VAR_2, VAR_8, 0, VAR_5, &VAR_9);
        FUNC_0( (*VAR_5==0)==(VAR_6!=VAR_0 || VAR_9>0) );
      }else{
        *VAR_5 = 0;
      }
    }while( VAR_9>0 && VAR_6==VAR_0 );

  }else{
    Redirect *VAR_10 = VAR_2 ? VAR_2->pRedirect : 0;
    FUNC_0( VAR_4==1 || VAR_4==-1 );
    if( VAR_4<0 ){
      if( VAR_2 && VAR_8==VAR_2->iFirst ){
        *VAR_5 = 0;
        return VAR_0;
      }else if( FUNC_3(VAR_7, VAR_8) ){
        FUNC_0( VAR_3->flags & VAR_1 );
        VAR_8 = FUNC_5(VAR_7, FUNC_10(&VAR_3->aData[-4]));
      }else{
        VAR_8--;
      }
    }else{
      if( VAR_2 ){
        if( VAR_8==VAR_2->iLastPg ){
          *VAR_5 = 0;
          return VAR_0;
        }
      }

      if( FUNC_4(VAR_7, VAR_8) ){
        int VAR_11 = FUNC_8(
            VAR_10, FUNC_10(&VAR_3->aData[VAR_7->nPagesize-4])
        );
        VAR_8 = FUNC_1(VAR_7, VAR_11);
      }else{
        VAR_8++;
      }
    }
    VAR_6 = FUNC_7(VAR_7, VAR_2, VAR_8, 0, VAR_5, 0);
  }

  return VAR_6;
}
