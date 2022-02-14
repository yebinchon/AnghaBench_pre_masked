
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int szUsable; int szPage; scalar_t__ nPage; scalar_t__ rcErr; } ;
typedef TYPE_1__ ScrubState ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(ScrubState *VAR_0){
  u32 VAR_1 = 2;
  u32 VAR_2 = VAR_0->szUsable/5;
  u32 VAR_3 = (1073742335/VAR_0->szPage)+1;
  u8 *VAR_4, *VAR_5;
  if( VAR_0->rcErr ) return;
  VAR_5 = FUNC_0(VAR_0);
  if( VAR_5==0 ) return;
  while( VAR_1<=VAR_0->nPage ){
    VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_5);
    if( VAR_4==0 ) break;
    FUNC_2(VAR_0, VAR_1, VAR_4);
    VAR_1 += VAR_2+1;
    if( VAR_1==VAR_3 ) VAR_1++;
  }
  FUNC_3(VAR_5);
}
