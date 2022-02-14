
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_4__ {int * pVdbe; } ;
typedef TYPE_1__ Parse ;
typedef int KeyInfo ;
typedef int Index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int *,int ) ;

void FUNC_3(Parse *VAR_1, Index *VAR_2){
  Vdbe *VAR_3 = VAR_1->pVdbe;
  KeyInfo *VAR_4;
  FUNC_0( VAR_3!=0 );
  FUNC_0( VAR_2!=0 );
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  if( VAR_4 ) FUNC_2(VAR_3, VAR_4, VAR_0);
}
