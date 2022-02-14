
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct output_buffer {scalar_t__ written; scalar_t__ allocated; int * data; } ;
struct TYPE_4__ {struct output_buffer buffer; } ;
typedef TYPE_1__ xmlwriteroutput ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(xmlwriteroutput *VAR_0)
{
    struct output_buffer *VAR_1 = &VAR_0->buffer;
    FUNC_0(VAR_0, VAR_1->data);
    VAR_1->data = ((void*)0);
    VAR_1->allocated = 0;
    VAR_1->written = 0;
}
