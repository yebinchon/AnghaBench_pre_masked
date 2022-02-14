
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_5__ {int pReadAux; scalar_t__ bAuxValid; } ;
typedef TYPE_1__ RtreeCursor ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_1){
  RtreeCursor *VAR_2 = (RtreeCursor *)VAR_1;
  int VAR_3 = VAR_0;


  FUNC_0(VAR_2, "POP-Nx:");
  if( VAR_2->bAuxValid ){
    VAR_2->bAuxValid = 0;
    FUNC_3(VAR_2->pReadAux);
  }
  FUNC_1(VAR_2);
  VAR_3 = FUNC_2(VAR_2);
  return VAR_3;
}
