
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct TYPE_2__ {int entry; struct source_location loc; int type; } ;
struct list {struct list* body; TYPE_1__ node; } ;
struct hlsl_ir_node {int entry; } ;
struct hlsl_ir_loop {struct hlsl_ir_loop* body; TYPE_1__ node; } ;
struct hlsl_ir_if {struct hlsl_ir_if* body; TYPE_1__ node; } ;
typedef enum loop_type { ____Placeholder_loop_type } loop_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct list*) ;
 int FUNC_3 (struct hlsl_ir_node*) ;
 int FUNC_4 (struct list*) ;
 int FUNC_5 (struct list*,int *) ;
 int FUNC_6 (struct list*) ;
 int FUNC_7 (struct list*,struct list*) ;
 int FUNC_8 (struct list*,struct list*) ;
 struct list* FUNC_9 (struct list*) ;

__attribute__((used)) static struct list *FUNC_10(enum loop_type VAR_2, struct list *VAR_3, struct list *VAR_4,
        struct hlsl_ir_node *VAR_5, struct list *VAR_6, struct source_location *VAR_7)
{
    struct list *VAR_8 = ((void*)0);
    struct hlsl_ir_loop *VAR_9 = ((void*)0);
    struct hlsl_ir_if *VAR_10 = ((void*)0);

    VAR_8 = FUNC_1(sizeof(*VAR_8));
    if (!VAR_8)
        goto oom;
    FUNC_6(VAR_8);

    if (VAR_3)
        FUNC_7(VAR_8, VAR_3);

    VAR_9 = FUNC_1(sizeof(*VAR_9));
    if (!VAR_9)
        goto oom;
    VAR_9->node.type = VAR_0;
    VAR_9->node.loc = *VAR_7;
    FUNC_5(VAR_8, &VAR_9->node.entry);
    VAR_9->body = FUNC_1(sizeof(*VAR_9->body));
    if (!VAR_9->body)
        goto oom;
    FUNC_6(VAR_9->body);

    VAR_10 = FUNC_9(VAR_4);
    if (!VAR_10)
        goto oom;

    if (VAR_2 != VAR_1)
        FUNC_5(VAR_9->body, &VAR_10->node.entry);

    FUNC_8(VAR_9->body, VAR_6);

    if (VAR_5)
        FUNC_5(VAR_9->body, &VAR_5->entry);

    if (VAR_2 == VAR_1)
        FUNC_5(VAR_9->body, &VAR_10->node.entry);

    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    FUNC_2(VAR_6);
    return VAR_8;

oom:
    FUNC_0("Out of memory.\n");
    if (VAR_9)
        FUNC_2(VAR_9->body);
    FUNC_2(VAR_9);
    FUNC_2(VAR_10);
    FUNC_2(VAR_8);
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);
    FUNC_3(VAR_5);
    FUNC_4(VAR_6);
    return ((void*)0);
}
