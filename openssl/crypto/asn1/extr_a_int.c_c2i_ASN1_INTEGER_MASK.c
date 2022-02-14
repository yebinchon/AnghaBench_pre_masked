
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; int * data; } ;
typedef TYPE_1__ ASN1_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,size_t) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (int *,int*,unsigned char const*,long) ;

ASN1_INTEGER *FUNC_5(ASN1_INTEGER **VAR_4, const unsigned char **VAR_5,
                               long VAR_6)
{
    ASN1_INTEGER *VAR_7 = ((void*)0);
    size_t VAR_8;
    int VAR_9;

    VAR_8 = FUNC_4(((void*)0), ((void*)0), *VAR_5, VAR_6);

    if (VAR_8 == 0)
        return ((void*)0);

    if ((VAR_4 == ((void*)0)) || ((*VAR_4) == ((void*)0))) {
        VAR_7 = FUNC_1();
        if (VAR_7 == ((void*)0))
            return ((void*)0);
        VAR_7->type = VAR_2;
    } else
        VAR_7 = *VAR_4;

    if (FUNC_2(VAR_7, ((void*)0), VAR_8) == 0)
        goto err;

    FUNC_4(VAR_7->data, &VAR_9, *VAR_5, VAR_6);

    if (VAR_9)
        VAR_7->type |= VAR_3;

    *VAR_5 += VAR_6;
    if (VAR_4 != ((void*)0))
        (*VAR_4) = VAR_7;
    return VAR_7;
 err:
    FUNC_3(VAR_0, VAR_1);
    if ((VAR_4 == ((void*)0)) || (*VAR_4 != VAR_7))
        FUNC_0(VAR_7);
    return ((void*)0);
}
