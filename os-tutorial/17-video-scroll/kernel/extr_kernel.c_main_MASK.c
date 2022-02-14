
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;

int FUNC_4() {
    FUNC_0();


    int VAR_0 = 0;
    for (VAR_0 = 0; VAR_0 < 24; VAR_0++) {
        char VAR_1[255];
        FUNC_1(VAR_0, VAR_1);
        FUNC_3(VAR_1, 0, VAR_0);
    }

    FUNC_3("This text forces the kernel to scroll. Row 0 will disappear. ", 60, 24);
    FUNC_2("And with this text, the kernel will scroll again, and row 1 will disappear too!");
}
