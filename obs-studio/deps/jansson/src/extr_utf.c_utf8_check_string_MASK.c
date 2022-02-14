
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const) ;
 int FUNC_1 (char const*,size_t,int *) ;

int FUNC_2(const char *VAR_0, size_t VAR_1)
{
    size_t VAR_2;

    for(VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        size_t VAR_3 = FUNC_0(VAR_0[VAR_2]);
        if(VAR_3 == 0)
            return 0;
        else if(VAR_3 > 1)
        {
            if(VAR_3 > VAR_1 - VAR_2)
                return 0;

            if(!FUNC_1(&VAR_0[VAR_2], VAR_3, ((void*)0)))
                return 0;

            VAR_2 += VAR_3 - 1;
        }
    }

    return 1;
}
