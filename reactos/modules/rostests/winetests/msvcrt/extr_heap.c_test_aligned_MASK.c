
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;


 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (int,int,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    HMODULE VAR_5 = FUNC_0("msvcrt.dll");

    if (VAR_5 == ((void*)0))
        return;

    VAR_0 = (void*)FUNC_1(VAR_5, "_aligned_free");
    VAR_1 = (void*)FUNC_1(VAR_5, "_aligned_malloc");
    VAR_2 = (void*)FUNC_1(VAR_5, "_aligned_offset_malloc");
    VAR_4 = (void*)FUNC_1(VAR_5, "_aligned_realloc");
    VAR_3 = (void*)FUNC_1(VAR_5, "_aligned_offset_realloc");

    if (!VAR_0 || !VAR_1 || !VAR_2 || !VAR_4 || !VAR_3)
    {
        FUNC_2("aligned memory tests skipped\n");
        return;
    }

    FUNC_3(256, 0);
    FUNC_3(256, 1);
    FUNC_3(256, 2);
    FUNC_3(256, 3);
    FUNC_3(256, 4);
    FUNC_3(256, 8);
    FUNC_3(256, 16);
    FUNC_3(256, 32);
    FUNC_3(256, 64);
    FUNC_3(256, 127);
    FUNC_3(256, 128);

    FUNC_4(256, 0, 0);
    FUNC_4(256, 1, 0);
    FUNC_4(256, 2, 0);
    FUNC_4(256, 3, 0);
    FUNC_4(256, 4, 0);
    FUNC_4(256, 8, 0);
    FUNC_4(256, 16, 0);
    FUNC_4(256, 32, 0);
    FUNC_4(256, 64, 0);
    FUNC_4(256, 127, 0);
    FUNC_4(256, 128, 0);

    FUNC_4(256, 0, 4);
    FUNC_4(256, 1, 4);
    FUNC_4(256, 2, 4);
    FUNC_4(256, 3, 4);
    FUNC_4(256, 4, 4);
    FUNC_4(256, 8, 4);
    FUNC_4(256, 16, 4);
    FUNC_4(256, 32, 4);
    FUNC_4(256, 64, 4);
    FUNC_4(256, 127, 4);
    FUNC_4(256, 128, 4);

    FUNC_4(256, 8, 7);
    FUNC_4(256, 8, 9);
    FUNC_4(256, 8, 16);
    FUNC_4(256, 8, 17);
    FUNC_4(256, 8, 254);
    FUNC_4(256, 8, 255);
    FUNC_4(256, 8, 256);
    FUNC_4(256, 8, 512);

    FUNC_6(256, 512, 0);
    FUNC_6(256, 128, 0);
    FUNC_6(256, 512, 4);
    FUNC_6(256, 128, 4);
    FUNC_6(256, 512, 8);
    FUNC_6(256, 128, 8);
    FUNC_6(256, 512, 16);
    FUNC_6(256, 128, 16);
    FUNC_6(256, 512, 32);
    FUNC_6(256, 128, 32);
    FUNC_6(256, 512, 64);
    FUNC_6(256, 128, 64);

    FUNC_5(256, 512, 0, 0);
    FUNC_5(256, 128, 0, 0);
    FUNC_5(256, 512, 4, 0);
    FUNC_5(256, 128, 4, 0);
    FUNC_5(256, 512, 8, 0);
    FUNC_5(256, 128, 8, 0);
    FUNC_5(256, 512, 16, 0);
    FUNC_5(256, 128, 16, 0);
    FUNC_5(256, 512, 32, 0);
    FUNC_5(256, 128, 32, 0);
    FUNC_5(256, 512, 64, 0);
    FUNC_5(256, 128, 64, 0);

    FUNC_5(256, 512, 0, 4);
    FUNC_5(256, 128, 0, 4);
    FUNC_5(256, 512, 4, 4);
    FUNC_5(256, 128, 4, 4);
    FUNC_5(256, 512, 8, 4);
    FUNC_5(256, 128, 8, 4);
    FUNC_5(256, 512, 16, 4);
    FUNC_5(256, 128, 16, 4);
    FUNC_5(256, 512, 32, 4);
    FUNC_5(256, 128, 32, 4);
    FUNC_5(256, 512, 64, 4);
    FUNC_5(256, 128, 64, 4);

    FUNC_5(256, 512, 0, 8);
    FUNC_5(256, 128, 0, 8);
    FUNC_5(256, 512, 4, 8);
    FUNC_5(256, 128, 4, 8);
    FUNC_5(256, 512, 8, 8);
    FUNC_5(256, 128, 8, 8);
    FUNC_5(256, 512, 16, 8);
    FUNC_5(256, 128, 16, 8);
    FUNC_5(256, 512, 32, 8);
    FUNC_5(256, 128, 32, 8);
    FUNC_5(256, 512, 64, 8);
    FUNC_5(256, 128, 64, 8);

    FUNC_5(256, 512, 0, 16);
    FUNC_5(256, 128, 0, 16);
    FUNC_5(256, 512, 4, 16);
    FUNC_5(256, 128, 4, 16);
    FUNC_5(256, 512, 8, 16);
    FUNC_5(256, 128, 8, 16);
    FUNC_5(256, 512, 16, 16);
    FUNC_5(256, 128, 16, 16);
    FUNC_5(256, 512, 32, 16);
    FUNC_5(256, 128, 32, 16);
    FUNC_5(256, 512, 64, 16);
    FUNC_5(256, 128, 64, 16);

    FUNC_5(256, 512, 0, 32);
    FUNC_5(256, 128, 0, 32);
    FUNC_5(256, 512, 4, 32);
    FUNC_5(256, 128, 4, 32);
    FUNC_5(256, 512, 8, 32);
    FUNC_5(256, 128, 8, 32);
    FUNC_5(256, 512, 16, 32);
    FUNC_5(256, 128, 16, 32);
    FUNC_5(256, 512, 32, 32);
    FUNC_5(256, 128, 32, 32);
    FUNC_5(256, 512, 64, 32);
    FUNC_5(256, 128, 64, 32);

    FUNC_5(256, 512, 0, 64);
    FUNC_5(256, 128, 0, 64);
    FUNC_5(256, 512, 4, 64);
    FUNC_5(256, 128, 4, 64);
    FUNC_5(256, 512, 8, 64);
    FUNC_5(256, 128, 8, 64);
    FUNC_5(256, 512, 16, 64);
    FUNC_5(256, 128, 16, 64);
    FUNC_5(256, 512, 32, 64);
    FUNC_5(256, 128, 32, 64);
    FUNC_5(256, 512, 64, 64);
    FUNC_5(256, 128, 64, 64);

    FUNC_5(256, 512, 0, 96);
    FUNC_5(256, 128, 0, 96);
    FUNC_5(256, 512, 4, 96);
    FUNC_5(256, 128, 4, 96);
    FUNC_5(256, 512, 8, 96);
    FUNC_5(256, 128, 8, 96);
    FUNC_5(256, 512, 16, 96);
    FUNC_5(256, 128, 16, 96);
    FUNC_5(256, 512, 32, 96);
    FUNC_5(256, 128, 32, 96);
    FUNC_5(256, 512, 64, 96);
    FUNC_5(256, 128, 64, 96);

    FUNC_5(256, 512, 0, 112);
    FUNC_5(256, 128, 0, 112);
    FUNC_5(256, 512, 4, 112);
    FUNC_5(256, 128, 4, 112);
    FUNC_5(256, 512, 8, 112);
    FUNC_5(256, 128, 8, 112);
    FUNC_5(256, 512, 16, 112);
    FUNC_5(256, 128, 16, 112);
    FUNC_5(256, 512, 32, 112);
    FUNC_5(256, 128, 32, 112);
    FUNC_5(256, 512, 64, 112);
    FUNC_5(256, 128, 64, 112);
}
