
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_source {char const* id; struct obs_lua_source* next; } ;


 struct obs_lua_source* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline struct obs_lua_source *FUNC_2(const char *VAR_2)
{
 struct obs_lua_source *VAR_3 = ((void*)0);

 FUNC_0(&VAR_1);
 struct obs_lua_source *VAR_4 = VAR_0;
 while (VAR_4) {

  if (VAR_4->id == VAR_2) {
   VAR_3 = VAR_4;
   break;
  }

  VAR_4 = VAR_4->next;
 }
 FUNC_1(&VAR_1);

 return VAR_3;
}
