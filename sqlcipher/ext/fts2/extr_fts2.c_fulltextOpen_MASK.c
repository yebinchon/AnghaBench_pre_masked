
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ fulltext_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  fulltext_cursor *VAR_4;

  VAR_4 = (fulltext_cursor *) FUNC_2(sizeof(fulltext_cursor));
  if( VAR_4 ){
    FUNC_1(VAR_4, 0, sizeof(fulltext_cursor));

    *VAR_3 = &VAR_4->base;
    FUNC_0(("FTS2 Open %p: %p\n", VAR_2, VAR_4));
    return VAR_1;
  }else{
    return VAR_0;
  }
}
