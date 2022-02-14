
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* aStat; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

void FUNC_1(Pager *VAR_7, int VAR_8, int VAR_9, int *VAR_10){

  FUNC_0( VAR_8==VAR_4
       || VAR_8==VAR_5
       || VAR_8==VAR_6
       || VAR_8==VAR_6+1
  );

  FUNC_0( VAR_4+1==VAR_5 );
  FUNC_0( VAR_4+2==VAR_6 );
  FUNC_0( VAR_0==0 && VAR_1==1
           && VAR_3==2 && VAR_2==3 );

  VAR_8 -= VAR_4;
  *VAR_10 += VAR_7->aStat[VAR_8];
  if( VAR_9 ){
    VAR_7->aStat[VAR_8] = 0;
  }
}
