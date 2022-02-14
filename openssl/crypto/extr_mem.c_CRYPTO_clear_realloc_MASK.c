
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t,char const*,int) ;
 void* FUNC_1 (size_t,char const*,int) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (void*,void*,size_t) ;

void *FUNC_4(void *VAR_0, size_t VAR_1, size_t VAR_2,
                           const char *VAR_3, int VAR_4)
{
    void *VAR_5 = ((void*)0);

    if (VAR_0 == ((void*)0))
        return FUNC_1(VAR_2, VAR_3, VAR_4);

    if (VAR_2 == 0) {
        FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
        return ((void*)0);
    }


    if (VAR_2 < VAR_1) {
        FUNC_2((char*)VAR_0 + VAR_2, VAR_1 - VAR_2);
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
    if (VAR_5 != ((void*)0)) {
        FUNC_3(VAR_5, VAR_0, VAR_1);
        FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
    }
    return VAR_5;
}
