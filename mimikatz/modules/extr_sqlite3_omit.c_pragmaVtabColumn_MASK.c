
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_7__ {int iHidden; } ;
struct TYPE_6__ {int * azArg; int pPragma; } ;
typedef TYPE_2__ PragmaVtabCursor ;
typedef TYPE_3__ PragmaVtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_2,
  sqlite3_context *VAR_3,
  int VAR_4
){
  PragmaVtabCursor *VAR_5 = (PragmaVtabCursor*)VAR_2;
  PragmaVtab *VAR_6 = (PragmaVtab*)(VAR_2->pVtab);
  if( VAR_4<VAR_6->iHidden ){
    FUNC_2(VAR_3, FUNC_0(VAR_5->pPragma, VAR_4));
  }else{
    FUNC_1(VAR_3, VAR_5->azArg[VAR_4-VAR_6->iHidden],-1,VAR_1);
  }
  return VAR_0;
}
