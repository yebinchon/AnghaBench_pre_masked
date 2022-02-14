
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_4__ {char* zDbName; scalar_t__ zTableName; scalar_t__ zCostTable; int base; int * db; } ;
typedef TYPE_1__ spellfix1_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int*,int *,char*,char const*,char const*,...) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,char*) ;
 TYPE_1__* FUNC_6 (int) ;
 void* FUNC_7 (char*,char const* const) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const* const,char*,int) ;

__attribute__((used)) static int FUNC_10(
  int VAR_3,
  sqlite3 *VAR_4,
  void *VAR_5,
  int VAR_6, const char *const*VAR_7,
  sqlite3_vtab **VAR_8,
  char **VAR_9
){
  spellfix1_vtab *VAR_10 = 0;

  const char *VAR_11 = VAR_7[1];
  const char *VAR_12 = VAR_7[2];
  int VAR_13;
  int VAR_14 = VAR_2;
  int VAR_15;

  VAR_13 = (int)FUNC_8(VAR_11);
  VAR_10 = FUNC_6( sizeof(*VAR_10) + VAR_13 + 1);
  if( VAR_10==0 ){
    VAR_14 = VAR_1;
  }else{
    FUNC_1(VAR_10, 0, sizeof(*VAR_10));
    VAR_10->zDbName = (char*)&VAR_10[1];
    FUNC_0(VAR_10->zDbName, VAR_11, VAR_13+1);
    VAR_10->zTableName = FUNC_7("%s", VAR_12);
    VAR_10->db = VAR_4;
    if( VAR_10->zTableName==0 ){
      VAR_14 = VAR_1;
    }else{
      VAR_14 = FUNC_5(VAR_4,
           "CREATE TABLE x(word,rank,distance,langid, "
           "score, matchlen, phonehash HIDDEN, "
           "top HIDDEN, scope HIDDEN, srchcnt HIDDEN, "
           "soundslike HIDDEN, command HIDDEN)"
      );
    }
    if( VAR_14==VAR_2 && VAR_3 ){
      FUNC_2(&VAR_14, VAR_4,
         "CREATE TABLE IF NOT EXISTS \"%w\".\"%w_vocab\"(\n"
         "  id INTEGER PRIMARY KEY,\n"
         "  rank INT,\n"
         "  langid INT,\n"
         "  word TEXT,\n"
         "  k1 TEXT,\n"
         "  k2 TEXT\n"
         ");\n",
         VAR_11, VAR_12
      );
      FUNC_2(&VAR_14, VAR_4,
         "CREATE INDEX IF NOT EXISTS \"%w\".\"%w_vocab_index_langid_k2\" "
            "ON \"%w_vocab\"(langid,k2);",
         VAR_11, VAR_12, VAR_12
      );
    }
    for(VAR_15=3; VAR_14==VAR_2 && VAR_15<VAR_6; VAR_15++){
      if( FUNC_9(VAR_7[VAR_15],"edit_cost_table=",16)==0 && VAR_10->zCostTable==0 ){
        VAR_10->zCostTable = FUNC_3(&VAR_7[VAR_15][16]);
        if( VAR_10->zCostTable==0 ) VAR_14 = VAR_1;
        continue;
      }
      *VAR_9 = FUNC_7("bad argument to spellfix1(): \"%s\"", VAR_7[VAR_15]);
      VAR_14 = VAR_0;
    }
  }

  if( VAR_14 && VAR_10 ){
    *VAR_8 = 0;
    FUNC_4(0, &VAR_10->base);
  }else{
    *VAR_8 = (sqlite3_vtab *)VAR_10;
  }
  return VAR_14;
}
