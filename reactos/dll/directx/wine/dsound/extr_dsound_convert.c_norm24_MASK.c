
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int BYTE ;


 int FUNC_0 (char*,int*,int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(INT *VAR_0, BYTE *VAR_1, unsigned VAR_2)
{
    FUNC_0("%p - %p %d\n", VAR_0, VAR_1, VAR_2);
    VAR_2 /= 3;
    while (VAR_2--)
    {
        if (*VAR_0 <= -0x800000)
        {
            VAR_1[0] = 0;
            VAR_1[1] = 0;
            VAR_1[2] = 0x80;
        }
        else if (*VAR_0 > 0x7fffff)
        {
            VAR_1[0] = 0xff;
            VAR_1[1] = 0xff;
            VAR_1[2] = 0x7f;
        }
        else
        {
            VAR_1[0] = *VAR_0;
            VAR_1[1] = *VAR_0 >> 8;
            VAR_1[2] = *VAR_0 >> 16;
        }
        ++VAR_1;
        ++VAR_0;
    }
}
