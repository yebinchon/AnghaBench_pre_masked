
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zName; int zDb; int db; } ;
typedef TYPE_1__ Fts5Config ;


 int FUNC_0 (int ,char**,char*,int ,int ,char const*,char const*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,char const*,char*) ;

int FUNC_3(
  Fts5Config *VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  int VAR_3,
  char **VAR_4
){
  int VAR_5;
  char *VAR_6 = 0;

  VAR_5 = FUNC_0(VAR_0->db, &VAR_6, "CREATE TABLE %Q.'%q_%q'(%s)%s",
      VAR_0->zDb, VAR_0->zName, VAR_1, VAR_2,

      VAR_3?" WITHOUT ROWID":

      ""
  );
  if( VAR_6 ){
    *VAR_4 = FUNC_2(
        "fts5: error creating shadow table %q_%s: %s",
        VAR_0->zName, VAR_1, VAR_6
    );
    FUNC_1(VAR_6);
  }

  return VAR_5;
}
