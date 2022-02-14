
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iMagic; } ;
typedef TYPE_1__ testpcache ;
typedef int sqlite3_pcache ;
struct TYPE_4__ {scalar_t__ pDummy; scalar_t__ nInstance; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(sqlite3_pcache *VAR_2, int VAR_3){
  testpcache *VAR_4 = (testpcache*)VAR_2;
  FUNC_0( VAR_4->iMagic==VAR_0 );
  FUNC_0( VAR_1.pDummy!=0 );
  FUNC_0( VAR_1.nInstance>0 );
}
