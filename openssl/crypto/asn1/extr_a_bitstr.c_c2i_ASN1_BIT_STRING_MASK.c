
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int length; unsigned char* data; int type; } ;
typedef TYPE_1__ ASN1_BIT_STRING ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (unsigned char*,unsigned char const*,int) ;

ASN1_BIT_STRING *FUNC_6(ASN1_BIT_STRING **VAR_8,
                                     const unsigned char **VAR_9, long VAR_10)
{
    ASN1_BIT_STRING *VAR_11 = ((void*)0);
    const unsigned char *VAR_12;
    unsigned char *VAR_13;
    int VAR_14;

    if (VAR_10 < 1) {
        VAR_14 = VAR_3;
        goto err;
    }

    if (VAR_10 > VAR_6) {
        VAR_14 = VAR_2;
        goto err;
    }

    if ((VAR_8 == ((void*)0)) || ((*VAR_8) == ((void*)0))) {
        if ((VAR_11 = FUNC_1()) == ((void*)0))
            return ((void*)0);
    } else
        VAR_11 = (*VAR_8);

    VAR_12 = *VAR_9;
    VAR_14 = *(VAR_12++);
    if (VAR_14 > 7) {
        VAR_14 = VAR_1;
        goto err;
    }




    VAR_11->flags &= ~(VAR_4 | 0x07);
    VAR_11->flags |= (VAR_4 | VAR_14);

    if (VAR_10-- > 1) {
        VAR_13 = FUNC_4((int)VAR_10);
        if (VAR_13 == ((void*)0)) {
            VAR_14 = VAR_5;
            goto err;
        }
        FUNC_5(VAR_13, VAR_12, (int)VAR_10);
        VAR_13[VAR_10 - 1] &= (0xff << VAR_14);
        VAR_12 += VAR_10;
    } else
        VAR_13 = ((void*)0);

    VAR_11->length = (int)VAR_10;
    FUNC_3(VAR_11->data);
    VAR_11->data = VAR_13;
    VAR_11->type = VAR_7;
    if (VAR_8 != ((void*)0))
        (*VAR_8) = VAR_11;
    *VAR_9 = VAR_12;
    return VAR_11;
 err:
    FUNC_2(VAR_0, VAR_14);
    if ((VAR_8 == ((void*)0)) || (*VAR_8 != VAR_11))
        FUNC_0(VAR_11);
    return ((void*)0);
}
