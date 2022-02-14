
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

size_t FUNC_2(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
        size_t VAR_3 = FUNC_1(VAR_1);
        size_t VAR_4 = VAR_3;
        if (VAR_2 > 0) {
                if (VAR_3 >= VAR_2)
                        VAR_3 = VAR_2-1;
                FUNC_0(VAR_0, VAR_1, VAR_3);
                VAR_0[VAR_3] = 0;
        }
        return VAR_4;
}
