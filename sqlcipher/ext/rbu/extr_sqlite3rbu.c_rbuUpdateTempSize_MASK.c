
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ szTemp; scalar_t__ szTempLimit; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef void* sqlite3_int64 ;
struct TYPE_5__ {void* sz; TYPE_1__* pRbu; } ;
typedef TYPE_2__ rbu_file ;
typedef scalar_t__ i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(rbu_file *VAR_2, sqlite3_int64 VAR_3){
  sqlite3rbu *VAR_4 = VAR_2->pRbu;
  i64 VAR_5 = VAR_3 - VAR_2->sz;
  VAR_4->szTemp += VAR_5;
  VAR_2->sz = VAR_3;
  FUNC_0( VAR_4->szTemp>=0 );
  if( VAR_4->szTempLimit && VAR_4->szTemp>VAR_4->szTempLimit ) return VAR_0;
  return VAR_1;
}
