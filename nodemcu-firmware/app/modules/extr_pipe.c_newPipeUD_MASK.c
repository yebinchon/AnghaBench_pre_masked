
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ start; } ;
typedef TYPE_1__ buffer_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static buffer_t *FUNC_5(lua_State *VAR_1, int VAR_2, int VAR_3) {
  buffer_t *VAR_4 = (buffer_t *) FUNC_1(VAR_1, sizeof(buffer_t));
  FUNC_2(VAR_1, FUNC_0(VAR_0));
 FUNC_4(VAR_1, -2);
 VAR_4->start = VAR_4->end = 0;
  FUNC_3(VAR_1, VAR_2, VAR_3);
  return VAR_4;
}
