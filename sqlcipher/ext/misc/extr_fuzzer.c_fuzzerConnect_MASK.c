
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_5__ {char* zClassName; } ;
typedef TYPE_1__ fuzzer_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const* const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,char const*,char*,char**) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;
 char* FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5, const char *const*VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  int VAR_9 = VAR_2;
  fuzzer_vtab *VAR_10 = 0;
  const char *VAR_11 = VAR_6[0];
  const char *VAR_12 = VAR_6[1];

  if( VAR_5!=4 ){
    *VAR_8 = FUNC_8(
        "%s: wrong number of CREATE VIRTUAL TABLE arguments", VAR_11
    );
    VAR_9 = VAR_0;
  }else{
    sqlite3_int64 VAR_13;

    VAR_13 = FUNC_9(VAR_11);
    VAR_10 = FUNC_7( sizeof(*VAR_10) + VAR_13 + 1);
    if( VAR_10==0 ){
      VAR_9 = VAR_1;
    }else{
      char *VAR_14;

      FUNC_4(VAR_10, 0, sizeof(*VAR_10));
      VAR_10->zClassName = (char*)&VAR_10[1];
      FUNC_3(VAR_10->zClassName, VAR_11, (size_t)(VAR_13+1));

      VAR_14 = FUNC_0(VAR_6[3]);
      if( VAR_14==0 ){
        VAR_9 = VAR_1;
      }else{
        VAR_9 = FUNC_2(VAR_3, VAR_10, VAR_12, VAR_14, VAR_8);
        FUNC_6(VAR_14);
      }

      if( VAR_9==VAR_2 ){
        VAR_9 = FUNC_5(VAR_3, "CREATE TABLE x(word,distance,ruleset)");
      }
      if( VAR_9!=VAR_2 ){
        FUNC_1((sqlite3_vtab *)VAR_10);
        VAR_10 = 0;
      }
    }
  }

  *VAR_7 = (sqlite3_vtab *)VAR_10;
  return VAR_9;
}
