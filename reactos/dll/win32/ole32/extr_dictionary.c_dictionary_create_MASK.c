
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary {scalar_t__ num_entries; int * head; void* extra; int destroy; scalar_t__ comp; } ;
typedef int destroyfunc ;
typedef scalar_t__ comparefunc ;


 int FUNC_0 () ;
 struct dictionary* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,struct dictionary*,...) ;

struct dictionary *FUNC_3(comparefunc VAR_0, destroyfunc VAR_1, void *VAR_2)
{
    struct dictionary *VAR_3;

    FUNC_2("(%p, %p, %p)\n", VAR_0, VAR_1, VAR_2);
    if (!VAR_0)
        return ((void*)0);
    VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(struct dictionary));
    if (VAR_3)
    {
        VAR_3->comp = VAR_0;
        VAR_3->destroy = VAR_1;
        VAR_3->extra = VAR_2;
        VAR_3->head = ((void*)0);
        VAR_3->num_entries = 0;
    }
    FUNC_2("returning %p\n", VAR_3);
    return VAR_3;
}
