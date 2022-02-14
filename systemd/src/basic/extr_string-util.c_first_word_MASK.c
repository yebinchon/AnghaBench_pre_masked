
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (int ,char const) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int ) ;

char* FUNC_5(const char *VAR_1, const char *VAR_2) {
        size_t VAR_3, VAR_4;
        const char *VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);





        VAR_3 = FUNC_3(VAR_1);
        VAR_4 = FUNC_3(VAR_2);

        if (VAR_3 < VAR_4)
                return ((void*)0);

        if (VAR_4 == 0)
                return (char*) VAR_1;

        if (FUNC_1(VAR_1, VAR_2, VAR_4) != 0)
                return ((void*)0);

        VAR_5 = VAR_1 + VAR_4;
        if (*VAR_5 == 0)
                return (char*) VAR_5;

        if (!FUNC_2(VAR_0, *VAR_5))
                return ((void*)0);

        VAR_5 += FUNC_4(VAR_5, VAR_0);
        return (char*) VAR_5;
}
