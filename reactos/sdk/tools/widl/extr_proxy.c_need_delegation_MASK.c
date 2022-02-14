
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int attrs; scalar_t__ ignore; } ;
typedef TYPE_1__ type_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_2(const type_t *VAR_0)
{
    const type_t *VAR_1 = FUNC_1( VAR_0 );
    return VAR_1 && FUNC_1(VAR_1) && (VAR_1->ignore || FUNC_0( VAR_1->attrs ));
}
