
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;


 int FUNC_0 (char*,int*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(INT *VAR_0, signed char *VAR_1, unsigned VAR_2)
{
    FUNC_0("%p - %p %d\n", VAR_0, VAR_1, VAR_2);
    while (VAR_2--)
    {
        *VAR_1 = (*VAR_0) + 0x80;
        if (*VAR_0 < -0x80)
            *VAR_1 = 0;
        else if (*VAR_0 > 0x7f)
            *VAR_1 = 0xff;
        ++VAR_1;
        ++VAR_0;
    }
}
