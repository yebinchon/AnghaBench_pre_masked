
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_5__ {int pVfs; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {int validJD; int iJD; } ;
typedef TYPE_2__ DateTime ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_context *VAR_1, DateTime *VAR_2){
  sqlite3 *VAR_3 = FUNC_1(VAR_1);
  if( FUNC_0(VAR_3->pVfs, &VAR_2->iJD)==VAR_0 ){
    VAR_2->validJD = 1;
    return 0;
  }else{
    return 1;
  }
}
