
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int *,char*,char const**,int*,char const**,int*) ;
 int FUNC_5 (char const*,int) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  const char* VAR_5;
  strm_int VAR_6;
  const char* VAR_7;
  const char* VAR_8;
  const char* VAR_9;
  strm_int VAR_10;
  const char* VAR_11;
  char VAR_12;
  strm_int VAR_13 = 0;
  strm_array VAR_14;
  strm_value* VAR_15;
  strm_int VAR_16;

  FUNC_4(VAR_1, VAR_2, VAR_3, "s|s", &VAR_9, &VAR_10, &VAR_5, &VAR_6);
  if (VAR_2 == 1) {
    VAR_5 = " ";
    VAR_6 = 1;
  }


  VAR_12 = VAR_5[0];
  VAR_7 = VAR_8 = VAR_9;
  VAR_11 = VAR_9 + VAR_10 - VAR_6;
  VAR_13 = 0;
  while (VAR_9<VAR_11) {
    if (*VAR_9 == VAR_12) {
      if (FUNC_0(VAR_9, VAR_5, VAR_6) == 0) {
        if (!(VAR_6 == 1 && VAR_12 == ' ' && (VAR_9-VAR_8) == 0)) {
          VAR_13++;
        }
        VAR_8 = VAR_9 + VAR_6;
      }
    }
    VAR_9++;
  }
  VAR_13++;


  VAR_14 = FUNC_1(((void*)0), VAR_13);
  VAR_15 = FUNC_2(VAR_14);
  VAR_12 = VAR_5[0];
  VAR_9 = VAR_8 = VAR_7;
  VAR_16 = 0;
  while (VAR_9<VAR_11) {
    if (*VAR_9 == VAR_12) {
      if (FUNC_0(VAR_9, VAR_5, VAR_6) == 0) {
        if (!(VAR_6 == 1 && VAR_12 == ' ' && (VAR_9-VAR_8) == 0)) {
          VAR_15[VAR_16++] = FUNC_5(VAR_8, VAR_9-VAR_8);
        }
        VAR_8 = VAR_9 + VAR_6;
      }
    }
    VAR_9++;
  }
  VAR_11 = VAR_7 + VAR_10;
  VAR_15[VAR_16++] = FUNC_5(VAR_8, VAR_11-VAR_8);
  *VAR_4 = FUNC_3(VAR_14);
  return VAR_0;
}
