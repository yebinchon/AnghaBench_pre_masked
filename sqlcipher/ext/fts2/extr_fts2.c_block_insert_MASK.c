
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int **) ;
 int FUNC_1 (int *,int,char const*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(fulltext_vtab *VAR_6, const char *VAR_7, int VAR_8,
                        sqlite_int64 *VAR_9){
  sqlite3_stmt *VAR_10;
  int VAR_11 = FUNC_0(VAR_6, VAR_0, &VAR_10);
  if( VAR_11!=VAR_3 ) return VAR_11;

  VAR_11 = FUNC_1(VAR_10, 1, VAR_7, VAR_8, VAR_5);
  if( VAR_11!=VAR_3 ) return VAR_11;

  VAR_11 = FUNC_3(VAR_10);
  if( VAR_11==VAR_4 ) return VAR_2;
  if( VAR_11!=VAR_1 ) return VAR_11;

  *VAR_9 = FUNC_2(VAR_6->db);
  return VAR_3;
}
