
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_1__* tmr_t ;
typedef scalar_t__ sint32_t ;
typedef int lua_State ;
struct TYPE_4__ {int mode; scalar_t__ lua_ref; int os; scalar_t__ interval; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int,int,char*) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(lua_State* VAR_12){
 tmr_t VAR_13 = FUNC_8(VAR_12, 1);

 uint32_t VAR_14 = FUNC_1(VAR_12, 2);
 uint8_t VAR_15 = FUNC_1(VAR_12, 3);

 FUNC_0(VAR_12, (VAR_14 > 0 && VAR_14 <= VAR_4), 2, VAR_5);
 FUNC_0(VAR_12, (VAR_15 == VAR_10 || VAR_15 == VAR_9 || VAR_15 == VAR_7), 3, "Invalid mode");
 FUNC_0(VAR_12, (FUNC_5(VAR_12, 4) == VAR_2 || FUNC_5(VAR_12, 4) == VAR_3), 4, "Must be function");

 FUNC_4(VAR_12, 4);
 sint32_t VAR_16 = FUNC_2(VAR_12, VAR_1);
 if(!(VAR_13->mode & VAR_6) && VAR_13->mode != VAR_8)
  FUNC_6(&VAR_13->os);

 if(VAR_13->lua_ref != VAR_0 && VAR_13->lua_ref != VAR_16)
  FUNC_3(VAR_12, VAR_1, VAR_13->lua_ref);
 VAR_13->lua_ref = VAR_16;
 VAR_13->mode = VAR_15|VAR_6;
 VAR_13->interval = VAR_14;
 FUNC_7(&VAR_13->os, VAR_11, VAR_13);
 return 0;
}
