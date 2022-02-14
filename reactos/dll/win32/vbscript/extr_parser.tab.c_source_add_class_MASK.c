
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* class_decls; } ;
typedef TYPE_1__ parser_ctx_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ class_decl_t ;



__attribute__((used)) static void FUNC_0(parser_ctx_t *VAR_0, class_decl_t *VAR_1)
{
    VAR_1->next = VAR_0->class_decls;
    VAR_0->class_decls = VAR_1;
}
