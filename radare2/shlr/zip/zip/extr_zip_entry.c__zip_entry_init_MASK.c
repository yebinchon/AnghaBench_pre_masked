
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_entry {scalar_t__ deleted; int * source; int * changes; int * orig; } ;



void
FUNC_0(struct zip_entry *VAR_0)
{
    VAR_0->orig = ((void*)0);
    VAR_0->changes = ((void*)0);
    VAR_0->source = ((void*)0);
    VAR_0->deleted = 0;
}
