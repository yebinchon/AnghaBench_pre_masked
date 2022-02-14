
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int number; int * name; } ;
struct TYPE_7__ {int lock; int namenum; } ;
typedef TYPE_1__ OSSL_NAMEMAP ;
typedef TYPE_2__ NAMENUM_ENTRY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,size_t) ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int *) ;

int FUNC_6(const OSSL_NAMEMAP *VAR_0,
                            const char *VAR_1, size_t VAR_2)
{
    NAMENUM_ENTRY *VAR_3, VAR_4;
    int VAR_5 = 0;


    if (VAR_0 == ((void*)0))
        VAR_0 = FUNC_5(((void*)0));


    if (VAR_0 == ((void*)0))
        return 0;

    if ((VAR_4.name = FUNC_3(VAR_1, VAR_2)) == ((void*)0))
        return 0;
    VAR_4.number = 0;
    FUNC_0(VAR_0->lock);
    VAR_3 =
        FUNC_4(VAR_0->namenum, &VAR_4);
    if (VAR_3 != ((void*)0))
        VAR_5 = VAR_3->number;
    FUNC_1(VAR_0->lock);
    FUNC_2(VAR_4.name);

    return VAR_5;
}
