
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int fulltext_vtab ;
struct TYPE_10__ {int nData; char* pData; } ;
struct TYPE_9__ {int nTermDistinct; TYPE_6__ data; } ;
typedef TYPE_1__ LeafWriter ;
typedef int DLReader ;


 int FUNC_0 (int ,char*,int,int *) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,char*,int) ;
 int FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*,int *,int) ;
 int FUNC_7 (TYPE_1__*,char const*,int) ;
 int FUNC_8 (int *,TYPE_1__*,char const*,int,int) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static int FUNC_13(fulltext_vtab *VAR_5, LeafWriter *VAR_6,
                               const char *VAR_7, int VAR_8,
                               DLReader *VAR_9, int VAR_10){
  char VAR_11[VAR_4+VAR_4];
  int VAR_12 = VAR_6->data.nData, VAR_13;
  int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

  FUNC_1(VAR_6->data.pData, VAR_6->data.nData);
  VAR_20 = FUNC_7(VAR_6, VAR_7, VAR_8);


  if( VAR_12==0 ) VAR_6->nTermDistinct = VAR_20;

  VAR_13 = VAR_6->data.nData;




  for(VAR_14=0, VAR_15=0; VAR_14<VAR_10; VAR_14++){
    VAR_15 += FUNC_5(&VAR_9[VAR_14]);
  }
  VAR_16 = FUNC_12(VAR_11, VAR_15);
  FUNC_3(&VAR_6->data, VAR_11, VAR_16);

  FUNC_6(&VAR_6->data, VAR_9, VAR_10);
  FUNC_0(VAR_0,
                       VAR_6->data.pData+VAR_13+VAR_16,
                       VAR_6->data.nData-VAR_13-VAR_16, ((void*)0));






  VAR_17 = VAR_6->data.nData-(VAR_13+VAR_16);
  VAR_18 = FUNC_12(VAR_11, VAR_17);
  FUNC_2( VAR_17<=VAR_15 );
  FUNC_2( VAR_18<=VAR_16 );
  if( VAR_8+VAR_17>VAR_3 ){

    if( VAR_12>0 ){
      VAR_19 = FUNC_9(VAR_5, VAR_6, 0, VAR_12);
      if( VAR_19!=VAR_2 ) return VAR_19;

      VAR_6->nTermDistinct = VAR_20;
    }


    VAR_13 += VAR_16 - VAR_18;
    FUNC_10(VAR_6->data.pData+VAR_13, VAR_11, VAR_18);


    VAR_19 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8, VAR_13);
    if( VAR_19!=VAR_2 ) return VAR_19;


    FUNC_4(&VAR_6->data);

    return VAR_19;
  }




  if( VAR_18<VAR_16 ){
    FUNC_11(VAR_6->data.pData+VAR_13+VAR_18,
            VAR_6->data.pData+VAR_13+VAR_16,
            VAR_6->data.nData-(VAR_13+VAR_16));
    VAR_6->data.nData -= VAR_16-VAR_18;
  }


  FUNC_10(VAR_6->data.pData+VAR_13, VAR_11, VAR_18);







  if( VAR_12+VAR_8+VAR_17>VAR_1 ){

    VAR_19 = FUNC_9(VAR_5, VAR_6, 0, VAR_12);
    if( VAR_19!=VAR_2 ) return VAR_19;

    VAR_6->nTermDistinct = VAR_20;


    VAR_16 = FUNC_12(VAR_6->data.pData, 0);
    VAR_16 += FUNC_12(VAR_6->data.pData+VAR_16, VAR_8);
    FUNC_10(VAR_6->data.pData+VAR_16, VAR_7, VAR_8);
    VAR_16 += VAR_8;




    FUNC_2( VAR_16<VAR_13 );



    FUNC_2( 2*VAR_3<=VAR_1 );
    FUNC_2( VAR_16+VAR_6->data.nData-VAR_13<VAR_13 );
    FUNC_10(VAR_6->data.pData+VAR_16,
           VAR_6->data.pData+VAR_13,
           VAR_6->data.nData-VAR_13);
    VAR_6->data.nData -= VAR_13-VAR_16;
  }
  FUNC_1(VAR_6->data.pData, VAR_6->data.nData);

  return VAR_2;
}
