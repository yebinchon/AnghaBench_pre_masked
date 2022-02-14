
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,char*,char*) ;
 scalar_t__ VAR_0 ;
 void** VAR_1 ;

void FUNC_1(int VAR_2, const uint8_t *VAR_3, unsigned long VAR_4)
{
    unsigned long VAR_5;
    char VAR_6[50], *VAR_7;

    if ( VAR_2 > (int)VAR_0 )
        return;

    VAR_7 = VAR_6;

    for(VAR_5=0; VAR_5<VAR_4; VAR_5++)
    {
        *VAR_7++ = VAR_1[0x0f & (VAR_3[VAR_5] >> 4)];
        *VAR_7++ = VAR_1[0x0f & VAR_3[VAR_5]];
        if ((VAR_5 & 0x0f) == 0x0f)
        {
            *VAR_7 = '\0';
            VAR_7 = VAR_6;
            FUNC_0(VAR_2, "%s", VAR_6);
        }
        else
        {
            *VAR_7++ = ' ';
        }
    }
    if (VAR_5 & 0x0f)
    {
        *VAR_7 = '\0';
        FUNC_0(VAR_2, "%s", VAR_6);
    }
}
