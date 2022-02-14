
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; unsigned char* data; int type; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_1 (unsigned char**,TYPE_1__ const*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (unsigned char) ;

__attribute__((used)) static int FUNC_6(ASN1_STRING *VAR_2, const ASN1_STRING *VAR_3)
{
    unsigned char *VAR_4, *VAR_5;
    int VAR_6, VAR_7;


    if (!(FUNC_2(VAR_3->type) & VAR_0)) {
        if (!FUNC_0(VAR_2, VAR_3))
            return 0;
        return 1;
    }

    VAR_2->type = VAR_1;
    VAR_2->length = FUNC_1(&VAR_2->data, VAR_3);
    if (VAR_2->length == -1)
        return 0;

    VAR_4 = VAR_2->data;
    VAR_5 = VAR_4;

    VAR_6 = VAR_2->length;
    while (VAR_6 > 0 && FUNC_4(*VAR_5)) {
        VAR_5++;
        VAR_6--;
    }

    VAR_4 = VAR_5 + VAR_6;


    while (VAR_6 > 0 && FUNC_4(VAR_4[-1])) {
        VAR_4--;
        VAR_6--;
    }

    VAR_4 = VAR_2->data;

    VAR_7 = 0;
    while (VAR_7 < VAR_6) {

        if (!FUNC_3(*VAR_5)) {
            *VAR_4++ = *VAR_5++;
            VAR_7++;
        }

        else if (FUNC_4(*VAR_5)) {

            *VAR_4++ = ' ';





            do {
                VAR_5++;
                VAR_7++;
            }
            while (FUNC_4(*VAR_5));
        } else {
            *VAR_4++ = FUNC_5(*VAR_5);
            VAR_5++;
            VAR_7++;
        }
    }

    VAR_2->length = VAR_4 - VAR_2->data;

    return 1;

}
