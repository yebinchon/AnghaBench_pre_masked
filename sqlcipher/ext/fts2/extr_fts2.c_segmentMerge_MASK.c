
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lrs ;
typedef int fulltext_vtab ;
typedef int LeavesReader ;
typedef int LeafWriter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int,int *,int*) ;
 int FUNC_10 (int *,int *,int,int *) ;
 int FUNC_11 (int **,char,int) ;
 int FUNC_12 (int *,int,int*) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(fulltext_vtab *VAR_2, int VAR_3){
  LeafWriter VAR_4;
  LeavesReader VAR_5[VAR_0];
  int VAR_6, VAR_7, VAR_8 = 0;




  VAR_7 = FUNC_12(VAR_2, VAR_3+1, &VAR_8);
  if( VAR_7!=VAR_1 ) return VAR_7;






  FUNC_11(&VAR_5, '\0', sizeof(VAR_5));
  VAR_7 = FUNC_9(VAR_2, VAR_3, VAR_5, &VAR_6);
  if( VAR_7!=VAR_1 ) return VAR_7;
  FUNC_0( VAR_6==VAR_0 );

  FUNC_3(VAR_3+1, VAR_8, &VAR_4);




  while( !FUNC_4(VAR_5) ){

    for(VAR_6=1; VAR_6<VAR_0 && !FUNC_4(VAR_5+VAR_6); VAR_6++){
      if( 0!=FUNC_8(VAR_5, VAR_5+VAR_6) ) break;
    }

    VAR_7 = FUNC_10(VAR_2, VAR_5, VAR_6, &VAR_4);
    if( VAR_7!=VAR_1 ) goto err;


    while( VAR_6-->0 ){
      VAR_7 = FUNC_7(VAR_2, VAR_5+VAR_6);
      if( VAR_7!=VAR_1 ) goto err;


      FUNC_6(VAR_5+VAR_6, VAR_0-VAR_6);
    }
  }

  for(VAR_6=0; VAR_6<VAR_0; VAR_6++){
    FUNC_5(&VAR_5[VAR_6]);
  }

  VAR_7 = FUNC_2(VAR_2, &VAR_4);
  FUNC_1(&VAR_4);
  if( VAR_7!=VAR_1 ) return VAR_7;


  return FUNC_13(VAR_2, VAR_3);

 err:
  for(VAR_6=0; VAR_6<VAR_0; VAR_6++){
    FUNC_5(&VAR_5[VAR_6]);
  }
  FUNC_1(&VAR_4);
  return VAR_7;
}
