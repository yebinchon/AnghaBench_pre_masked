
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outputs; int inputs; } ;
typedef TYPE_1__ AVFilter ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static bool FUNC_1(const AVFilter *VAR_0, int VAR_1)
{
    return FUNC_0(VAR_0->inputs, VAR_1) &&
           FUNC_0(VAR_0->outputs, VAR_1);
}
