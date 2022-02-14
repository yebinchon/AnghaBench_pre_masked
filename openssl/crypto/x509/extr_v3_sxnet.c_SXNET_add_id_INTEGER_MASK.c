
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int ids; int version; } ;
struct TYPE_10__ {int * zone; int user; } ;
typedef TYPE_1__ SXNETID ;
typedef TYPE_2__ SXNET ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned char const*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (char const*) ;

int FUNC_10(SXNET **VAR_5, ASN1_INTEGER *VAR_6, const char *VAR_7,
                         int VAR_8)
{
    SXNET *VAR_9 = ((void*)0);
    SXNETID *VAR_10 = ((void*)0);

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        FUNC_7(VAR_1,
                  VAR_3);
        return 0;
    }
    if (VAR_8 == -1)
        VAR_8 = FUNC_9(VAR_7);
    if (VAR_8 > 64) {
        FUNC_7(VAR_1, VAR_4);
        return 0;
    }
    if (*VAR_5 == ((void*)0)) {
        if ((VAR_9 = FUNC_6()) == ((void*)0))
            goto err;
        if (!FUNC_0(VAR_9->version, 0))
            goto err;
        *VAR_5 = VAR_9;
    } else
        VAR_9 = *VAR_5;
    if (FUNC_5(VAR_9, VAR_6)) {
        FUNC_7(VAR_1, VAR_2);
        return 0;
    }

    if ((VAR_10 = FUNC_3()) == ((void*)0))
        goto err;
    if (VAR_8 == -1)
        VAR_8 = FUNC_9(VAR_7);

    if (!FUNC_1(VAR_10->user, (const unsigned char *)VAR_7, VAR_8))
        goto err;
    if (!FUNC_8(VAR_9->ids, VAR_10))
        goto err;
    VAR_10->zone = VAR_6;
    return 1;

 err:
    FUNC_7(VAR_1, VAR_0);
    FUNC_2(VAR_10);
    FUNC_4(VAR_9);
    *VAR_5 = ((void*)0);
    return 0;
}
