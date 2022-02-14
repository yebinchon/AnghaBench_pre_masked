
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char FUNC_3 (unsigned char) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((weak))
void FUNC_6(const char* VAR_0) {
  if (!VAR_0) { return; }

  while (*VAR_0) {

    for (; *VAR_0 == ' '; VAR_0++);
    size_t VAR_1 = FUNC_1(VAR_0, " ");
    char VAR_2[VAR_1+1];
    FUNC_2(VAR_2, VAR_0, VAR_1);
    VAR_2[VAR_1] = '\0';


    for (char *VAR_3 = VAR_2; *VAR_3; VAR_3++) {
      *VAR_3 = FUNC_3((unsigned char)*VAR_3);
    }


    FUNC_5();
    FUNC_0(VAR_2);
    FUNC_4();

    VAR_0 += VAR_1;
  }
}
