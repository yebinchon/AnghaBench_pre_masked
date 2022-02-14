
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int attrs; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(const type_t *VAR_1)
{
    if (!FUNC_2( VAR_1 )) return 0;
    if (FUNC_1( VAR_1->attrs )) return 0;
    if (FUNC_0( VAR_1->attrs, VAR_0 )) return 0;
    return 1;
}
