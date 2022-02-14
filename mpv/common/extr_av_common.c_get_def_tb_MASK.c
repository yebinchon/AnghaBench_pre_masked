
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num; scalar_t__ den; } ;
typedef TYPE_1__ AVRational ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static AVRational FUNC_0(AVRational *VAR_1)
{
    return VAR_1 && VAR_1->num > 0 && VAR_1->den > 0 ? *VAR_1 : VAR_0;
}
