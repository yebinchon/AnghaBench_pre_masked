
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* tmr_t ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ lua_ref; scalar_t__ self_ref; int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void* VAR_8){
 tmr_t VAR_9 = (tmr_t)VAR_8;
 lua_State* VAR_10 = FUNC_2();
 if(VAR_9->lua_ref == VAR_0)
  return;
 FUNC_3(VAR_10, VAR_2, VAR_9->lua_ref);
 FUNC_3(VAR_10, VAR_2, VAR_9->self_ref);

 if(VAR_9->mode == VAR_7){
  FUNC_0(VAR_10, VAR_2, VAR_9->lua_ref);
  VAR_9->lua_ref = VAR_0;
  VAR_9->mode = VAR_5;
 }else if(VAR_9->mode == VAR_6){
  VAR_9->mode |= VAR_3;
 }
 if (VAR_9->mode != VAR_4 && VAR_9->self_ref != VAR_1) {
  FUNC_0(VAR_10, VAR_2, VAR_9->self_ref);
  VAR_9->self_ref = VAR_0;
 }
 FUNC_1(VAR_10, 1, 0);
}
