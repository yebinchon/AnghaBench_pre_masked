
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* array; } ;
struct obs_lua_script {TYPE_1__ log_chunk; int base; } ;
typedef int lua_State ;


 struct obs_lua_script* VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,char*,char const*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1)
{
 struct obs_lua_script *VAR_2 = VAR_0;
 int VAR_3 = (int)FUNC_2(VAR_1, 1);
 const char *VAR_4 = FUNC_3(VAR_1, 2);

 if (!VAR_4)
  return 0;



 FUNC_0(&VAR_2->log_chunk, VAR_4);

 const char *VAR_5 = VAR_2->log_chunk.array;
 char *VAR_6 = FUNC_5(VAR_5, '\n');

 while (VAR_6) {
  *VAR_6 = 0;
  FUNC_4(&VAR_2->base, VAR_3, "%s", VAR_5);
  *VAR_6 = '\n';

  VAR_5 = VAR_6 + 1;
  VAR_6 = FUNC_5(VAR_5, '\n');
 }

 if (VAR_5 && *VAR_5)
  FUNC_4(&VAR_2->base, VAR_3, "%s", VAR_5);
 FUNC_1(&VAR_2->log_chunk, 0);



 return 0;
}
