
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iMagic; } ;
typedef TYPE_1__ testpcache ;
typedef int sqlite3_pcache ;
struct TYPE_5__ {scalar_t__ pDummy; scalar_t__ nInstance; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_2(sqlite3_pcache *VAR_3){
  testpcache *VAR_4 = (testpcache*)VAR_3;
  FUNC_0( VAR_4->iMagic==VAR_1 );
  FUNC_0( VAR_2.pDummy!=0 );
  FUNC_0( VAR_2.nInstance>0 );
  VAR_4->iMagic = VAR_0;
  FUNC_1(VAR_4);
  VAR_2.nInstance--;
}
