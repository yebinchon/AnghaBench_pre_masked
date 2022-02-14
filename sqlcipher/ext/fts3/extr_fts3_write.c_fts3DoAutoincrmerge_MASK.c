
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {int nAutoincrmerge; scalar_t__ bFts4; int bHasStat; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (TYPE_1__*,int ,int **,int ) ;
 int FUNC_3 (int*,TYPE_1__*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  Fts3Table *VAR_4,
  const char *VAR_5
){
  int VAR_6 = VAR_2;
  sqlite3_stmt *VAR_7 = 0;
  VAR_4->nAutoincrmerge = FUNC_1(&VAR_5);
  if( VAR_4->nAutoincrmerge==1 || VAR_4->nAutoincrmerge>VAR_0 ){
    VAR_4->nAutoincrmerge = 8;
  }
  if( !VAR_4->bHasStat ){
    FUNC_0( VAR_4->bFts4==0 );
    FUNC_3(&VAR_6, VAR_4);
    if( VAR_6 ) return VAR_6;
  }
  VAR_6 = FUNC_2(VAR_4, VAR_3, &VAR_7, 0);
  if( VAR_6 ) return VAR_6;
  FUNC_4(VAR_7, 1, VAR_1);
  FUNC_4(VAR_7, 2, VAR_4->nAutoincrmerge);
  FUNC_6(VAR_7);
  VAR_6 = FUNC_5(VAR_7);
  return VAR_6;
}
