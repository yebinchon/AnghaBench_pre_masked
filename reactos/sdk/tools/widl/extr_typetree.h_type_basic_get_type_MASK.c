
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
struct TYPE_9__ {TYPE_1__ basic; } ;
struct TYPE_10__ {TYPE_2__ details; } ;
typedef TYPE_3__ type_t ;
typedef enum type_basic_type { ____Placeholder_type_basic_type } type_basic_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_3__ const*) ;
 scalar_t__ FUNC_2 (TYPE_3__ const*) ;

__attribute__((used)) static inline enum type_basic_type FUNC_3(const type_t *VAR_1)
{
    VAR_1 = FUNC_1(VAR_1);
    FUNC_0(FUNC_2(VAR_1) == VAR_0);
    return VAR_1->details.basic.type;
}
