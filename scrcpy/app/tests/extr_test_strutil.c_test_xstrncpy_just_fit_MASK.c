
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(void) {
    char VAR_0[] = "xxxxxx";
    size_t VAR_1 = FUNC_2(VAR_0, "abcdef", sizeof(VAR_0));


    FUNC_0(VAR_1 == 6);


    FUNC_0(VAR_0[6] == '\0');


    FUNC_0(!FUNC_1("abcdef", VAR_0));
}
