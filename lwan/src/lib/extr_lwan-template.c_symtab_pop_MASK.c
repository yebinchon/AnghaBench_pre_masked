
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {struct symtab* next; int hash; } ;
struct parser {struct symtab* symtab; } ;


 int FUNC_0 (struct symtab*) ;
 int FUNC_1 (struct symtab*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct parser *VAR_0)
{
    struct symtab *VAR_1 = VAR_0->symtab;

    FUNC_0(VAR_1);

    FUNC_2(VAR_1->hash);
    VAR_0->symtab = VAR_1->next;
    FUNC_1(VAR_1);
}
