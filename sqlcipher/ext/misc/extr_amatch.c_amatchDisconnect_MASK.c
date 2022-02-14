
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {scalar_t__ nCursor; } ;
typedef TYPE_1__ amatch_vtab ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  amatch_vtab *VAR_2 = (amatch_vtab*)VAR_1;
  FUNC_1( VAR_2->nCursor==0 );
  FUNC_0(VAR_2);
  return VAR_0;
}
