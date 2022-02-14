
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* data; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ RC4_KEY ;
typedef unsigned int RC4_INT ;


 int FUNC_0 (unsigned int*,unsigned int) ;

void FUNC_1(RC4_KEY *VAR_0, int VAR_1, const unsigned char *VAR_2)
{
    register RC4_INT VAR_3;
    register int VAR_4, VAR_5;
    register RC4_INT *VAR_6;
    unsigned int VAR_7;

    VAR_6 = &(VAR_0->data[0]);
    VAR_0->x = 0;
    VAR_0->y = 0;
    VAR_4 = VAR_5 = 0;
    for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
        VAR_6[VAR_7] = VAR_7;
    for (VAR_7 = 0; VAR_7 < 256; VAR_7 += 4) {
        { VAR_3=VAR_6[(VAR_7 + 0)]; VAR_5 = (VAR_2[VAR_4] + VAR_3 + VAR_5) & 0xff; if (++VAR_4 == VAR_1) VAR_4=0; VAR_6[(VAR_7 + 0)]=VAR_6[VAR_5]; VAR_6[VAR_5]=VAR_3; };
        { VAR_3=VAR_6[(VAR_7 + 1)]; VAR_5 = (VAR_2[VAR_4] + VAR_3 + VAR_5) & 0xff; if (++VAR_4 == VAR_1) VAR_4=0; VAR_6[(VAR_7 + 1)]=VAR_6[VAR_5]; VAR_6[VAR_5]=VAR_3; };
        { VAR_3=VAR_6[(VAR_7 + 2)]; VAR_5 = (VAR_2[VAR_4] + VAR_3 + VAR_5) & 0xff; if (++VAR_4 == VAR_1) VAR_4=0; VAR_6[(VAR_7 + 2)]=VAR_6[VAR_5]; VAR_6[VAR_5]=VAR_3; };
        { VAR_3=VAR_6[(VAR_7 + 3)]; VAR_5 = (VAR_2[VAR_4] + VAR_3 + VAR_5) & 0xff; if (++VAR_4 == VAR_1) VAR_4=0; VAR_6[(VAR_7 + 3)]=VAR_6[VAR_5]; VAR_6[VAR_5]=VAR_3; };
    }
}
