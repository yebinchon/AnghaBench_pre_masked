
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_6__ {int * directoryName; } ;
struct TYPE_7__ {TYPE_1__ d; int type; } ;
typedef TYPE_2__ GENERAL_NAME ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 () ;
 int FUNC_3 (int **,int const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(GENERAL_NAME **VAR_1, const X509_NAME *VAR_2)
{
    GENERAL_NAME *VAR_3;

    if (!FUNC_4(VAR_1 != ((void*)0)))
        return 0;
    if ((VAR_3 = FUNC_1()) == ((void*)0))
        goto err;
    VAR_3->type = VAR_0;

    if (VAR_2 == ((void*)0)) {
        if ((VAR_3->d.directoryName = FUNC_2()) == ((void*)0))
            goto err;
    } else if (!FUNC_3(&VAR_3->d.directoryName, VAR_2)) {
        goto err;
    }

    FUNC_0(*VAR_1);
    *VAR_1 = VAR_3;

    return 1;

 err:
    FUNC_0(VAR_3);
    return 0;
}
