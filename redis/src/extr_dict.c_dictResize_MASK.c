
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ht; } ;
typedef TYPE_2__ dict ;
struct TYPE_6__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;

int FUNC_2(dict *VAR_3)
{
    int VAR_4;

    if (!VAR_2 || FUNC_1(VAR_3)) return VAR_0;
    VAR_4 = VAR_3->ht[0].used;
    if (VAR_4 < VAR_1)
        VAR_4 = VAR_1;
    return FUNC_0(VAR_3, VAR_4);
}
