
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abuf {char* b; int len; } ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct abuf *VAR_0, const char *VAR_1, int VAR_2) {
    char *VAR_3 = FUNC_1(VAR_0->b,VAR_0->len+VAR_2);

    if (VAR_3 == ((void*)0)) return;
    FUNC_0(VAR_3+VAR_0->len,VAR_1,VAR_2);
    VAR_0->b = VAR_3;
    VAR_0->len += VAR_2;
}
