
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; scalar_t__ len; } ;
struct lexeme {size_t type; TYPE_1__ value; } ;


 size_t VAR_0 ;
 void* FUNC_0 (struct lexeme*,char*,int ,int,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void *FUNC_1(struct lexeme *VAR_2)
{
    if (VAR_2->type == VAR_0)
        return ((void*)0);

    return FUNC_0(VAR_2, "unexpected lexeme: %s [%.*s]",
                        VAR_1[VAR_2->type], (int)VAR_2->value.len,
                        VAR_2->value.value);
}
