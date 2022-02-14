
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,char*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(signed char *VAR_0, INT *VAR_1, unsigned VAR_2)
{
    FUNC_0("%p - %p %d\n", VAR_0, VAR_1, VAR_2);
    while (VAR_2--)

        *(VAR_1++) += (signed char)((BYTE)*(VAR_0++) - (BYTE)0x80);
}
