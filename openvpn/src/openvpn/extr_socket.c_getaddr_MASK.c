
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,char const*,int *,int *,int,int volatile*,int ) ;

in_addr_t
FUNC_1(unsigned int VAR_2,
        const char *VAR_3,
        int VAR_4,
        bool *VAR_5,
        volatile int *VAR_6)
{
    in_addr_t VAR_7;
    int VAR_8;

    VAR_8 = FUNC_0(VAR_0, VAR_2, VAR_3, &VAR_7, ((void*)0),
                              VAR_4, VAR_6,
                              VAR_1);
    if (VAR_8==0)
    {
        if (VAR_5)
        {
            *VAR_5 = 1;
        }
        return VAR_7;
    }
    else
    {
        if (VAR_5)
        {
            *VAR_5 = 0;
        }
        return 0;
    }
}
