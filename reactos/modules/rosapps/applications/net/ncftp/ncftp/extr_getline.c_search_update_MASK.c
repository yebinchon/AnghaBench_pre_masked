
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static void
FUNC_1(int VAR_5)
{
    if (VAR_5 == 0) {
 VAR_2 = 0;
        VAR_4[0] = 0;
        VAR_3[0] = '?';
        VAR_3[1] = ' ';
        VAR_3[2] = 0;
    } else if (VAR_5 > 0) {
        VAR_4[VAR_2] = (char) VAR_5;
        VAR_4[VAR_2+1] = (char) 0;
        VAR_3[VAR_2] = (char) VAR_5;
        VAR_3[VAR_2+1] = (char) '?';
        VAR_3[VAR_2+2] = (char) ' ';
        VAR_3[VAR_2+3] = (char) 0;
 VAR_2++;
    } else {
 if (VAR_2 > 0) {
     VAR_2--;
            VAR_4[VAR_2] = (char) 0;
            VAR_3[VAR_2] = (char) '?';
            VAR_3[VAR_2+1] = (char) ' ';
            VAR_3[VAR_2+2] = (char) 0;
 } else {
     FUNC_0();
     VAR_1 = VAR_0;
 }
    }
}
