
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int length; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_STRING ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int const*) ;

__attribute__((used)) static int FUNC_3(const ASN1_OBJECT *VAR_5, const ASN1_STRING *VAR_6)
{
    char VAR_7[25], *VAR_8;
    const char *VAR_9;
    int VAR_10;

    VAR_10 = FUNC_2(VAR_4, VAR_5);
    VAR_8 = VAR_7;
    for (VAR_10 = 22 - VAR_10; VAR_10 > 0; VAR_10--)
        *(VAR_8++) = ' ';
    *(VAR_8++) = ':';
    *(VAR_8++) = '\0';
    FUNC_1(VAR_4, VAR_7);

    if (VAR_6->type == VAR_1)
        FUNC_0(VAR_4, "PRINTABLE:'");
    else if (VAR_6->type == VAR_2)
        FUNC_0(VAR_4, "T61STRING:'");
    else if (VAR_6->type == VAR_0)
        FUNC_0(VAR_4, "IA5STRING:'");
    else if (VAR_6->type == VAR_3)
        FUNC_0(VAR_4, "UNIVERSALSTRING:'");
    else
        FUNC_0(VAR_4, "ASN.1 %2d:'", VAR_6->type);

    VAR_9 = (const char *)VAR_6->data;
    for (VAR_10 = VAR_6->length; VAR_10 > 0; VAR_10--) {
        if ((*VAR_9 >= ' ') && (*VAR_9 <= '~'))
            FUNC_0(VAR_4, "%c", *VAR_9);
        else if (*VAR_9 & 0x80)
            FUNC_0(VAR_4, "\\0x%02X", *VAR_9);
        else if ((unsigned char)*VAR_9 == 0xf7)
            FUNC_0(VAR_4, "^?");
        else
            FUNC_0(VAR_4, "^%c", *VAR_9 + '@');
        VAR_9++;
    }
    FUNC_0(VAR_4, "'\n");
    return 1;
}
