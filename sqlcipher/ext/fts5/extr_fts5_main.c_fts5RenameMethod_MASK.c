
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {int pStorage; } ;
typedef TYPE_1__ Fts5FullTable ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab *VAR_0,
  const char *VAR_1
){
  Fts5FullTable *VAR_2 = (Fts5FullTable*)VAR_0;
  return FUNC_0(VAR_2->pStorage, VAR_1);
}
