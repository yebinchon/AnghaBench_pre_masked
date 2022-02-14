
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_2__ {int base; } ;
typedef TYPE_1__ fulltext_cursor ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1, sqlite3_vtab_cursor **VAR_2){
  fulltext_cursor *VAR_3;

  VAR_3 = (fulltext_cursor *) FUNC_1(sizeof(fulltext_cursor), 1);

  *VAR_2 = &VAR_3->base;
  FUNC_0(("FTS1 Open %p: %p\n", VAR_1, VAR_3));

  return VAR_0;
}
