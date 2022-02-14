
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_tokenizer_module ;
typedef int sqlite3 ;
typedef int Fts3Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,char*,int,void*) ;
 int FUNC_5 (int const**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,void*) ;
 int FUNC_10 (int const**) ;
 int FUNC_11 (int const**) ;
 int FUNC_12 (int const**) ;
 int FUNC_13 (int *,char*,int *,void*,int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int) ;
 int FUNC_16 (int *,char*,int) ;

int FUNC_17(sqlite3 *VAR_5){
  int VAR_6 = VAR_2;
  Fts3Hash *VAR_7 = 0;
  const sqlite3_tokenizer_module *VAR_8 = 0;
  const sqlite3_tokenizer_module *VAR_9 = 0;

  const sqlite3_tokenizer_module *VAR_10 = 0;
  FUNC_12(&VAR_10);







  VAR_6 = FUNC_6(VAR_5);
  if( VAR_6!=VAR_2 ) return VAR_6;

  FUNC_11(&VAR_8);
  FUNC_10(&VAR_9);


  VAR_7 = FUNC_15(sizeof(Fts3Hash));
  if( !VAR_7 ){
    VAR_6 = VAR_1;
  }else{
    FUNC_3(VAR_7, VAR_0, 1);
  }


  if( VAR_6==VAR_2 ){
    if( FUNC_4(VAR_7, "simple", 7, (void *)VAR_8)
     || FUNC_4(VAR_7, "porter", 7, (void *)VAR_9)


     || FUNC_4(VAR_7, "unicode61", 10, (void *)VAR_10)




    ){
      VAR_6 = VAR_1;
    }
  }
  if( VAR_2==VAR_6
   && VAR_2==(VAR_6 = FUNC_7(VAR_5, VAR_7, "fts3_tokenizer"))
   && VAR_2==(VAR_6 = FUNC_16(VAR_5, "snippet", -1))
   && VAR_2==(VAR_6 = FUNC_16(VAR_5, "offsets", 1))
   && VAR_2==(VAR_6 = FUNC_16(VAR_5, "matchinfo", 1))
   && VAR_2==(VAR_6 = FUNC_16(VAR_5, "matchinfo", 2))
   && VAR_2==(VAR_6 = FUNC_16(VAR_5, "optimize", 1))
  ){
    VAR_6 = FUNC_13(
        VAR_5, "fts3", &VAR_3, (void *)VAR_7, VAR_4
    );
    if( VAR_6==VAR_2 ){
      VAR_6 = FUNC_13(
          VAR_5, "fts4", &VAR_3, (void *)VAR_7, 0
      );
    }
    if( VAR_6==VAR_2 ){
      VAR_6 = FUNC_9(VAR_5, (void *)VAR_7);
    }
    return VAR_6;
  }



  FUNC_0( VAR_6!=VAR_2 );
  if( VAR_7 ){
    FUNC_2(VAR_7);
    FUNC_14(VAR_7);
  }
  return VAR_6;
}
