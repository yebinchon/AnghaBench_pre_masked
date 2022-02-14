
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ml_line_count; } ;
struct TYPE_5__ {TYPE_1__ b_ml; } ;
typedef TYPE_2__ buf_T ;
typedef int VALUE ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static VALUE FUNC_2(VALUE VAR_0)
{
    buf_T *VAR_1 = FUNC_1(VAR_0);

    return FUNC_0(VAR_1->b_ml.ml_line_count);
}
