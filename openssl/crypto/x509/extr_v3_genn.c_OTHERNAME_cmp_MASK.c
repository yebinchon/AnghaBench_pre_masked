
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int type_id; } ;
typedef TYPE_1__ OTHERNAME ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(OTHERNAME *VAR_0, OTHERNAME *VAR_1)
{
    int VAR_2 = -1;

    if (!VAR_0 || !VAR_1)
        return -1;

    if ((VAR_2 = FUNC_1(VAR_0->type_id, VAR_1->type_id)) != 0)
        return VAR_2;

    VAR_2 = FUNC_0(VAR_0->value, VAR_1->value);
    return VAR_2;
}
