
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsISupports ;
typedef int nsCycleCollectionTraversalCallback ;
struct TYPE_6__ {int var; } ;
typedef TYPE_2__ dynamic_prop_t ;
struct TYPE_7__ {TYPE_1__* dynamic_data; } ;
struct TYPE_5__ {int prop_cnt; TYPE_2__* props; } ;
typedef TYPE_3__ DispatchEx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *) ;

void FUNC_3(DispatchEx *VAR_1, nsCycleCollectionTraversalCallback *VAR_2)
{
    dynamic_prop_t *VAR_3;

    if(!VAR_1->dynamic_data)
        return;

    for(VAR_3 = VAR_1->dynamic_data->props; VAR_3 < VAR_1->dynamic_data->props + VAR_1->dynamic_data->prop_cnt; VAR_3++) {
        if(FUNC_1(&VAR_3->var) == VAR_0)
            FUNC_2((nsISupports*)FUNC_0(&VAR_3->var), "dispex_data", VAR_2);
    }


}
