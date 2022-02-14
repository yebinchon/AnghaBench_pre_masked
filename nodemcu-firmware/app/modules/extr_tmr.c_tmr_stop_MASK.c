
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* tmr_t ;
typedef int lua_State ;
struct TYPE_3__ {scalar_t__ self_ref; int mode; int os; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_5){
 tmr_t VAR_6 = FUNC_3(VAR_5, 1);

 if (VAR_6->self_ref != VAR_1) {
  FUNC_0(VAR_5, VAR_2, VAR_6->self_ref);
  VAR_6->self_ref = VAR_0;
 }


 if(!(VAR_6->mode & VAR_3) && VAR_6->mode != VAR_4){
  VAR_6->mode |= VAR_3;
  FUNC_2(&VAR_6->os);
  FUNC_1(VAR_5, 1);
 }else{
  FUNC_1(VAR_5, 0);
 }
 return 1;
}
