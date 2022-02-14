
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_6__ {struct TYPE_6__* b64_bn; int bn; } ;
typedef TYPE_1__ SRP_gN_cache ;


 int FUNC_0 (unsigned char*,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (char const*) ;
 int FUNC_4 (unsigned char*,int,char const*) ;

__attribute__((used)) static SRP_gN_cache *FUNC_5(const char *VAR_1)
{
    unsigned char VAR_2[VAR_0];
    int VAR_3;
    SRP_gN_cache *VAR_4 = FUNC_2(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0))
        return ((void*)0);

    VAR_3 = FUNC_4(VAR_2, sizeof(VAR_2), VAR_1);
    if (VAR_3 < 0)
        goto err;

    if ((VAR_4->b64_bn = FUNC_3(VAR_1)) == ((void*)0))
        goto err;

    if ((VAR_4->bn = FUNC_0(VAR_2, VAR_3, ((void*)0))))
        return VAR_4;

    FUNC_1(VAR_4->b64_bn);
 err:
    FUNC_1(VAR_4);
    return ((void*)0);
}
