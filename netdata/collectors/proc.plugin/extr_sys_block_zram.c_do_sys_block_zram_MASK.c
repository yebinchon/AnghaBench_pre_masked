
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int procfile ;
typedef int DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned int,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(int VAR_4, usec_t VAR_5) {
    (void)VAR_5;
    static procfile *VAR_6 = ((void*)0);
    static DICTIONARY *VAR_7 = ((void*)0);
    static int VAR_8 = 0;
    static int VAR_9 = 0;
    int VAR_10 = -1;
    if (FUNC_8(!VAR_8))
    {
        VAR_8 = 1;
        VAR_6 = FUNC_5("/proc/devices", " \t:", VAR_1);
        if (VAR_6 == ((void*)0))
        {
            FUNC_2("Cannot read /proc/devices");
            return 1;
        }
        VAR_6 = FUNC_6(VAR_6);
        if (!VAR_6)
            return 1;
        VAR_10 = FUNC_7(VAR_6);
        if (VAR_10 == -1)
        {
            if (VAR_6 != ((void*)0))
                FUNC_4(VAR_6);
            return 1;
        }
        FUNC_4(VAR_6);

        VAR_7 = FUNC_0(VAR_0);
        VAR_9 = FUNC_3(VAR_7, (unsigned int)VAR_10, VAR_4);
        if (VAR_9 < 1)
            return 1;
        FUNC_1(VAR_7, VAR_2, VAR_7);
    }
    else
    {
        if (FUNC_8(VAR_9 < 1))
            return 1;
        FUNC_1(VAR_7, VAR_3, VAR_7);
    }
    return 0;
}
