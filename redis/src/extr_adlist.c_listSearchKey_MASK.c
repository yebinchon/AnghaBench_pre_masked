
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_8__ {scalar_t__ (* match ) (void*,void*) ;} ;
typedef TYPE_2__ list ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (void*,void*) ;

listNode *FUNC_3(list *VAR_0, void *VAR_1)
{
    listIter VAR_2;
    listNode *VAR_3;

    FUNC_1(VAR_0, &VAR_2);
    while((VAR_3 = FUNC_0(&VAR_2)) != ((void*)0)) {
        if (VAR_0->match) {
            if (VAR_0->match(VAR_3->value, VAR_1)) {
                return VAR_3;
            }
        } else {
            if (VAR_1 == VAR_3->value) {
                return VAR_3;
            }
        }
    }
    return ((void*)0);
}
