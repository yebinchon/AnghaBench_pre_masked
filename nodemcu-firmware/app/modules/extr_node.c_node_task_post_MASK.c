
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_param_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (unsigned int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9( lua_State* VAR_8 )
{
  int VAR_9 = 1, VAR_10 = FUNC_6(VAR_8, 1);
  unsigned VAR_11 = VAR_5;
  if (VAR_10 == VAR_3) {
    VAR_11 = (unsigned) FUNC_1(VAR_8, 1);
    FUNC_0(VAR_8, VAR_11 <= VAR_4, 1, "invalid  priority");
    VAR_10 = FUNC_6(VAR_8, ++VAR_9);
  }
  FUNC_0(VAR_8, VAR_10 == VAR_1 || VAR_10 == VAR_2, VAR_9, "invalid function");
  FUNC_5(VAR_8, VAR_9);

  int VAR_12 = FUNC_3(VAR_8, VAR_0);

  if (!VAR_7)
    VAR_7 = FUNC_7(VAR_6);

  if(!FUNC_8(VAR_11, VAR_7, (task_param_t)VAR_12)) {
    FUNC_4(VAR_8, VAR_0, VAR_12);
    FUNC_2(VAR_8, "Task queue overflow. Task not posted");
  }
  return 0;
}
