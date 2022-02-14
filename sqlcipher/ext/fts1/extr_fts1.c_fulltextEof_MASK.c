
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int eof; } ;
typedef TYPE_1__ fulltext_cursor ;



__attribute__((used)) static int FUNC_0(sqlite3_vtab_cursor *VAR_0){
  fulltext_cursor *VAR_1 = (fulltext_cursor *) VAR_0;
  return VAR_1->eof;
}
