
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_tokenizer_module ;
typedef int sqlite3 ;
typedef int fts2Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,char*,int,void*) ;
 int FUNC_4 (int const**) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int const**) ;
 int FUNC_7 (int const**) ;
 int FUNC_8 (int *,char*,int *,void*,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (int *,char*,int) ;

int FUNC_12(sqlite3 *VAR_5){
  int VAR_6 = VAR_2;
  fts2Hash *VAR_7 = 0;
  const sqlite3_tokenizer_module *VAR_8 = 0;
  const sqlite3_tokenizer_module *VAR_9 = 0;
  const sqlite3_tokenizer_module *VAR_10 = 0;

  FUNC_7(&VAR_8);
  FUNC_6(&VAR_9);





  VAR_7 = FUNC_10(sizeof(fts2Hash));
  if( !VAR_7 ){
    VAR_6 = VAR_1;
  }else{
    FUNC_2(VAR_7, VAR_0, 1);
  }


  if( VAR_6==VAR_2 ){
    if( FUNC_3(VAR_7, "simple", 7, (void *)VAR_8)
     || FUNC_3(VAR_7, "porter", 7, (void *)VAR_9)
     || (VAR_10 && FUNC_3(VAR_7, "icu", 4, (void *)VAR_10))
    ){
      VAR_6 = VAR_1;
    }
  }





  if( VAR_2==VAR_6
   && VAR_2==(VAR_6 = FUNC_5(VAR_5, VAR_7, "fts2_tokenizer"))
   && VAR_2==(VAR_6 = FUNC_11(VAR_5, "snippet", -1))
   && VAR_2==(VAR_6 = FUNC_11(VAR_5, "offsets", -1))
   && VAR_2==(VAR_6 = FUNC_11(VAR_5, "optimize", -1))




  ){
    return FUNC_8(
        VAR_5, "fts2", &VAR_3, (void *)VAR_7, VAR_4
    );
  }


  FUNC_0( VAR_6!=VAR_2 );
  if( VAR_7 ){
    FUNC_1(VAR_7);
    FUNC_9(VAR_7);
  }
  return VAR_6;
}
