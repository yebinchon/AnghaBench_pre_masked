
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {scalar_t__ flags; scalar_t__ num_keys; int * keys; scalar_t__ len_class; int * class; scalar_t__ num_namespaces; int * len_namespaces; int * namespaces; scalar_t__ len_server; int * server; scalar_t__ len_text; int * text; } ;



__attribute__((used)) static void FUNC_0( struct path *VAR_0 )
{
    VAR_0->text = ((void*)0);
    VAR_0->len_text = 0;
    VAR_0->server = ((void*)0);
    VAR_0->len_server = 0;
    VAR_0->namespaces = ((void*)0);
    VAR_0->len_namespaces = ((void*)0);
    VAR_0->num_namespaces = 0;
    VAR_0->class = ((void*)0);
    VAR_0->len_class = 0;
    VAR_0->keys = ((void*)0);
    VAR_0->num_keys = 0;
    VAR_0->flags = 0;
}
