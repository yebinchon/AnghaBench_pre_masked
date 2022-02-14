
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CHAR ;


 int FUNC_0 (int,char*,int,int,int,int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_0;
    int VAR_1;
    int VAR_2;
    int VAR_3;

    for (VAR_0 = -1; VAR_0 <= 1024; VAR_0++) {
 VAR_1 = FUNC_1(VAR_0);
 VAR_3 = VAR_0 & 0xff;
 if (VAR_3 >= 'a' && VAR_3 <= 'z') {
     VAR_2 = (CHAR) (VAR_3 - 'a' + 'A');
 } else {
     VAR_2 = (CHAR) VAR_3;
 }
 FUNC_0(VAR_1 == VAR_2,
    "RtlUpperChar('%c'[=0x%x]) has result '%c'[=0x%x], expected '%c'[=0x%x]\n",
    VAR_0, VAR_0, VAR_1, VAR_1, VAR_2, VAR_2);
    }
}
