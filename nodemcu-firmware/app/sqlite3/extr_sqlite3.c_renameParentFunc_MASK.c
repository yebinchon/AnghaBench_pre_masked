
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
 int VAR_3 ;
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
  sqlite3_context *VAR_4,
  int VAR_5,
  sqlite3_value **VAR_6
){
  sqlite3 *VAR_7 = FUNC_7(VAR_4);
  char *VAR_8 = 0;
  char *VAR_9;
  unsigned char const *VAR_10 = FUNC_9(VAR_6[0]);
  unsigned char const *VAR_11 = FUNC_9(VAR_6[1]);
  unsigned char const *VAR_12 = FUNC_9(VAR_6[2]);

  unsigned const char *VAR_13;
  int VAR_14;
  int VAR_15;

  FUNC_0(VAR_5);
  if( VAR_10==0 || VAR_11==0 ) return;
  for(VAR_13=VAR_10; *VAR_13; VAR_13=VAR_13+VAR_14){
    VAR_14 = FUNC_4(VAR_13, &VAR_15);
    if( VAR_15==VAR_2 ){
      char *VAR_16;
      do {
        VAR_13 += VAR_14;
        VAR_14 = FUNC_4(VAR_13, &VAR_15);
      }while( VAR_15==VAR_3 );

      if( VAR_15==VAR_1 ) break;
      VAR_16 = FUNC_2(VAR_7, (const char *)VAR_13, VAR_14);
      if( VAR_16==0 ) break;
      FUNC_3(VAR_16);
      if( 0==FUNC_6((const char *)VAR_11, VAR_16) ){
        char *VAR_17 = FUNC_5(VAR_7, "%s%.*s\"%w\"",
            (VAR_8?VAR_8:""), (int)(VAR_13-VAR_10), VAR_10, (const char *)VAR_12
        );
        FUNC_1(VAR_7, VAR_8);
        VAR_8 = VAR_17;
        VAR_10 = &VAR_13[VAR_14];
      }
      FUNC_1(VAR_7, VAR_16);
    }
  }

  VAR_9 = FUNC_5(VAR_7, "%s%s", (VAR_8?VAR_8:""), VAR_10),
  FUNC_8(VAR_4, VAR_9, -1, VAR_0);
  FUNC_1(VAR_7, VAR_8);
}
