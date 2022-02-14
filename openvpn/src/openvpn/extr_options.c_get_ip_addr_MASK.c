
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,char const*,int ,int*,int *) ;

__attribute__((used)) static in_addr_t
FUNC_1(const char *VAR_3, int VAR_4, bool *VAR_5)
{
    unsigned int VAR_6 = VAR_1;
    bool VAR_7 = 0;
    in_addr_t VAR_8;

    if (VAR_4 & VAR_2)
    {
        VAR_6 |= VAR_0;
    }

    VAR_8 = FUNC_0(VAR_6, VAR_3, 0, &VAR_7, ((void*)0));
    if (!VAR_7 && VAR_5)
    {
        *VAR_5 = 1;
    }
    return VAR_8;
}
