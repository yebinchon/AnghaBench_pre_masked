
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;

int FUNC_2(void) {
    char *VAR_0 = FUNC_0("TERM");
    return VAR_0 != ((void*)0) && FUNC_1(VAR_0,"xterm") != ((void*)0);
}
