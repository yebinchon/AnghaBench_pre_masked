
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int pPtr ;
typedef int fts2Hash ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,unsigned char const*,int) ;
 void* FUNC_2 (int *,void*,int,void*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,unsigned char const*) ;
 int FUNC_5 (int *,void*,int,int ) ;
 int FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned char* FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  fts2Hash *VAR_4;
  void *VAR_5 = 0;
  const unsigned char *VAR_6;
  int VAR_7;

  FUNC_0( VAR_2==1 || VAR_2==2 );

  VAR_4 = (fts2Hash *)FUNC_7(VAR_1);

  VAR_6 = FUNC_10(VAR_3[0]);
  VAR_7 = FUNC_9(VAR_3[0])+1;

  if( VAR_2==2 ){
    void *VAR_8;
    int VAR_9 = FUNC_9(VAR_3[1]);
    if( VAR_9!=sizeof(VAR_5) ){
      FUNC_6(VAR_1, "argument type mismatch", -1);
      return;
    }
    VAR_5 = *(void **)FUNC_8(VAR_3[1]);
    VAR_8 = FUNC_2(VAR_4, (void *)VAR_6, VAR_7, VAR_5);
    if( VAR_8==VAR_5 ){
      FUNC_6(VAR_1, "out of memory", -1);
      return;
    }
  }else{
    VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_7);
    if( !VAR_5 ){
      char *VAR_10 = FUNC_4("unknown tokenizer: %s", VAR_6);
      FUNC_6(VAR_1, VAR_10, -1);
      FUNC_3(VAR_10);
      return;
    }
  }

  FUNC_5(VAR_1, (void *)&VAR_5, sizeof(VAR_5), VAR_0);
}
