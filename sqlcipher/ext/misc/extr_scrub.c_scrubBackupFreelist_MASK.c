
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int szUsable; int szPage; scalar_t__ rcErr; } ;
typedef TYPE_1__ ScrubState ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (TYPE_1__*,int,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(ScrubState *VAR_2, int VAR_3, u32 VAR_4){
  u8 *VAR_5, *VAR_6;
  u32 VAR_7, VAR_8;

  if( VAR_2->rcErr ) return;
  VAR_6 = FUNC_1(VAR_2);
  if( VAR_6==0 ) return;

  while( VAR_3 && VAR_4){
    VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_6);
    if( VAR_5==0 ) break;
    VAR_7 = FUNC_2(&VAR_5[4]);
    VAR_8 = VAR_2->szUsable/4 - 2;
    if( VAR_7<VAR_8 ){
      FUNC_0(&VAR_5[VAR_7*4+8], 0, 4*(VAR_8-VAR_7));
    }
    FUNC_4(VAR_2, VAR_3, VAR_5);
    VAR_3 = FUNC_2(VAR_5);
  }
  FUNC_5(VAR_6);
}
