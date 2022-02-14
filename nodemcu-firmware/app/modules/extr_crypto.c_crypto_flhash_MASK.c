
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__ const*,int *,int,int *) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_3)
{
  const digest_mech_info_t *VAR_4 = FUNC_3 (FUNC_5 (VAR_3, 1));
  if (!VAR_4)
    return FUNC_1 (VAR_3);
  const char *VAR_5 = FUNC_5 (VAR_3, 2);


  int VAR_6 = FUNC_8 (VAR_5, "r");
  if(!VAR_6) {
    return FUNC_0(VAR_3);
  }


  uint8_t VAR_7[VAR_4->digest_size];
  int VAR_8 = FUNC_4 (VAR_4, &VAR_2, VAR_6, VAR_7);


  FUNC_7(VAR_6);

  if (VAR_8 == VAR_1)
    return FUNC_2 (VAR_3);
  else if (VAR_8 == VAR_0)
    return FUNC_1(VAR_3);
  else
    FUNC_6 (VAR_3, VAR_7, sizeof (VAR_7));

  return 1;
}
