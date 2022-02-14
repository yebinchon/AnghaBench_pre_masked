
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,int,int,int,char const*,int) ;
 int FUNC_1 (int,char*,int,int) ;
 int VAR_0 ;

int FUNC_2(const char** VAR_1, unsigned VAR_2,
                   int VAR_3, int VAR_4,
                   const char* VAR_5, int VAR_6)
{
    unsigned VAR_7;
    if (VAR_3 > VAR_0) VAR_3 = VAR_0;
    if (VAR_4 > VAR_0) VAR_4 = VAR_0;
    if (VAR_4 < VAR_3) VAR_4 = VAR_3;
    if (VAR_4 > VAR_3) FUNC_1(2, "Benchmarking levels from %d to %d\n", VAR_3, VAR_4);

    for (VAR_7=0; VAR_7<VAR_2; VAR_7++)
        FUNC_0(VAR_1+VAR_7, 1, VAR_3, VAR_4, VAR_5, VAR_6);

    return 0;
}
