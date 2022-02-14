
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,size_t,size_t*,char const*) ;
 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (char const*) ;

unsigned char *FUNC_5(const char *VAR_2, long *VAR_3)
{
    unsigned char *VAR_4;
    size_t VAR_5, VAR_6;

    VAR_5 = FUNC_4(VAR_2) >> 1;
    if ((VAR_4 = FUNC_3(VAR_5)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    if (VAR_3 != ((void*)0))
        *VAR_3 = 0;
    VAR_6 = 0;
    if (FUNC_2(VAR_4, VAR_5, &VAR_6, VAR_2)) {
        if (VAR_3 != ((void*)0))
            *VAR_3 = (long)VAR_6;
        return VAR_4;
    }
    FUNC_1(VAR_4);
    return ((void*)0);
}
