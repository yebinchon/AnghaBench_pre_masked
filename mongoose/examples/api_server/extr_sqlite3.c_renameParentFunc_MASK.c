
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned char const*,int*) ;
 char* FUNC_5 (int *,char*,char*,...) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int,int ) ;
 unsigned char* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  sqlite3 *VAR_6 = FUNC_7(VAR_3);
  char *VAR_7 = 0;
  char *VAR_8;
  unsigned char const *VAR_9 = FUNC_9(VAR_5[0]);
  unsigned char const *VAR_10 = FUNC_9(VAR_5[1]);
  unsigned char const *VAR_11 = FUNC_9(VAR_5[2]);

  unsigned const char *VAR_12;
  int VAR_13;
  int VAR_14;

  FUNC_0(VAR_4);
  for(VAR_12=VAR_9; *VAR_12; VAR_12=VAR_12+VAR_13){
    VAR_13 = FUNC_4(VAR_12, &VAR_14);
    if( VAR_14==VAR_1 ){
      char *VAR_15;
      do {
        VAR_12 += VAR_13;
        VAR_13 = FUNC_4(VAR_12, &VAR_14);
      }while( VAR_14==VAR_2 );

      VAR_15 = FUNC_2(VAR_6, (const char *)VAR_12, VAR_13);
      if( VAR_15==0 ) break;
      FUNC_3(VAR_15);
      if( 0==FUNC_6((const char *)VAR_10, VAR_15) ){
        char *VAR_16 = FUNC_5(VAR_6, "%s%.*s\"%w\"",
            (VAR_7?VAR_7:""), VAR_12-VAR_9, VAR_9, (const char *)VAR_11
        );
        FUNC_1(VAR_6, VAR_7);
        VAR_7 = VAR_16;
        VAR_9 = &VAR_12[VAR_13];
      }
      FUNC_1(VAR_6, VAR_15);
    }
  }

  VAR_8 = FUNC_5(VAR_6, "%s%s", (VAR_7?VAR_7:""), VAR_9),
  FUNC_8(VAR_3, VAR_8, -1, VAR_0);
  FUNC_1(VAR_6, VAR_7);
}
