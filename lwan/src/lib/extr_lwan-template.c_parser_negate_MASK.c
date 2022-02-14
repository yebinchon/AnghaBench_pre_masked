
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int flags; } ;
struct lexeme {int type; } ;


 int VAR_0 ;


 void* FUNC_0 (struct parser*,struct lexeme*) ;
 void* VAR_1 ;
 void* FUNC_1 (struct lexeme*) ;

__attribute__((used)) static void *FUNC_2(struct parser *VAR_2, struct lexeme *VAR_3)
{
    switch (VAR_3->type) {
    default:
        return FUNC_1(VAR_3);

    case 129:
        VAR_2->flags ^= VAR_0;
        return VAR_1;

    case 128:
        VAR_2->flags ^= VAR_0;
        return FUNC_0(VAR_2, VAR_3);
    }
}
