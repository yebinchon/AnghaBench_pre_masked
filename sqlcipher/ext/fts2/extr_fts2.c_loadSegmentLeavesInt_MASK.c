
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int fulltext_vtab ;
struct TYPE_21__ {int nData; char const* pData; int nCapacity; } ;
struct TYPE_20__ {int leafReader; } ;
typedef TYPE_1__ LeavesReader ;
typedef TYPE_2__ DataBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,char const*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char const*,int) ;
 int FUNC_7 (int *,char const*,int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 char* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 TYPE_2__* FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(fulltext_vtab *VAR_2, LeavesReader *VAR_3,
                                const char *VAR_4, int VAR_5, int VAR_6,
                                DataBuffer *VAR_7){






  DataBuffer *VAR_8 = ((void*)0);
  int VAR_9 = 0, VAR_10 = 0, VAR_11;

  FUNC_0( VAR_5>0 );

  for(VAR_11=VAR_1; VAR_11==VAR_1 && !FUNC_8(VAR_3);
      VAR_11=FUNC_11(VAR_2, VAR_3)){





    int VAR_12 = FUNC_7(&VAR_3->leafReader, VAR_4, VAR_5, VAR_6);
    if( VAR_12>0 ) break;
    if( VAR_12==0 ){
      const char *VAR_13 = FUNC_9(VAR_3);
      int VAR_14, VAR_15 = FUNC_10(VAR_3);


      for(VAR_14=0; VAR_14<VAR_9; ++VAR_14){
        if( 0==VAR_8[VAR_14].nData ) break;
      }


      if( VAR_14==VAR_9 ){
        if( VAR_9==VAR_10 ){
          DataBuffer *VAR_16;
          VAR_10 += 20;


          VAR_16 = FUNC_14(VAR_10*sizeof(*VAR_8));
          if( VAR_16==((void*)0) ){
            VAR_11 = VAR_0;
            break;
          }

          if( VAR_9>0 ){
            FUNC_0(VAR_8!=((void*)0));
            FUNC_12(VAR_16, VAR_8, VAR_9*sizeof(*VAR_8));
            FUNC_13(VAR_8);
          }
          VAR_8 = VAR_16;
        }
        FUNC_2(&(VAR_8[VAR_9]), 0);
        VAR_9++;
      }


      FUNC_0(VAR_14<VAR_9 && VAR_8[VAR_14].nData==0);


      if( VAR_14==0 ){
        FUNC_3(&(VAR_8[0]), VAR_13, VAR_15);
      }else{

        DataBuffer *VAR_17 = &(VAR_8[VAR_14]);
        DataBuffer *VAR_18 = &(VAR_8[0]);




        FUNC_5(VAR_18, VAR_17);
        FUNC_6(VAR_17, VAR_13, VAR_15);


        for(++VAR_18; VAR_18<VAR_17; ++VAR_18){
          FUNC_6(VAR_17, VAR_18->pData, VAR_18->nData);




          if( VAR_18->nCapacity<1024 ){
            FUNC_4(VAR_18);
          }else{
            FUNC_1(VAR_18);
            FUNC_2(VAR_18, 0);
          }
        }
      }
    }
  }



  if( VAR_11==VAR_1 && VAR_9>0 ){
    int VAR_19;
    for(VAR_19=0; VAR_19<VAR_9; ++VAR_19){
      if( VAR_8[VAR_19].nData>0 ){
        if( VAR_7->nData==0 ){
          FUNC_5(VAR_7, &(VAR_8[VAR_19]));
        }else{
          FUNC_6(VAR_7, VAR_8[VAR_19].pData,
                                 VAR_8[VAR_19].nData);
        }
      }
    }
  }

  while( VAR_9-- ){
    FUNC_1(&(VAR_8[VAR_9]));
  }
  if( VAR_8!=((void*)0) ) FUNC_13(VAR_8);

  return VAR_11;
}
