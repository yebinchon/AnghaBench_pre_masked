
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char**,char*,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 char* FUNC_8 (char*,char const*,char const*) ;
 int FUNC_9 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(
  sqlite3 *VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  const char ***VAR_5,
  int *VAR_6,
  int *VAR_7,
  char **VAR_8
){
  int VAR_9 = VAR_1;
  char *VAR_10;
  sqlite3_stmt *VAR_11 = 0;

  VAR_10 = FUNC_8("SELECT * FROM %Q.%Q", VAR_3, VAR_4);
  if( !VAR_10 ){
    VAR_9 = VAR_0;
  }else{
    VAR_9 = FUNC_9(VAR_2, VAR_10, -1, &VAR_11, 0);
    if( VAR_9!=VAR_1 ){
      FUNC_1(VAR_8, "%s", FUNC_4(VAR_2));
    }
  }
  FUNC_6(VAR_10);

  if( VAR_9==VAR_1 ){
    const char **VAR_12;
    sqlite3_int64 VAR_13 = 0;
    int VAR_14;
    int VAR_15;




    VAR_14 = FUNC_2(VAR_11);
    for(VAR_15=0; VAR_15<VAR_14; VAR_15++){
      const char *VAR_16 = FUNC_3(VAR_11, VAR_15);
      VAR_13 += FUNC_10(VAR_16) + 1;
    }


    VAR_12 = (const char **)FUNC_7(sizeof(char *) * VAR_14 + VAR_13);
    if( VAR_12==0 ){
      VAR_9 = VAR_0;
    }else{
      char *VAR_17 = (char *)&VAR_12[VAR_14];
      for(VAR_15=0; VAR_15<VAR_14; VAR_15++){
        const char *VAR_18 = FUNC_3(VAR_11, VAR_15);
        int VAR_19 = (int)FUNC_10(VAR_18)+1;
        FUNC_0(VAR_17, VAR_18, VAR_19);
        VAR_12[VAR_15] = VAR_17;
        VAR_17 += VAR_19;
      }
    }
    FUNC_5(VAR_11);


    *VAR_6 = VAR_14;
    *VAR_7 = VAR_13;
    *VAR_5 = VAR_12;
  }

  return VAR_9;
}
