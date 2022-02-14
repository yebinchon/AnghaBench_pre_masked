
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {double iJD; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,int **,TYPE_1__*) ;
 int FUNC_2 (int *,double) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  DateTime VAR_3;
  if( FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3)==0 ){
    FUNC_0(&VAR_3);
    FUNC_2(VAR_0, VAR_3.iJD/86400000.0);
  }
}
