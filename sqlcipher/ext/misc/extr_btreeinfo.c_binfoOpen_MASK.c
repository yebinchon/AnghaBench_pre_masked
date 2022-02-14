
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_4__ {int * pVtab; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef TYPE_2__ BinfoCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  BinfoCursor *VAR_4;

  VAR_4 = (BinfoCursor *)FUNC_1(sizeof(BinfoCursor));
  if( VAR_4==0 ){
    return VAR_0;
  }else{
    FUNC_0(VAR_4, 0, sizeof(BinfoCursor));
    VAR_4->base.pVtab = VAR_2;
  }

  *VAR_3 = (sqlite3_vtab_cursor *)VAR_4;
  return VAR_1;
}
