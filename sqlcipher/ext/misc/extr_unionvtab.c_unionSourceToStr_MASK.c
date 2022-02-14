
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int UnionTab ;
struct TYPE_5__ {int zDb; int zTab; } ;
typedef TYPE_1__ UnionSrc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,char**) ;
 int * FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,char**) ;
 int * FUNC_6 (int*,int *,char*,char**) ;
 char* FUNC_7 (int*,char const*) ;

__attribute__((used)) static char *FUNC_8(
  int *VAR_3,
  UnionTab *VAR_4,
  UnionSrc *VAR_5,
  char **VAR_6
){
  char *VAR_7 = 0;
  if( *VAR_3==VAR_0 ){
    sqlite3 *VAR_8 = FUNC_4(VAR_4, VAR_5);
    int VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_6);
    sqlite3_stmt *VAR_10 = FUNC_6(&VAR_9, VAR_8,
        "SELECT group_concat(quote(name) || '.' || quote(type)) "
        "FROM pragma_table_info(?, ?)", VAR_6
    );
    if( VAR_9==VAR_0 ){
      FUNC_0(VAR_10, 1, VAR_5->zTab, -1, VAR_2);
      FUNC_0(VAR_10, 2, VAR_5->zDb, -1, VAR_2);
      if( VAR_1==FUNC_2(VAR_10) ){
        const char *VAR_11 = (const char*)FUNC_1(VAR_10, 0);
        VAR_7 = FUNC_7(&VAR_9, VAR_11);
      }
      FUNC_3(&VAR_9, VAR_10, VAR_6);
    }
    *VAR_3 = VAR_9;
  }

  return VAR_7;
}
