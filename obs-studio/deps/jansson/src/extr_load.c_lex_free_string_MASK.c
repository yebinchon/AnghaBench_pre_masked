
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; int * val; } ;
struct TYPE_6__ {TYPE_1__ string; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ lex_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(lex_t *VAR_0)
{
    FUNC_0(VAR_0->value.string.val);
    VAR_0->value.string.val = ((void*)0);
    VAR_0->value.string.len = 0;
}
