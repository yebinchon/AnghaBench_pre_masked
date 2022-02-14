
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;
typedef int Expr ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (TYPE_1__*,int *,int ) ;

void FUNC_3(Parse *VAR_0, Expr *VAR_1, int VAR_2){
  sqlite3 *VAR_3 = VAR_0->db;
  VAR_1 = FUNC_2(VAR_3, VAR_1, 0);
  if( !VAR_3->mallocFailed ) FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_1(VAR_3, VAR_1);
}
