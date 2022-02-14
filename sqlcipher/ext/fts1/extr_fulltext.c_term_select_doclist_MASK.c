
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int zName; int db; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int **,char*) ;
 int FUNC_1 (int *,int,char const*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(fulltext_vtab *VAR_2, const char *VAR_3, int VAR_4,
                               sqlite3_stmt **VAR_5){
  int VAR_6;
  if( *VAR_5 ){
    VAR_6 = FUNC_2(*VAR_5);
  } else {
    VAR_6 = FUNC_0(VAR_2->db, VAR_2->zName, VAR_5,
      "select doclist from %_term where term = ? order by first");
  }
  if( VAR_6!=VAR_0 ) return VAR_6;

  VAR_6 = FUNC_1(*VAR_5, 1, VAR_3, VAR_4, VAR_1);
  if( VAR_6!=VAR_0 ) return VAR_6;

  return FUNC_3(*VAR_5);
}
