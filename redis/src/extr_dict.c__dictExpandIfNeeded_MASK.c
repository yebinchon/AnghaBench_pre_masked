
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ht; } ;
typedef TYPE_2__ dict ;
struct TYPE_6__ {int size; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(dict *VAR_4)
{

    if (FUNC_1(VAR_4)) return VAR_1;


    if (VAR_4->ht[0].size == 0) return FUNC_0(VAR_4, VAR_0);





    if (VAR_4->ht[0].used >= VAR_4->ht[0].size &&
        (VAR_2 ||
         VAR_4->ht[0].used/VAR_4->ht[0].size > VAR_3))
    {
        return FUNC_0(VAR_4, VAR_4->ht[0].used*2);
    }
    return VAR_1;
}
