
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mg_str {int* p; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,struct mg_str*,int *) ;
 scalar_t__ FUNC_2 (int*,int*,int*) ;

int FUNC_3(const char *VAR_0, uint32_t VAR_1) {
  int VAR_2, VAR_3;
  uint32_t VAR_4, VAR_5;
  struct mg_str VAR_6;


  VAR_2 = (VAR_0 == ((void*)0) || *VAR_0 == '\0') ? '+' : '-';

  while ((VAR_0 = FUNC_1(VAR_0, &VAR_6, ((void*)0))) != ((void*)0)) {
    VAR_3 = VAR_6.p[0];
    if ((VAR_3 != '+' && VAR_3 != '-') ||
        FUNC_2(&VAR_6.p[1], &VAR_4, &VAR_5) == 0) {
      return -1;
    }

    if (VAR_4 == (VAR_1 & VAR_5)) {
      VAR_2 = VAR_3;
    }
  }

  FUNC_0(("%08x %c", (unsigned int) VAR_1, VAR_2));
  return VAR_2 == '+';
}
