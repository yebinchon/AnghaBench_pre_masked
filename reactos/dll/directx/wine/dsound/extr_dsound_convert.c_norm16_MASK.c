
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHORT ;
typedef int INT ;


 int FUNC_0 (char*,int*,int *,unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(INT *VAR_0, SHORT *VAR_1, unsigned VAR_2)
{
    FUNC_0("%p - %p %d\n", VAR_0, VAR_1, VAR_2);
    VAR_2 /= 2;
    while (VAR_2--)
    {
        *VAR_1 = FUNC_1(*VAR_0);
        if (*VAR_0 <= -0x8000)
            *VAR_1 = FUNC_1(0x8000);
        else if (*VAR_0 > 0x7fff)
            *VAR_1 = FUNC_1(0x7fff);
        ++VAR_1;
        ++VAR_0;
    }
}
