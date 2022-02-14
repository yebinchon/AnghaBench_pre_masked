
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *,char*,char const**,int*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  const char* VAR_5;
  const char* VAR_6;
  const char* VAR_7 = ((void*)0);
  strm_int VAR_8;
  strm_array VAR_9;
  strm_int VAR_10 = 0;
  strm_value* VAR_11;
  strm_int VAR_12 = 0;

  FUNC_3(VAR_1, VAR_2, VAR_3, "s", &VAR_5, &VAR_8);

  VAR_6 = VAR_5;

  while (*VAR_6) {
    VAR_6 += FUNC_5(VAR_6, VAR_6 + VAR_8);
    VAR_10++;
  }

  VAR_9 = FUNC_0(((void*)0), VAR_10);
  VAR_11 = FUNC_1(VAR_9);
  VAR_6 = VAR_5;

  while (*VAR_6) {
    VAR_7 = VAR_6;
    VAR_6 += FUNC_5(VAR_6, VAR_6 + VAR_8);
    VAR_11[VAR_12++] = FUNC_4(VAR_7, VAR_6 - VAR_7);
  }

  *VAR_4 = FUNC_2(VAR_9);
  return VAR_0;
}
