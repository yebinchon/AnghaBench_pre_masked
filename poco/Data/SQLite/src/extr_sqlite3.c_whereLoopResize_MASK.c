
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int WhereTerm ;
struct TYPE_3__ {int nLSlot; int ** aLTerm; int ** aLTermSpace; } ;
typedef TYPE_1__ WhereLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int **,int) ;
 int FUNC_1 (int *,int **) ;
 int ** FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(sqlite3 *VAR_2, WhereLoop *VAR_3, int VAR_4){
  WhereTerm **VAR_5;
  if( VAR_3->nLSlot>=VAR_4 ) return VAR_1;
  VAR_4 = (VAR_4+7)&~7;
  VAR_5 = FUNC_2(VAR_2, sizeof(VAR_3->aLTerm[0])*VAR_4);
  if( VAR_5==0 ) return VAR_0;
  FUNC_0(VAR_5, VAR_3->aLTerm, sizeof(VAR_3->aLTerm[0])*VAR_3->nLSlot);
  if( VAR_3->aLTerm!=VAR_3->aLTermSpace ) FUNC_1(VAR_2, VAR_3->aLTerm);
  VAR_3->aLTerm = VAR_5;
  VAR_3->nLSlot = VAR_4;
  return VAR_1;
}
