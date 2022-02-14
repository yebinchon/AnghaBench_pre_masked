
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const*,int) ;
 void* FUNC_1 (size_t,char const*,int) ;
 int FUNC_2 (void*,void*,size_t,int,char const*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_5 (void*,size_t) ;
 int VAR_1 ;
 void* FUNC_6 (void*,size_t,char const*,int) ;

void *FUNC_7(void *VAR_2, size_t VAR_3, const char *VAR_4, int VAR_5)
{
    FUNC_4(VAR_1);
    if (&FUNC_6 != ((void*)0) && FUNC_6 != &FUNC_7)
        return FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);

    FUNC_3();
    if (VAR_2 == ((void*)0))
        return FUNC_1(VAR_3, VAR_4, VAR_5);

    if (VAR_3 == 0) {
        FUNC_0(VAR_2, VAR_4, VAR_5);
        return ((void*)0);
    }


    if (VAR_0) {
        void *VAR_6;
        FUNC_2(VAR_2, ((void*)0), VAR_3, 0, VAR_4, VAR_5);
        VAR_6 = FUNC_5(VAR_2, VAR_3);
        FUNC_2(VAR_2, VAR_6, VAR_3, 1, VAR_4, VAR_5);
        return VAR_6;
    }



    return FUNC_5(VAR_2, VAR_3);

}
