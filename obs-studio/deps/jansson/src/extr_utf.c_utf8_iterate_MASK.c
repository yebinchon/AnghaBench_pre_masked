
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char int32_t ;


 size_t FUNC_0 (char const) ;
 int FUNC_1 (char const*,size_t,unsigned char*) ;

const char *FUNC_2(const char *VAR_0, size_t VAR_1, int32_t *VAR_2)
{
    size_t VAR_3;
    int32_t VAR_4;

    if(!VAR_1)
        return VAR_0;

    VAR_3 = FUNC_0(VAR_0[0]);
    if(VAR_3 <= 0)
        return ((void*)0);

    if(VAR_3 == 1)
        VAR_4 = (unsigned char)VAR_0[0];
    else
    {
        if(VAR_3 > VAR_1 || !FUNC_1(VAR_0, VAR_3, &VAR_4))
            return ((void*)0);
    }

    if(VAR_2)
        *VAR_2 = VAR_4;

    return VAR_0 + VAR_3;
}
