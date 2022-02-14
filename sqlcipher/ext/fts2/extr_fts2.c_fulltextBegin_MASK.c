
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {scalar_t__ nPendingData; } ;
typedef TYPE_1__ fulltext_vtab ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_0){
  fulltext_vtab *VAR_1 = (fulltext_vtab *) VAR_0;
  FUNC_0(("FTS2 xBegin()\n"));




  FUNC_1( VAR_1->nPendingData<0 );
  return FUNC_2(VAR_1);
}
