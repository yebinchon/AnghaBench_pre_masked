
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lua_State ;
struct TYPE_4__ {int digest_size; } ;
typedef TYPE_1__ digest_mech_info_t ;
typedef int digest ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,char const*,size_t,int *) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_0)
{
  const digest_mech_info_t *VAR_1 = FUNC_2 (FUNC_5 (VAR_0, 1));
  if (!VAR_1)
    return FUNC_0 (VAR_0);
  size_t VAR_2 = 0;
  const char *VAR_3 = FUNC_4 (VAR_0, 2, &VAR_2);

  uint8_t VAR_4[VAR_1->digest_size];
  if (FUNC_3 (VAR_1, VAR_3, VAR_2, VAR_4) != 0)
    return FUNC_1 (VAR_0);

  FUNC_6 (VAR_0, VAR_4, sizeof (VAR_4));
  return 1;
}
