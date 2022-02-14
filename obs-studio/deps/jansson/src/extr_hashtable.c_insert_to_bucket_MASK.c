
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int list_t ;
struct TYPE_7__ {int list; } ;
typedef TYPE_1__ hashtable_t ;
struct TYPE_8__ {int * first; int * last; } ;
typedef TYPE_2__ bucket_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(hashtable_t *VAR_0, bucket_t *VAR_1,
                             list_t *VAR_2)
{
    if(FUNC_0(VAR_0, VAR_1))
    {
        FUNC_1(&VAR_0->list, VAR_2);
        VAR_1->first = VAR_1->last = VAR_2;
    }
    else
    {
        FUNC_1(VAR_1->first, VAR_2);
        VAR_1->first = VAR_2;
    }
}
