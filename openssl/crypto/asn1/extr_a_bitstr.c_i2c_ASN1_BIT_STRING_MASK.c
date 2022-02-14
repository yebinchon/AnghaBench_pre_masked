
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int flags; int* data; } ;
typedef TYPE_1__ ASN1_BIT_STRING ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

int FUNC_1(ASN1_BIT_STRING *VAR_1, unsigned char **VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    unsigned char *VAR_7, *VAR_8;

    if (VAR_1 == ((void*)0))
        return 0;

    VAR_6 = VAR_1->length;

    if (VAR_6 > 0) {
        if (VAR_1->flags & VAR_0) {
            VAR_5 = (int)VAR_1->flags & 0x07;
        } else {
            for (; VAR_6 > 0; VAR_6--) {
                if (VAR_1->data[VAR_6 - 1])
                    break;
            }
            VAR_4 = VAR_1->data[VAR_6 - 1];
            if (VAR_4 & 0x01)
                VAR_5 = 0;
            else if (VAR_4 & 0x02)
                VAR_5 = 1;
            else if (VAR_4 & 0x04)
                VAR_5 = 2;
            else if (VAR_4 & 0x08)
                VAR_5 = 3;
            else if (VAR_4 & 0x10)
                VAR_5 = 4;
            else if (VAR_4 & 0x20)
                VAR_5 = 5;
            else if (VAR_4 & 0x40)
                VAR_5 = 6;
            else if (VAR_4 & 0x80)
                VAR_5 = 7;
            else
                VAR_5 = 0;
        }
    } else
        VAR_5 = 0;

    VAR_3 = 1 + VAR_6;
    if (VAR_2 == ((void*)0))
        return VAR_3;

    VAR_7 = *VAR_2;

    *(VAR_7++) = (unsigned char)VAR_5;
    VAR_8 = VAR_1->data;
    if (VAR_6 > 0) {
        FUNC_0(VAR_7, VAR_8, VAR_6);
        VAR_7 += VAR_6;
        VAR_7[-1] &= (0xff << VAR_5);
    }
    *VAR_2 = VAR_7;
    return VAR_3;
}
