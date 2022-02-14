
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*,char const* const*,char,int) ;

__attribute__((used)) static void FUNC_3(void) {
    const char *const VAR_0[] = { "abc", "de", "fghi", ((void*)0) };
    char VAR_1[] = "xxxxxxxxxxxxxx";
    size_t VAR_2 = FUNC_2(VAR_1, VAR_0, ' ', sizeof(VAR_1));


    FUNC_0(VAR_2 == 11);


    FUNC_0(VAR_1[11] == '\0');


    FUNC_0(VAR_1[12] == 'x');


    FUNC_0(!FUNC_1("abc de fghi", VAR_1));
}
