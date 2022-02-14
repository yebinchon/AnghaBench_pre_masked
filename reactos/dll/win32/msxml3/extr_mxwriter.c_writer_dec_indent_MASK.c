
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text; scalar_t__ indent; } ;
typedef TYPE_1__ mxwriter ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(mxwriter *VAR_1)
{
    if (VAR_1->indent) VAR_1->indent--;


    VAR_1->text = VAR_0;
}
