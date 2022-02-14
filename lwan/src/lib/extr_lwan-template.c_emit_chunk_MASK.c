
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int chunks; } ;
struct chunk {int action; int flags; void* data; } ;
typedef enum flags { ____Placeholder_flags } flags ;
typedef enum action { ____Placeholder_action } action ;


 struct chunk* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct parser *VAR_0,
                       enum action VAR_1,
                       enum flags VAR_2,
                       void *VAR_3)
{
    struct chunk *VAR_4;

    VAR_4 = FUNC_0(&VAR_0->chunks);
    if (!VAR_4)
        FUNC_1("Could not emit template chunk");

    VAR_4->action = VAR_1;
    VAR_4->flags = VAR_2;
    VAR_4->data = VAR_3;
}
