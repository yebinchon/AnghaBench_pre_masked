
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int* VAR_2 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (size_t,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int,int*,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9( lua_State* VAR_5 )
{
  unsigned int VAR_6;

  VAR_6 = FUNC_2( VAR_5, 1 );
  FUNC_0( VAR_3, VAR_6 );
  int VAR_7[4];

  if (FUNC_7(VAR_6)) {
    return FUNC_3( VAR_5, "Unable to setup stepper." );
  }

  int VAR_8;
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
    uint32_t VAR_9 = FUNC_2(VAR_5, 2 + VAR_8);

    FUNC_1(VAR_5, FUNC_5(VAR_9), 2 + VAR_8, "Invalid pin");

    VAR_7[VAR_8] = VAR_2[VAR_9];

    FUNC_6(VAR_9, VAR_0, VAR_1);
  }

  int VAR_10 = 0;
  if (FUNC_4(VAR_5) >= 6) {
    VAR_10 = FUNC_2(VAR_5, 6);
  }

  if (FUNC_8(VAR_6, VAR_7, VAR_10, VAR_4)) {
    return FUNC_3(VAR_5, "Unable to setup stepper.");
  }
  return 0;
}
