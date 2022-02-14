
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int const u8 ;
typedef int aPtr ;
struct TYPE_11__ {int pCompress; int nBlocksize; int fdDb; int pEnv; int pDb; } ;
struct TYPE_10__ {int iLastPg; int iFirst; scalar_t__ pRedirect; } ;
typedef TYPE_1__ Segment ;
typedef int LsmPgno ;
typedef TYPE_2__ FileSystem ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int,int*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,int ,int,int const*,int) ;
 int FUNC_9 (int const*,int) ;

__attribute__((used)) static LsmPgno FUNC_10(
  FileSystem *VAR_1,
  Segment *VAR_2,
  const u8 *VAR_3,
  int VAR_4,
  int *VAR_5
){
  LsmPgno VAR_6 = 0;
  int VAR_7 = *VAR_5;
  FUNC_1( VAR_1->pCompress );
  if( VAR_7==VAR_0 ){
    int VAR_8 = 0;
    int VAR_9 = 0;
    LsmPgno VAR_10;
    LsmPgno VAR_11 = VAR_2->iLastPg+1;



    if( VAR_11==1 ){
      VAR_2->iFirst = VAR_11 = FUNC_2(VAR_1, 0);
      if( VAR_11==0 ){
        int VAR_12;
        VAR_7 = FUNC_7(VAR_1->pDb, 0, &VAR_12);
        VAR_2->iFirst = VAR_11 = FUNC_4(VAR_1, VAR_12);
      }
    }
    VAR_6 = VAR_11;


    VAR_10 = FUNC_5(VAR_1, VAR_11);
    if( VAR_7==VAR_0 ){
      int VAR_13 = (int)(VAR_10 - VAR_11 + 1);
      VAR_9 = FUNC_0(VAR_4, VAR_13);
      VAR_8 = VAR_4 - VAR_9;
      FUNC_1( VAR_9>=0 );
      if( VAR_9!=0 ){
        VAR_7 = FUNC_8(VAR_1->pEnv, VAR_1->fdDb, VAR_11, VAR_3, VAR_9);
      }
      VAR_11 += VAR_9;
    }




    FUNC_1( VAR_8<=0 || (VAR_11-1)==VAR_10 );
    if( VAR_7==VAR_0 && (VAR_11-1)==VAR_10 ){
      u8 VAR_14[4];
      int VAR_15;

      if( VAR_9>0 ){

        VAR_7 = FUNC_7(VAR_1->pDb, 0, &VAR_15);


        if( VAR_7==VAR_0 ){
          FUNC_1( VAR_11==(FUNC_6(VAR_1, VAR_11)*VAR_1->nBlocksize)-4 );
          FUNC_9(VAR_14, VAR_15);
          VAR_7 = FUNC_8(VAR_1->pEnv, VAR_1->fdDb, VAR_11, VAR_14, sizeof(VAR_14));
        }


        if( VAR_7==VAR_0 ){
          LsmPgno VAR_16;
          FUNC_9(VAR_14, FUNC_6(VAR_1, VAR_11));
          VAR_16 = FUNC_4(VAR_1, VAR_15);
          VAR_7 = FUNC_8(VAR_1->pEnv, VAR_1->fdDb, VAR_16-4, VAR_14, sizeof(VAR_14));
          if( VAR_8>0 ) VAR_11 = VAR_16;
        }
      }else{

        FUNC_1( VAR_8>0 );
        FUNC_1( VAR_2->pRedirect==0 );
        VAR_7 = FUNC_3(VAR_1, 0, FUNC_6(VAR_1, VAR_11), &VAR_15);
        VAR_6 = VAR_11 = FUNC_4(VAR_1, VAR_15);
      }


      if( VAR_7==VAR_0 && VAR_8>0 ){
        VAR_7 = FUNC_8(VAR_1->pEnv, VAR_1->fdDb, VAR_11, &VAR_3[VAR_9], VAR_8);
        VAR_11 += VAR_8;
      }
    }

    VAR_2->iLastPg = VAR_11-1;
    *VAR_5 = VAR_7;
  }

  return VAR_6;
}
