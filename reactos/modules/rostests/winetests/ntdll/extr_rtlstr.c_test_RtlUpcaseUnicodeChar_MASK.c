
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (int,char*,char,char,char,char,char,char) ;
 char FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_0;
    WCHAR VAR_1;
    WCHAR VAR_2;
    WCHAR VAR_3;

    for (VAR_0 = 0; VAR_0 <= 255; VAR_0++) {
 VAR_1 = (WCHAR) VAR_0;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_1 >= 'a' && VAR_1 <= 'z') {
     VAR_3 = VAR_1 - 'a' + 'A';
 } else if (VAR_1 >= 0xe0 && VAR_1 <= 0xfe && VAR_1 != 0xf7) {
     VAR_3 = VAR_1 - 0x20;
 } else if (VAR_1 == 0xff) {
     VAR_3 = 0x178;
 } else {
     VAR_3 = VAR_1;
 }
 FUNC_0(VAR_2 == VAR_3,
    "RtlUpcaseUnicodeChar('%c'[=0x%x]) has result '%c'[=0x%x], expected: '%c'[=0x%x]\n",
    VAR_1, VAR_1, VAR_2, VAR_2, VAR_3, VAR_3);
    }
}
