
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ctype_len; int * ctype; } ;
typedef TYPE_1__ CERT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(CERT *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0->ctype);
    VAR_0->ctype = ((void*)0);
    VAR_0->ctype_len = 0;
    if (VAR_1 == ((void*)0) || VAR_2 == 0)
        return 1;
    if (VAR_2 > 0xff)
        return 0;
    VAR_0->ctype = FUNC_1(VAR_1, VAR_2);
    if (VAR_0->ctype == ((void*)0))
        return 0;
    VAR_0->ctype_len = VAR_2;
    return 1;
}
