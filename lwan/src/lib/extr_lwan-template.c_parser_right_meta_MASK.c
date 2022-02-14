
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int dummy; } ;
struct lexeme {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (struct lexeme*) ;

__attribute__((used)) static void *FUNC_1(struct parser *VAR_2 __attribute__((unused)),
                               struct lexeme *VAR_3)
{
    if (VAR_3->type != VAR_0)
        return FUNC_0(VAR_3);
    return VAR_1;
}
