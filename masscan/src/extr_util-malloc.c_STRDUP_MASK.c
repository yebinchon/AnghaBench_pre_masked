
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 char* FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_1)
{



    char *VAR_2 = FUNC_3(VAR_1);


    if (VAR_2 == ((void*)0) && VAR_1 != ((void*)0)) {
        FUNC_2(VAR_0, "[-] out of memory, aborting\n");
        FUNC_1();
    }

    return VAR_2;
}
