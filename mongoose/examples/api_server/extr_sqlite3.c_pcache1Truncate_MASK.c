
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_3__ {unsigned int iMaxKey; int pGroup; } ;
typedef TYPE_1__ PCache1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_3(sqlite3_pcache *VAR_0, unsigned int VAR_1){
  PCache1 *VAR_2 = (PCache1 *)VAR_0;
  FUNC_0(VAR_2->pGroup);
  if( VAR_1<=VAR_2->iMaxKey ){
    FUNC_2(VAR_2, VAR_1);
    VAR_2->iMaxKey = VAR_1-1;
  }
  FUNC_1(VAR_2->pGroup);
}
