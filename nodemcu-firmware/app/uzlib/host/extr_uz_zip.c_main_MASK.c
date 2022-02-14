
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (int *,int,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int,int *) ;
 int FUNC_6 (char*,char const*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int **,scalar_t__*,int *,scalar_t__) ;

int FUNC_11 (int VAR_3, char **VAR_4) {
  const char *VAR_5 = VAR_4[1], *VAR_6 = VAR_4[2];
  if (VAR_3!=3)
    return 1;
  FUNC_6 ("Compressing in=%s out=%s\n", VAR_5, VAR_6);
  FILE *VAR_7, *VAR_8;
  int VAR_9 = -1;
  uint32_t VAR_10, VAR_11;
  uint8_t *VAR_12, *VAR_13;

  if (!(VAR_7 = FUNC_1(VAR_5, "rb")) || FUNC_3(VAR_7, 0, VAR_0) ||
      (VAR_10 = FUNC_4(VAR_7)) <= 0 || FUNC_3(VAR_7, 0, VAR_1))
    return 1;
  if ((VAR_8 = FUNC_1(VAR_6, "wb")) == ((void*)0) ||
      (VAR_12 = (uint8_t *) FUNC_9(VAR_10)) == ((void*)0) ||
      FUNC_2(VAR_12, 1, VAR_10, VAR_7) != VAR_10)
    return 1;

  if (FUNC_10 (&VAR_13, &VAR_11, VAR_12, VAR_10) == VAR_2 &&
      VAR_11 == FUNC_5(VAR_13, VAR_11, 1, VAR_8))
    VAR_9 = VAR_2;
  FUNC_8(VAR_12);
  if (VAR_13) FUNC_8(VAR_13);

  FUNC_0(VAR_7);
  FUNC_0(VAR_8);

  if (VAR_9 == VAR_2)
    FUNC_7(VAR_6);

  return (VAR_9 == VAR_2) ? 1: 0;
}
