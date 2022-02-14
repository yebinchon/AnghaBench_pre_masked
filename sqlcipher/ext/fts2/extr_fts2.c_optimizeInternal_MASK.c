
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int fulltext_vtab ;
struct TYPE_7__ {scalar_t__ nData; int pData; } ;
typedef int OptLeavesReader ;
typedef int LeafWriter ;
typedef TYPE_1__ DataBuffer ;
typedef int DLReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 int FUNC_7 (int ,int ,scalar_t__,int,int ,TYPE_1__*) ;
 int FUNC_8 (int *,int *,int ,int ,int ,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int *) ;

__attribute__((used)) static int FUNC_17(fulltext_vtab *VAR_4,
                            OptLeavesReader *VAR_5, int VAR_6,
                            LeafWriter *VAR_7){
  int VAR_8, VAR_9 = VAR_3;
  DataBuffer VAR_10, VAR_11, VAR_12;


  VAR_8 = VAR_6;
  while( VAR_8-- > 0 ){
    FUNC_12(&VAR_5[VAR_8], VAR_6-VAR_8);
  }

  FUNC_2(&VAR_10, VAR_1);
  FUNC_2(&VAR_11, VAR_1);




  while( !FUNC_9(&VAR_5[0]) ){


    for(VAR_8=1; VAR_8<VAR_6 && !FUNC_9(&VAR_5[VAR_8]); VAR_8++){
      if( 0!=FUNC_16(&VAR_5[0], &VAR_5[VAR_8]) ) break;
    }


    if( VAR_8==1 ){

      FUNC_3(&VAR_11);
      FUNC_7(VAR_0,
                  FUNC_10(&VAR_5[0]),
                  FUNC_11(&VAR_5[0]),
                  -1, VAR_0, &VAR_11);
    }else{
      DLReader VAR_13[VAR_2];
      int VAR_14, VAR_15;




      FUNC_5(&VAR_13[0], VAR_0,
              FUNC_10(&VAR_5[0]),
              FUNC_11(&VAR_5[0]));
      VAR_14 = 1;

      FUNC_0( VAR_14<VAR_8 );
      while( VAR_14<VAR_8 ){

        for( VAR_15=1; VAR_14<VAR_8 && VAR_15<VAR_2;
             VAR_14++, VAR_15++ ){
          FUNC_5(&VAR_13[VAR_15], VAR_0,
                  FUNC_10(&VAR_5[VAR_14]),
                  FUNC_11(&VAR_5[VAR_14]));
        }


        FUNC_3(&VAR_11);
        FUNC_6(&VAR_11, VAR_13, VAR_15);
        VAR_12 = VAR_11;
        VAR_11 = VAR_10;
        VAR_10 = VAR_12;

        while( VAR_15-- > 0 ){
          FUNC_4(&VAR_13[VAR_15]);
        }


        FUNC_5(&VAR_13[0], VAR_0, VAR_10.pData, VAR_10.nData);
      }


      FUNC_4(&VAR_13[0]);


      FUNC_3(&VAR_11);
      FUNC_7(VAR_0, VAR_10.pData, VAR_10.nData,
                  -1, VAR_0, &VAR_11);
    }


    if( VAR_11.nData>0 ){
      VAR_9 = FUNC_8(VAR_4, VAR_7,
                          FUNC_14(&VAR_5[0]),
                          FUNC_15(&VAR_5[0]),
                          VAR_11.pData, VAR_11.nData);
      if( VAR_9!=VAR_3 ) goto err;
    }


    while( VAR_8-- > 0 ){
      VAR_9 = FUNC_13(VAR_4, &VAR_5[VAR_8]);
      if( VAR_9!=VAR_3 ) goto err;

      FUNC_12(&VAR_5[VAR_8], VAR_6-VAR_8);
    }
  }

 err:
  FUNC_1(&VAR_10);
  FUNC_1(&VAR_11);
  return VAR_9;
}
