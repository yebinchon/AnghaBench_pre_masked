
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 char*** VAR_0 ;
 char* VAR_1 ;

void FUNC_0(void) {


  {
    char *VAR_2 = VAR_1;
    for (uint16_t VAR_3 = 0; VAR_3 < 26; VAR_3++) {
      char *VAR_4 = VAR_0[0][VAR_3];
      VAR_0[1][VAR_3] = VAR_2;
      while ((*VAR_2++ = *VAR_4++)) {}
    }
  }

  for (uint16_t VAR_5 = 0; VAR_5 < 26; VAR_5++) {
    char *VAR_6 = VAR_0[1][VAR_5];
    bool VAR_7 = 0;
    if (*VAR_6) {
      while (*VAR_6) {
        bool VAR_8 = (*VAR_6 >= 'a' && *VAR_6 <= 'z');
        bool VAR_9 = (*VAR_6 >= 'A' && *VAR_6 <= 'Z');
        if (VAR_7 == 0 && VAR_8) {
          *VAR_6 -= ('a' - 'A');
        }
        VAR_7 = VAR_8 || VAR_9;
        VAR_6++;
      }
    }
  }
}
