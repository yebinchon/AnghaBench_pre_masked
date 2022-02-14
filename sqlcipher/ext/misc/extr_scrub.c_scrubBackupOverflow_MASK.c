
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int szUsable; } ;
typedef TYPE_1__ ScrubState ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (TYPE_1__*,int,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(ScrubState *VAR_0, int VAR_1, u32 VAR_2){
  u8 *VAR_3, *VAR_4;

  VAR_4 = FUNC_1(VAR_0);
  if( VAR_4==0 ) return;
  while( VAR_2>0 && VAR_1!=0 ){
    VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_4);
    if( VAR_3==0 ) break;
    if( VAR_2 >= (VAR_0->szUsable)-4 ){
      VAR_2 -= (VAR_0->szUsable) - 4;
    }else{
      u32 VAR_5 = (VAR_0->szUsable - 4) - VAR_2;
      u32 VAR_6 = VAR_0->szUsable - VAR_5;
      FUNC_0(&VAR_3[VAR_6], 0, VAR_5);
      VAR_2 = 0;
    }
    FUNC_4(VAR_0, VAR_1, VAR_3);
    VAR_1 = FUNC_2(VAR_3);
  }
  FUNC_5(VAR_4);
}
