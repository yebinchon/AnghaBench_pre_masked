
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iMagic; int nFree; } ;
typedef TYPE_1__ testpcache ;
typedef int sqlite3_pcache ;
struct TYPE_4__ {scalar_t__ pDummy; scalar_t__ nInstance; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_1(sqlite3_pcache *VAR_3){
  testpcache *VAR_4 = (testpcache*)VAR_3;
  FUNC_0( VAR_4->iMagic==VAR_1 );
  FUNC_0( VAR_2.pDummy!=0 );
  FUNC_0( VAR_2.nInstance>0 );
  return VAR_0 - VAR_4->nFree;
}
