
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned char) ;

__attribute__((used)) static void FUNC_1(char* VAR_0, const char* VAR_1) {
 int VAR_2 = 0, VAR_3 = 0;

 while (VAR_1[VAR_2] != 0 && VAR_1[VAR_2] != '\n' && VAR_1[VAR_2] != ';') {
  if (VAR_1[VAR_2] >= '!' && VAR_1[VAR_2] <= '~') {
   char VAR_4 = VAR_1[VAR_2];


   if (VAR_4 >= 'a' && VAR_4 <= 'z')
    VAR_4 = FUNC_0 ((unsigned char)VAR_4);


   VAR_0[VAR_3] = VAR_4;
   VAR_3++;
  }
  VAR_2++;
 }
 VAR_0[VAR_3] = 0;
}
