
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ nSize; scalar_t__ iFirst; scalar_t__ iLastPg; } ;
typedef TYPE_1__ Segment ;
typedef int FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(
  FileSystem *VAR_4,
  Segment *VAR_5,
  int VAR_6,
  int VAR_7,
  u8 *VAR_8
){
  if( VAR_5 ){
    if( VAR_5 && VAR_5->nSize>0 ){
      int VAR_9;
      int VAR_10;
      int VAR_11;
      int VAR_12;
      int VAR_13;

      FUNC_0( 0==FUNC_5(VAR_4, VAR_5) );
      VAR_10 = VAR_12 = FUNC_4(VAR_4, VAR_5->iFirst);
      VAR_11 = FUNC_4(VAR_4, VAR_5->iLastPg);

      VAR_13 = (FUNC_3(VAR_4, VAR_11)==VAR_5->iLastPg);
      FUNC_0( VAR_10>0 );

      do {

        VAR_8[VAR_10-1] |= VAR_2;




        if( FUNC_2(VAR_4, VAR_10)==VAR_5->iFirst || VAR_10!=VAR_12 ){
          FUNC_0( (VAR_8[VAR_10-1] & VAR_0)==0 );
          VAR_8[VAR_10-1] |= VAR_0;
        }



        if( VAR_10!=VAR_11 || VAR_13 ){
          FUNC_0( (VAR_8[VAR_10-1] & VAR_1)==0 );
          VAR_8[VAR_10-1] |= VAR_1;
        }





        if( VAR_10==VAR_11 && VAR_13 && VAR_6 ){
          int VAR_14 = 0;
          VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_10, &VAR_14);
          FUNC_0( VAR_9==VAR_3 );

          FUNC_0( VAR_8[VAR_14-1]==0 );
          VAR_8[VAR_14-1] |= VAR_2;
          VAR_8[VAR_14-1] |= VAR_0;
          VAR_8[VAR_14-1] |= VAR_1;
        }




        if( VAR_10==VAR_11 ){
          VAR_10 = 0;
        }else{
          VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_10, &VAR_10);
          FUNC_0( VAR_9==VAR_3 );
        }
      }while( VAR_10 );
    }
  }
}
