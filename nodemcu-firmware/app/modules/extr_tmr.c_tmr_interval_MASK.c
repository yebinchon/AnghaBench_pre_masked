
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* tmr_t ;
typedef int lua_State ;
struct TYPE_3__ {int mode; scalar_t__ interval; int os; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(lua_State* VAR_5){
 tmr_t VAR_6 = FUNC_4(VAR_5, 1);

 uint32_t VAR_7 = FUNC_1(VAR_5, 2);
 FUNC_0(VAR_5, (VAR_7 > 0 && VAR_7 <= VAR_0), 2, VAR_1);
 if(VAR_6->mode != VAR_4){
  VAR_6->interval = VAR_7;
  if(!(VAR_6->mode&VAR_2)){
   FUNC_3(&VAR_6->os);
   FUNC_2(&VAR_6->os, VAR_6->interval, VAR_6->mode==VAR_3);
  }
 }
 return 0;
}
