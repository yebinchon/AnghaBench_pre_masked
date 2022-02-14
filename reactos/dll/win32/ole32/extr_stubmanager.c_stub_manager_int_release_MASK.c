
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stub_manager {int entry; scalar_t__ refs; TYPE_1__* apt; } ;
typedef scalar_t__ ULONG ;
struct TYPE_2__ {int cs; } ;
typedef TYPE_1__ APARTMENT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stub_manager*) ;

ULONG FUNC_5(struct stub_manager *VAR_0)
{
    ULONG VAR_1;
    APARTMENT *VAR_2 = VAR_0->apt;

    FUNC_0(&VAR_2->cs);
    VAR_1 = --VAR_0->refs;

    FUNC_2("after %d\n", VAR_1);


    if (!VAR_1)
        FUNC_3(&VAR_0->entry);

    FUNC_1(&VAR_2->cs);


    if (!VAR_1)
        FUNC_4(VAR_0);

    return VAR_1;
}
