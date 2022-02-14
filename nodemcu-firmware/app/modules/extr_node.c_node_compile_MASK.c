
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Proto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int,int,char*) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int *,int ,int*,int) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char const*) ;
 int * FUNC_14 (int *,int) ;
 char* FUNC_15 (char const*) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_19( lua_State* VAR_5 )
{
  Proto* VAR_6;
  int VAR_7 = 0;
  size_t VAR_8;
  const char *VAR_9 = FUNC_2( VAR_5, 1, &VAR_8 );
  const char *VAR_10 = FUNC_15( VAR_9 );
  FUNC_1(VAR_5, FUNC_13(VAR_10) <= VAR_0 && FUNC_13(VAR_9) == VAR_8, 1, "filename invalid");

  char *VAR_11 = FUNC_6( VAR_5, VAR_8+1 );
  FUNC_12(VAR_11, VAR_9);

  if (VAR_8 < 4 || (FUNC_11( VAR_11 + VAR_8 - 4, ".lua") != 0) ) {
    FUNC_5( VAR_5, VAR_11 );
    return FUNC_3(VAR_5, "not a .lua file");
  }

  VAR_11[FUNC_13(VAR_11) - 2] = 'c';
  VAR_11[FUNC_13(VAR_11) - 1] = '\0';
  FUNC_0(VAR_11);
  FUNC_0("\n");
  if (FUNC_4(VAR_5, VAR_9) != 0) {
    FUNC_5( VAR_5, VAR_11 );
    return FUNC_3(VAR_5, FUNC_9(VAR_5, -1));
  }

  VAR_6 = FUNC_14(VAR_5, -1);

  int VAR_12 = 1;

  VAR_7 = FUNC_18(VAR_11, "w+");
  if (!VAR_7)
  {
    FUNC_5( VAR_5, VAR_11 );
    return FUNC_3(VAR_5, "cannot open/write to file");
  }

  FUNC_8(VAR_5);
  int VAR_13 = FUNC_7(VAR_5, VAR_6, VAR_4, &VAR_7, VAR_12);
  FUNC_10(VAR_5);

  if (FUNC_17(VAR_7) != VAR_3) {

    VAR_13 = 1;
  }
  FUNC_16(VAR_7);
  VAR_7 = 0;
  FUNC_5( VAR_5, VAR_11 );

  if (VAR_13 == VAR_1) {
    return FUNC_3(VAR_5, "value too big or small for target integer type");
  }
  if (VAR_13 == VAR_2) {
    return FUNC_3(VAR_5, "target lua_Number is integral but fractional value found");
  }
  if (VAR_13 == 1) {
    return FUNC_3(VAR_5, "writing to file failed");
  }

  return 0;
}
