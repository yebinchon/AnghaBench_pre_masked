
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int nData; void* pData; } ;
typedef int Segment ;
typedef int Page ;
typedef TYPE_1__ LsmBlob ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int *,int,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_13(
  Segment *VAR_3,
  Page *VAR_4,
  int VAR_5,
  int VAR_6,
  void **VAR_7,
  LsmBlob *VAR_8
){
  int VAR_9 = VAR_1;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  u8 *VAR_13;

  VAR_13 = FUNC_5(VAR_4, &VAR_11);
  VAR_12 = FUNC_9(&VAR_13[FUNC_3(VAR_11)]);
  VAR_10 = FUNC_1(VAR_11, VAR_12);
  FUNC_4( VAR_10>0 && VAR_10<VAR_11 );

  if( VAR_5+VAR_6<=VAR_10 ){
    *VAR_7 = (void *)&VAR_13[VAR_5];
  }else{
    int VAR_14 = VAR_6;
    int VAR_15 = VAR_5;
    u8 *VAR_16;


    VAR_9 = FUNC_12(FUNC_10(VAR_4), VAR_8, VAR_6);
    if( VAR_9!=VAR_1 ) return VAR_9;
    VAR_8->nData = VAR_6;
    VAR_16 = (u8 *)VAR_8->pData;
    *VAR_7 = VAR_8->pData;


    FUNC_7(VAR_4);

    while( VAR_9==VAR_1 ){
      Page *VAR_17;
      int VAR_18;


      int VAR_19 = FUNC_0(VAR_14, VAR_10-VAR_15);
      if( VAR_19>0 ){
        FUNC_11(&VAR_16[VAR_6-VAR_14], &VAR_13[VAR_15], VAR_19);
        VAR_14 -= VAR_19;
        VAR_15 += VAR_19;
        FUNC_4( VAR_14==0 || VAR_15==VAR_10 );
      }
      FUNC_4( VAR_14>=0 );
      if( VAR_14==0 ) break;
      VAR_15 -= VAR_10;



      do {
        VAR_9 = FUNC_6(VAR_3, VAR_4, 1, &VAR_17);
        if( VAR_9==VAR_1 && VAR_17==0 ){
          VAR_9 = VAR_0;
        }
        if( VAR_9 ) break;
        FUNC_8(VAR_4);
        VAR_4 = VAR_17;
        VAR_13 = FUNC_5(VAR_4, &VAR_11);
        VAR_18 = FUNC_9(&VAR_13[FUNC_2(VAR_11)]);
      }while( VAR_18&VAR_2 );

      VAR_10 = FUNC_1(VAR_11, FUNC_9(&VAR_13[VAR_11-2]));
      FUNC_4( VAR_10>0 && VAR_10<VAR_11 );
    }

    FUNC_8(VAR_4);
  }

  return VAR_9;
}
