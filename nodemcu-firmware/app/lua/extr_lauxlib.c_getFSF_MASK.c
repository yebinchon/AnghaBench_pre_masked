
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {char const* buff; int f; scalar_t__ extraline; } ;
typedef TYPE_1__ LoadFSF ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static const char *FUNC_2 (lua_State *VAR_0, void *VAR_1, size_t *VAR_2) {
  LoadFSF *VAR_3 = (LoadFSF *)VAR_1;
  (void)VAR_0;

  if (VAR_0 == ((void*)0) && VAR_2 == ((void*)0))
    return ((void*)0);

  if (VAR_3->extraline) {
    VAR_3->extraline = 0;
    *VAR_2 = 1;
    return "\n";
  }

  if (FUNC_0(VAR_3->f)) return ((void*)0);
  *VAR_2 = FUNC_1(VAR_3->f, VAR_3->buff, sizeof(VAR_3->buff));

  return (*VAR_2 > 0) ? VAR_3->buff : ((void*)0);
}
