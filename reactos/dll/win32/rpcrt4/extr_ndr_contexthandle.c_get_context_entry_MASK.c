
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_handle_entry {scalar_t__ magic; } ;
typedef struct context_handle_entry* NDR_CCONTEXT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct context_handle_entry *FUNC_0(NDR_CCONTEXT VAR_1)
{
    struct context_handle_entry *VAR_2 = VAR_1;

    if (VAR_2->magic != VAR_0)
        return ((void*)0);
    return VAR_2;
}
