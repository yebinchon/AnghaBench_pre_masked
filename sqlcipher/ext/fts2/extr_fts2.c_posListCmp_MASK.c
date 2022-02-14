
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ iType; } ;
typedef TYPE_1__ PLReader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(PLReader *VAR_2, PLReader *VAR_3){
  FUNC_0( VAR_2->iType==VAR_3->iType );
  if( VAR_2->iType==VAR_0 ) return 0;

  if( FUNC_1(VAR_2) ) return FUNC_1(VAR_3) ? 0 : 1;
  if( FUNC_1(VAR_3) ) return -1;

  if( FUNC_2(VAR_2)<FUNC_2(VAR_3) ) return -1;
  if( FUNC_2(VAR_2)>FUNC_2(VAR_3) ) return 1;

  if( FUNC_4(VAR_2)<FUNC_4(VAR_3) ) return -1;
  if( FUNC_4(VAR_2)>FUNC_4(VAR_3) ) return 1;
  if( VAR_2->iType==VAR_1 ) return 0;

  if( FUNC_5(VAR_2)<FUNC_5(VAR_3) ) return -1;
  if( FUNC_5(VAR_2)>FUNC_5(VAR_3) ) return 1;

  if( FUNC_3(VAR_2)<FUNC_3(VAR_3) ) return -1;
  if( FUNC_3(VAR_2)>FUNC_3(VAR_3) ) return 1;

  return 0;
}
