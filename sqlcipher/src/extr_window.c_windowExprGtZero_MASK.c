
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_5__ {int enc; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Parse *VAR_1, Expr *VAR_2){
  int VAR_3 = 0;
  sqlite3 *VAR_4 = VAR_1->db;
  sqlite3_value *VAR_5 = 0;
  FUNC_1(VAR_4, VAR_2, VAR_4->enc, VAR_0, &VAR_5);
  if( VAR_5 && FUNC_2(VAR_5)>0 ){
    VAR_3 = 1;
  }
  FUNC_0(VAR_5);
  return VAR_3;
}
