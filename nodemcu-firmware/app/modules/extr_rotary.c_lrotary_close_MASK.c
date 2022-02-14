
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int DATA ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned int,int ) ;
 int ** VAR_1 ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_3 )
{
  unsigned int VAR_4;

  VAR_4 = FUNC_3( VAR_3, 1 );
  FUNC_0( VAR_2, VAR_4 );
  FUNC_1(VAR_3, VAR_4, VAR_0);

  DATA *VAR_5 = VAR_1[VAR_4];
  if (VAR_5) {
    VAR_1[VAR_4] = ((void*)0);
    FUNC_2(VAR_5);
  }

  if (FUNC_5( VAR_4 )) {
    return FUNC_4( VAR_3, "Unable to close switch." );
  }
  return 0;
}
