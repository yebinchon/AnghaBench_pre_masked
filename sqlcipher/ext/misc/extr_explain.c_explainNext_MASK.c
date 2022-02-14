
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ rc; int pExplain; } ;
typedef TYPE_1__ explain_cursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_3){
  explain_cursor *VAR_4 = (explain_cursor*)VAR_3;
  VAR_4->rc = FUNC_0(VAR_4->pExplain);
  if( VAR_4->rc!=VAR_0 && VAR_4->rc!=VAR_2 ) return VAR_4->rc;
  return VAR_1;
}
