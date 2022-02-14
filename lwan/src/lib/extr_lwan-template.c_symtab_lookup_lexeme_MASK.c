
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int dummy; } ;
struct lwan_var_descriptor {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int value; } ;
struct lexeme {TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct lwan_var_descriptor* FUNC_2 (struct parser*,int ) ;

__attribute__((used)) static __attribute__((noinline)) struct lwan_var_descriptor *
FUNC_3(struct parser *VAR_1, struct lexeme *VAR_2)
{
    if (VAR_2->value.len > VAR_0) {
        FUNC_0("Lexeme exceeds %d characters", VAR_0);
        return ((void*)0);
    }

    return FUNC_2(VAR_1,
                         FUNC_1(VAR_2->value.value, VAR_2->value.len));
}
