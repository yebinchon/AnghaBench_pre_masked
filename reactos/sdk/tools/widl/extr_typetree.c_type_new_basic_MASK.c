
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; scalar_t__ sign; } ;
struct TYPE_7__ {TYPE_1__ basic; } ;
struct TYPE_8__ {TYPE_2__ details; } ;
typedef TYPE_3__ type_t ;
typedef enum type_basic_type { ____Placeholder_type_basic_type } type_basic_type ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

type_t *FUNC_1(enum type_basic_type VAR_1)
{
    type_t *VAR_2 = FUNC_0(VAR_0);
    VAR_2->details.basic.type = VAR_1;
    VAR_2->details.basic.sign = 0;
    return VAR_2;
}
