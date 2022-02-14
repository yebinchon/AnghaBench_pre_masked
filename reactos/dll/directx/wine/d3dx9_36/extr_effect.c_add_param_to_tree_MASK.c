
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_parameter {char* full_name; char* name; int element_count; unsigned int member_count; struct d3dx_parameter* members; TYPE_1__* top_level_param; int rb_entry; } ;
struct d3dx9_base_effect {int param_tree; } ;
struct TYPE_2__ {unsigned int annotation_count; struct d3dx_parameter* annotations; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct d3dx_parameter*) ;
 int FUNC_5 (char*,char const*,unsigned int) ;
 int FUNC_6 (char*,char*,unsigned int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_9(struct d3dx9_base_effect *VAR_0, struct d3dx_parameter *VAR_1,
        struct d3dx_parameter *VAR_2, char VAR_3, unsigned int VAR_4)
{
    const char *VAR_5 = VAR_2 ? VAR_2->full_name : ((void*)0);
    unsigned int VAR_6;

    FUNC_1("Adding parameter %p (%s - parent %p, element %u) to the rbtree.\n",
            VAR_1, FUNC_2(VAR_1->name), VAR_2, VAR_4);

    if (VAR_5)
    {
        unsigned int VAR_7 = FUNC_7(VAR_5);
        unsigned int VAR_8 = FUNC_7(VAR_1->name);
        unsigned int VAR_9;
        unsigned int VAR_10;
        char VAR_11[16];

        if (VAR_3 == '[')
        {
            FUNC_6(VAR_11, "[%u]", VAR_4);
            VAR_9 = FUNC_7(VAR_11);
            VAR_8 = 0;
        }
        else
        {
            VAR_11[0] = VAR_3;
            VAR_11[1] = 0;
            VAR_9 = 1;
        }
        VAR_10 = VAR_7 + VAR_9 + VAR_8 + 1;

        if (!(VAR_1->full_name = FUNC_3(VAR_10)))
        {
            FUNC_0("Out of memory.\n");
            return;
        }

        FUNC_5(VAR_1->full_name, VAR_5, VAR_7);
        FUNC_5(VAR_1->full_name + VAR_7, VAR_11, VAR_9);
        FUNC_5(VAR_1->full_name + VAR_7 + VAR_9, VAR_1->name, VAR_8);
        VAR_1->full_name[VAR_10 - 1] = 0;
    }
    else
    {
        unsigned int VAR_12 = FUNC_7(VAR_1->name) + 1;

        if (!(VAR_1->full_name = FUNC_3(VAR_12)))
        {
            FUNC_0("Out of memory.\n");
            return;
        }

        FUNC_5(VAR_1->full_name, VAR_1->name, VAR_12);
    }
    FUNC_1("Full name is %s.\n", VAR_1->full_name);
    FUNC_8(&VAR_0->param_tree, VAR_1->full_name, &VAR_1->rb_entry);

    if (FUNC_4(VAR_1))
        for (VAR_6 = 0; VAR_6 < VAR_1->top_level_param->annotation_count; ++VAR_6)
            FUNC_9(VAR_0, &VAR_1->top_level_param->annotations[VAR_6], VAR_1, '@', 0);

    if (VAR_1->element_count)
        for (VAR_6 = 0; VAR_6 < VAR_1->element_count; ++VAR_6)
            FUNC_9(VAR_0, &VAR_1->members[VAR_6], VAR_1, '[', VAR_6);
    else
        for (VAR_6 = 0; VAR_6 < VAR_1->member_count; ++VAR_6)
            FUNC_9(VAR_0, &VAR_1->members[VAR_6], VAR_1, '.', 0);
}
