
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* tmr_t ;
typedef int lua_State ;
struct TYPE_3__ {scalar_t__ self_ref; int mode; int interval; int os; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 TYPE_1__* FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(lua_State* VAR_4){
 tmr_t VAR_5 = FUNC_4(VAR_4, 1);

 if (VAR_5->self_ref == VAR_0) {
  FUNC_2(VAR_4, 1);
  VAR_5->self_ref = FUNC_0(VAR_4, VAR_1);
 }


 if(!(VAR_5->mode&VAR_2)){
  FUNC_1(VAR_4, 0);
 }else{
  VAR_5->mode &= ~VAR_2;
  FUNC_3(&VAR_5->os, VAR_5->interval, VAR_5->mode==VAR_3);
  FUNC_1(VAR_4, 1);
 }
 return 1;
}
