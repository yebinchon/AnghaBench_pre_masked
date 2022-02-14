
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int pPtr ;
typedef int Fts3Hash ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int *,unsigned char const*,int) ;
 void* FUNC_3 (int *,void*,int,void*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,unsigned char const*) ;
 int FUNC_6 (int *,void*,int,int ) ;
 int FUNC_7 (int *,char*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 unsigned char* FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  Fts3Hash *VAR_4;
  void *VAR_5 = 0;
  const unsigned char *VAR_6;
  int VAR_7;

  FUNC_0( VAR_2==1 || VAR_2==2 );

  VAR_4 = (Fts3Hash *)FUNC_8(VAR_1);

  VAR_6 = FUNC_12(VAR_3[0]);
  VAR_7 = FUNC_10(VAR_3[0])+1;

  if( VAR_2==2 ){
    if( FUNC_1(VAR_1) || FUNC_11(VAR_3[1]) ){
      void *VAR_8;
      int VAR_9 = FUNC_10(VAR_3[1]);
      if( VAR_6==0 || VAR_9!=sizeof(VAR_5) ){
        FUNC_7(VAR_1, "argument type mismatch", -1);
        return;
      }
      VAR_5 = *(void **)FUNC_9(VAR_3[1]);
      VAR_8 = FUNC_3(VAR_4, (void *)VAR_6, VAR_7, VAR_5);
      if( VAR_8==VAR_5 ){
        FUNC_7(VAR_1, "out of memory", -1);
      }
    }else{
      FUNC_7(VAR_1, "fts3tokenize disabled", -1);
      return;
    }
  }else{
    if( VAR_6 ){
      VAR_5 = FUNC_2(VAR_4, VAR_6, VAR_7);
    }
    if( !VAR_5 ){
      char *VAR_10 = FUNC_5("unknown tokenizer: %s", VAR_6);
      FUNC_7(VAR_1, VAR_10, -1);
      FUNC_4(VAR_10);
      return;
    }
  }
  if( FUNC_1(VAR_1) || FUNC_11(VAR_3[0]) ){
    FUNC_6(VAR_1, (void *)&VAR_5, sizeof(VAR_5), VAR_0);
  }
}
