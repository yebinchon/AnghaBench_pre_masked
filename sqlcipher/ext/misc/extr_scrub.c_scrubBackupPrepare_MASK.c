
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_4__ {int rcErr; } ;
typedef TYPE_1__ ScrubState ;


 int FUNC_0 (TYPE_1__*,char*,int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int,int **,int ) ;

__attribute__((used)) static sqlite3_stmt *FUNC_4(
  ScrubState *VAR_0,
  sqlite3 *VAR_1,
  const char *VAR_2
){
  sqlite3_stmt *VAR_3;
  if( VAR_0->rcErr ) return 0;
  VAR_0->rcErr = FUNC_3(VAR_1, VAR_2, -1, &VAR_3, 0);
  if( VAR_0->rcErr ){
    FUNC_0(VAR_0, "SQL error \"%s\" on \"%s\"",
                   FUNC_1(VAR_1), VAR_2);
    FUNC_2(VAR_3);
    return 0;
  }
  return VAR_3;
}
