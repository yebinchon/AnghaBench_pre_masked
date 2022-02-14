
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_12__ {scalar_t__ iType; } ;
struct TYPE_11__ {int idx; TYPE_2__* pReader; } ;
typedef TYPE_1__ OrderedDLReader ;
typedef int DataBuffer ;
typedef int DLWriter ;
typedef TYPE_2__ DLReader ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 char const* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,char const*,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,int *) ;
 int FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_13(DataBuffer *VAR_1,
                         DLReader *VAR_2, int VAR_3){
  OrderedDLReader VAR_4[VAR_0];
  DLWriter VAR_5;
  int VAR_6, VAR_7;
  const char *VAR_8 = 0;
  int VAR_9 = 0;
  sqlite_int64 VAR_10 = 0, VAR_11 = 0;

  FUNC_0( VAR_3>0 );
  if( VAR_3==1 ){
    FUNC_1(VAR_1, FUNC_5(VAR_2), FUNC_3(VAR_2));
    return;
  }

  FUNC_0( VAR_3<=VAR_0 );
  VAR_7 = 0;
  for(VAR_6=0; VAR_6<VAR_3; VAR_6++){
    FUNC_0( VAR_2[VAR_6].iType==VAR_2[0].iType );
    VAR_4[VAR_6].pReader = VAR_2+VAR_6;
    VAR_4[VAR_6].idx = VAR_6;
    VAR_7 += FUNC_3(&VAR_2[VAR_6]);
  }



  FUNC_2(VAR_1, VAR_7);


  while( VAR_6-->0 ){
    FUNC_12(VAR_4+VAR_6, VAR_3-VAR_6);
  }

  FUNC_11(&VAR_5, VAR_2[0].iType, VAR_1);
  while( !FUNC_4(VAR_4[0].pReader) ){
    sqlite_int64 VAR_12 = FUNC_7(VAR_4[0].pReader);





    if( FUNC_5(VAR_4[0].pReader)==VAR_8+VAR_9 ){
      VAR_9 += FUNC_6(VAR_4[0].pReader);
    }else{
      if( VAR_8!=0 ){
        FUNC_9(&VAR_5, VAR_8, VAR_9, VAR_10, VAR_11);
      }
      VAR_8 = FUNC_5(VAR_4[0].pReader);
      VAR_9 = FUNC_6(VAR_4[0].pReader);
      VAR_10 = VAR_12;
    }
    VAR_11 = VAR_12;
    FUNC_8(VAR_4[0].pReader);


    for(VAR_6=1; VAR_6<VAR_3 &&
             !FUNC_4(VAR_4[VAR_6].pReader) &&
             FUNC_7(VAR_4[VAR_6].pReader)==VAR_12; VAR_6++){
      FUNC_8(VAR_4[VAR_6].pReader);
    }


    while( VAR_6-->0 ){
      FUNC_12(VAR_4+VAR_6, VAR_3-VAR_6);
    }
  }


  if( VAR_9>0 ) FUNC_9(&VAR_5, VAR_8, VAR_9, VAR_10, VAR_11);
  FUNC_10(&VAR_5);
}
