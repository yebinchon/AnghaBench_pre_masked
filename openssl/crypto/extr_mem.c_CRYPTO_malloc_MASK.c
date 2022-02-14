
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t,int,char const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_3 (size_t) ;
 int VAR_2 ;
 void* FUNC_4 (size_t,char const*,int) ;

void *FUNC_5(size_t VAR_3, const char *VAR_4, int VAR_5)
{
    void *VAR_6 = ((void*)0);

    FUNC_2(VAR_2);
    if (&FUNC_4 != ((void*)0) && FUNC_4 != FUNC_5)
        return FUNC_4(VAR_3, VAR_4, VAR_5);

    if (VAR_3 == 0)
        return ((void*)0);

    FUNC_1();
    if (VAR_0) {





        VAR_0 = 0;
    }

    if (VAR_1) {
        FUNC_0(((void*)0), VAR_3, 0, VAR_4, VAR_5);
        VAR_6 = FUNC_3(VAR_3);
        FUNC_0(VAR_6, VAR_3, 1, VAR_4, VAR_5);
    } else {
        VAR_6 = FUNC_3(VAR_3);
    }





    return VAR_6;
}
