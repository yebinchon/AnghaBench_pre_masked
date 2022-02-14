
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_6__ {int (* xFunc ) (int *,int *,int *,int,int **) ;} ;
struct TYPE_5__ {TYPE_2__* pAux; } ;
typedef TYPE_1__ Fts5Cursor ;
typedef int Fts5Context ;
typedef TYPE_2__ Fts5Auxiliary ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *,int,int **) ;

__attribute__((used)) static void FUNC_2(
  Fts5Auxiliary *VAR_1,
  Fts5Cursor *VAR_2,
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  FUNC_0( VAR_2->pAux==0 );
  VAR_2->pAux = VAR_1;
  VAR_1->xFunc(&VAR_0, (Fts5Context*)VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_2->pAux = 0;
}
