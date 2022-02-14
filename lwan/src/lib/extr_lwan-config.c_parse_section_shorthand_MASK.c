
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int items; } ;
struct config_line {int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct config_line*) ;
 void* FUNC_1 (struct parser*) ;

__attribute__((used)) static void *FUNC_2(struct parser *VAR_1)
{
    void *VAR_2 = FUNC_1(VAR_1);

    if (VAR_2) {
        struct config_line VAR_3 = {.type = VAR_0};

        if (FUNC_0(&VAR_1->items, &VAR_3))
            return VAR_2;
    }

    return ((void*)0);
}
