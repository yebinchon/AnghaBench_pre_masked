
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int number; int * name; } ;
struct TYPE_9__ {int max_number; int lock; int namenum; } ;
typedef TYPE_1__ OSSL_NAMEMAP ;
typedef TYPE_2__ NAMENUM_ENTRY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char const*,size_t) ;
 TYPE_2__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,char const*,size_t) ;
 TYPE_1__* FUNC_8 (int *) ;

int FUNC_9(OSSL_NAMEMAP *VAR_0, int VAR_1,
                       const char *VAR_2, size_t VAR_3)
{
    NAMENUM_ENTRY *VAR_4 = ((void*)0);
    int VAR_5;


    if (VAR_0 == ((void*)0))
        VAR_0 = FUNC_8(((void*)0));


    if (VAR_2 == ((void*)0) || VAR_3 == 0 || VAR_0 == ((void*)0))
        return 0;

    if ((VAR_5 = FUNC_7(VAR_0, VAR_2, VAR_3)) != 0)
        return VAR_5;

    FUNC_1(VAR_0->lock);

    if ((VAR_4 = FUNC_3(sizeof(*VAR_4))) == ((void*)0)
        || (VAR_4->name = FUNC_2(VAR_2, VAR_3)) == ((void*)0))
        goto err;

    VAR_4->number = VAR_5 =
        VAR_1 != 0 ? VAR_1 : ++VAR_0->max_number;
    (void)FUNC_5(VAR_0->namenum, VAR_4);

    if (FUNC_4(VAR_0->namenum))
        goto err;

    FUNC_0(VAR_0->lock);

    return VAR_5;

 err:
    FUNC_6(VAR_4);

    FUNC_0(VAR_0->lock);
    return 0;
}
