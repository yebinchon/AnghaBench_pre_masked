
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_4__ {size_t size; } ;
struct TYPE_5__ {TYPE_1__ hashtable; } ;
typedef TYPE_2__ json_object_t ;


 int FUNC_0 (int const*) ;
 TYPE_2__* FUNC_1 (int const*) ;

size_t FUNC_2(const json_t *VAR_0)
{
    json_object_t *VAR_1;

    if(!FUNC_0(VAR_0))
        return 0;

    VAR_1 = FUNC_1(VAR_0);
    return VAR_1->hashtable.size;
}
