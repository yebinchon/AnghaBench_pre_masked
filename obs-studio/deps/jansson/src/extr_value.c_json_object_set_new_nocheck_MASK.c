
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int hashtable; } ;
typedef TYPE_1__ json_object_t ;


 scalar_t__ FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;

int FUNC_4(json_t *VAR_0, const char *VAR_1, json_t *VAR_2)
{
    json_object_t *VAR_3;

    if(!VAR_2)
        return -1;

    if(!VAR_1 || !FUNC_2(VAR_0) || VAR_0 == VAR_2)
    {
        FUNC_1(VAR_2);
        return -1;
    }
    VAR_3 = FUNC_3(VAR_0);

    if(FUNC_0(&VAR_3->hashtable, VAR_1, VAR_2))
    {
        FUNC_1(VAR_2);
        return -1;
    }

    return 0;
}
