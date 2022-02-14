
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;
typedef int Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (char const*,int,char const*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__,char**,int*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(
  Fts3Table *VAR_1,
  const char *VAR_2,
  int VAR_3,
  const char *VAR_4,
  int VAR_5,
  sqlite3_int64 *VAR_6,
  sqlite3_int64 *VAR_7
){
  int VAR_8 = VAR_0;
  int VAR_9;

  FUNC_0( VAR_6 || VAR_7 );

  FUNC_1(VAR_4, &VAR_9);
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_0( !VAR_7 || !VAR_6 || VAR_8!=VAR_0 || (*VAR_6<=*VAR_7) );

  if( VAR_8==VAR_0 && VAR_9>1 ){
    char *VAR_10 = 0;
    int VAR_11 = 0;

    if( VAR_6 && VAR_7 && (*VAR_6!=*VAR_7) ){
      VAR_8 = FUNC_3(VAR_1, *VAR_6, &VAR_10, &VAR_11, 0);
      if( VAR_8==VAR_0 ){
        VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_10, VAR_11, VAR_6, 0);
      }
      FUNC_4(VAR_10);
      VAR_6 = 0;
      VAR_10 = 0;
    }

    if( VAR_8==VAR_0 ){
      VAR_8 = FUNC_3(VAR_1, VAR_6?*VAR_6:*VAR_7, &VAR_10, &VAR_11, 0);
    }
    if( VAR_8==VAR_0 ){
      VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_10, VAR_11, VAR_6, VAR_7);
    }
    FUNC_4(VAR_10);
  }

  return VAR_8;
}
