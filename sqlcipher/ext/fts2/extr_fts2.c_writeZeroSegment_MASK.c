
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int fulltext_vtab ;
typedef int fts2HashElem ;
typedef int fts2Hash ;
struct TYPE_10__ {int nTerm; int pTerm; int pCollector; } ;
typedef TYPE_1__ TermData ;
struct TYPE_11__ {int nData; int pData; } ;
typedef int LeafWriter ;
typedef TYPE_2__ DataBuffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int,int *) ;
 int FUNC_14 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_15 (TYPE_1__*,int,int,int ) ;
 int FUNC_16 (int *,int ,int*) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_19(fulltext_vtab *VAR_2, fts2Hash *VAR_3){
  fts2HashElem *VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8;
  TermData *VAR_9;
  LeafWriter VAR_10;
  DataBuffer VAR_11;


  VAR_6 = FUNC_16(VAR_2, 0, &VAR_5);
  if( VAR_6!=VAR_0 ) return VAR_6;

  VAR_8 = FUNC_5(VAR_3);
  VAR_9 = FUNC_18(VAR_8*sizeof(TermData));

  for(VAR_7 = 0, VAR_4 = FUNC_7(VAR_3); VAR_4; VAR_7++, VAR_4 = FUNC_10(VAR_4)){
    FUNC_0( VAR_7<VAR_8 );
    VAR_9[VAR_7].pTerm = FUNC_8(VAR_4);
    VAR_9[VAR_7].nTerm = FUNC_9(VAR_4);
    VAR_9[VAR_7].pCollector = FUNC_6(VAR_4);
  }
  FUNC_0( VAR_7==VAR_8 );




  if( VAR_8>1 ) FUNC_15(VAR_9, VAR_8, sizeof(*VAR_9), VAR_1);




  FUNC_13(0, VAR_5, &VAR_10);
  FUNC_2(&VAR_11, 0);
  for(VAR_7=0; VAR_7<VAR_8; VAR_7++){
    FUNC_3(&VAR_11);
    FUNC_4(VAR_9[VAR_7].pCollector, &VAR_11);
    VAR_6 = FUNC_14(VAR_2, &VAR_10,
                        VAR_9[VAR_7].pTerm, VAR_9[VAR_7].nTerm, VAR_11.pData, VAR_11.nData);
    if( VAR_6!=VAR_0 ) goto err;
  }
  VAR_6 = FUNC_12(VAR_2, &VAR_10);

 err:
  FUNC_1(&VAR_11);
  FUNC_17(VAR_9);
  FUNC_11(&VAR_10);
  return VAR_6;
}
