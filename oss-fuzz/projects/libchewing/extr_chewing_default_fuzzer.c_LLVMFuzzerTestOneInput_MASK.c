
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stress_argv ;


 int const* VAR_0 ;
 int const* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char**) ;

int FUNC_1(const uint8_t* VAR_3, size_t VAR_4) {
  VAR_0 = VAR_1 = VAR_3;
  VAR_2 = VAR_4;

  const char* VAR_5[] = {
      "./chewing_fuzzer", "-loop", "1", ((void*)0),
  };
  FUNC_0(sizeof(VAR_5) / sizeof(VAR_5[0]) - 1,
              (char**)VAR_5);
  return 0;
}
