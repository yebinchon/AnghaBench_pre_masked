
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_2__ {char* zDb; int zName; scalar_t__ zContentTbl; int * db; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,char*,char const*,int ,char const*,int ,char const*,int ,char const*,int ,char*,char const*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  Fts3Table *VAR_2 = (Fts3Table *)VAR_1;
  int VAR_3 = VAR_0;
  const char *VAR_4 = VAR_2->zDb;
  sqlite3 *VAR_5 = VAR_2->db;


  FUNC_0(&VAR_3, VAR_5,
    "DROP TABLE IF EXISTS %Q.'%q_segments';"
    "DROP TABLE IF EXISTS %Q.'%q_segdir';"
    "DROP TABLE IF EXISTS %Q.'%q_docsize';"
    "DROP TABLE IF EXISTS %Q.'%q_stat';"
    "%s DROP TABLE IF EXISTS %Q.'%q_content';",
    VAR_4, VAR_2->zName,
    VAR_4, VAR_2->zName,
    VAR_4, VAR_2->zName,
    VAR_4, VAR_2->zName,
    (VAR_2->zContentTbl ? "--" : ""), VAR_4,VAR_2->zName
  );





  return (VAR_3==VAR_0 ? FUNC_1(VAR_1) : VAR_3);
}
