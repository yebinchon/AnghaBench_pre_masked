
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *,char*,int,int **,int ) ;
 int FUNC_8 (int,char*,char*,char*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(
  sqlite3 *VAR_2,
  const char *VAR_3,
  char ***VAR_4,
  int *VAR_5
){
  char **VAR_6 = 0;
  char *VAR_7;
  sqlite3_stmt *VAR_8 = 0;
  int VAR_9 = VAR_1;
  int VAR_10 = 0;





  VAR_7 = FUNC_6("SELECT * FROM %Q", VAR_3);
  if( !VAR_7 ){
    VAR_9 = VAR_0;
    goto out;
  }
  VAR_9 = FUNC_7(VAR_2, VAR_7, -1, &VAR_8, 0);
  FUNC_5(VAR_7);

  if( VAR_9==VAR_1 ){
    int VAR_11;
    int VAR_12;
    char *VAR_13;
    VAR_10 = FUNC_2(VAR_8);




    VAR_12 = sizeof(char *) * VAR_10;
    for(VAR_11=0; VAR_11<VAR_10; VAR_11++){
      const char *VAR_14 = FUNC_3(VAR_8, VAR_11);
      if( !VAR_14 ){
        VAR_9 = VAR_0;
        goto out;
      }
      VAR_12 += (int)FUNC_9(VAR_14)+1;
    }
    VAR_6 = (char **)FUNC_1(VAR_12);
    if( !VAR_6 ){
      VAR_9 = VAR_0;
      goto out;
    }




    VAR_13 = (char *)(&VAR_6[VAR_10]);
    for(VAR_11=0; VAR_11<VAR_10; VAR_11++){
      VAR_6[VAR_11] = VAR_13;
      FUNC_8(VAR_12, VAR_13, "%s", FUNC_3(VAR_8,VAR_11));
      VAR_13 += (int)FUNC_9(VAR_13) + 1;
    }
    FUNC_0( (VAR_13-VAR_12)==(char *)VAR_6 );
  }

  *VAR_4 = VAR_6;
  *VAR_5 = VAR_10;

out:
  FUNC_4(VAR_8);
  return VAR_9;
}
