
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int g; int p; } ;
typedef TYPE_1__ MDH ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static MDH *
FUNC_5(int VAR_1)
{
    size_t VAR_2;
    MDH *VAR_3 = FUNC_1();

    if (!VAR_3)
        goto failed;

    FUNC_3(VAR_3->g);

    if (!VAR_3->g)
        goto failed;

    FUNC_2(VAR_3->p, VAR_0, VAR_2);
    if (!VAR_2)
    {
        goto failed;
    }

    FUNC_4(VAR_3->g, 2);

    VAR_3->length = VAR_1;
    return VAR_3;

failed:
    if (VAR_3)
        FUNC_0(VAR_3);

    return 0;
}
