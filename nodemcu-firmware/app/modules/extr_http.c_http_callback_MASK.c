
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *,int,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ,scalar_t__) ;
 int FUNC_14 (int *,int) ;
 char* FUNC_15 (char const*) ;
 int FUNC_16 (unsigned char) ;

__attribute__((used)) static void FUNC_17( char * VAR_4, int VAR_5, char ** VAR_6 )
{
  const char *VAR_7 = VAR_6 ? *VAR_6 : ((void*)0);
  if (VAR_3 != VAR_1)
  {
    lua_State *VAR_8 = FUNC_7();

    FUNC_13(VAR_8, VAR_2, VAR_3);

    FUNC_11(VAR_8, VAR_5);
    if ( VAR_5 != VAR_0 && VAR_4)
    {
      FUNC_12(VAR_8, VAR_4);
      FUNC_8(VAR_8);

      const char *VAR_9 = VAR_7;


      while (*VAR_9 && *VAR_9 != '\n') {
        VAR_9++;
      }
      if (*VAR_9 == '\n') {
        VAR_9++;
      }

      while (*VAR_9 && *VAR_9 != '\r' && *VAR_9 != '\n') {
        const char *VAR_10 = VAR_9;
        while (*VAR_10 && *VAR_10 != '\r') {
          VAR_10++;
        }

        const char *VAR_11 = VAR_9;
        while (*VAR_11 != ':' && VAR_11 < VAR_10) {
          VAR_11++;
        }

        if (*VAR_11 != ':') {
          break;
        }

        const char *VAR_12 = VAR_11 + 1;
        while (*VAR_12 == ' ') {
          VAR_12++;
        }

        luaL_Buffer VAR_13;
        FUNC_3(VAR_8, &VAR_13);
        while (VAR_9 < VAR_11) {
          FUNC_2(&VAR_13, FUNC_16((unsigned char) *VAR_9));
          VAR_9++;
        }
        FUNC_4(&VAR_13);

        FUNC_9(VAR_8, VAR_12, VAR_10 - VAR_12);
        FUNC_14(VAR_8, -3);

        VAR_9 = VAR_10 + 1;
        if (*VAR_9 == '\n') {
          VAR_9++;
        }
      }
    }
    else
    {
      FUNC_10(VAR_8);
      FUNC_10(VAR_8);
    }

    if (VAR_6 && *VAR_6) {
      FUNC_1(*VAR_6);
      *VAR_6 = ((void*)0);
    }

    FUNC_5(VAR_8, VAR_2, VAR_3);
    VAR_3 = VAR_1;

    FUNC_6(VAR_8, 3, 0);
  }
}
