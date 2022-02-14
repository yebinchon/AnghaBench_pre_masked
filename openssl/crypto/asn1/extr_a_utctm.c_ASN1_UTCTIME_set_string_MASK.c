
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* data; scalar_t__ flags; int length; int type; } ;
typedef TYPE_1__ ASN1_UTCTIME ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

int FUNC_3(ASN1_UTCTIME *VAR_1, const char *VAR_2)
{
    ASN1_UTCTIME VAR_3;

    VAR_3.type = VAR_0;
    VAR_3.length = FUNC_2(VAR_2);
    VAR_3.data = (unsigned char *)VAR_2;
    VAR_3.flags = 0;

    if (!FUNC_1(&VAR_3))
        return 0;

    if (VAR_1 != ((void*)0) && !FUNC_0(VAR_1, &VAR_3))
        return 0;

    return 1;
}
