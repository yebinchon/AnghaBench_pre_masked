
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {scalar_t__ nColumn; scalar_t__ zLanguageid; } ;
typedef TYPE_1__ Fts3Table ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_1(Fts3Table *VAR_0, sqlite3_stmt *VAR_1){
  int VAR_2 = 0;
  if( VAR_0->zLanguageid ) VAR_2 = FUNC_0(VAR_1, VAR_0->nColumn+1);
  return VAR_2;
}
