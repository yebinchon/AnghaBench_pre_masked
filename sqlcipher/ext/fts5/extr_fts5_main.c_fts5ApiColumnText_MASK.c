
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pVtab; } ;
struct TYPE_5__ {scalar_t__ ePlan; int pStmt; TYPE_1__ base; } ;
typedef int Fts5FullTable ;
typedef TYPE_2__ Fts5Cursor ;
typedef int Fts5Context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(
  Fts5Context *VAR_2,
  int VAR_3,
  const char **VAR_4,
  int *VAR_5
){
  int VAR_6 = VAR_1;
  Fts5Cursor *VAR_7 = (Fts5Cursor*)VAR_2;
  if( FUNC_0((Fts5FullTable*)(VAR_7->base.pVtab))
   || VAR_7->ePlan==VAR_0
  ){
    *VAR_4 = 0;
    *VAR_5 = 0;
  }else{
    VAR_6 = FUNC_1(VAR_7, 0);
    if( VAR_6==VAR_1 ){
      *VAR_4 = (const char*)FUNC_3(VAR_7->pStmt, VAR_3+1);
      *VAR_5 = FUNC_2(VAR_7->pStmt, VAR_3+1);
    }
  }
  return VAR_6;
}
