
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdarray {int nr_autogrow; scalar_t__ nr_alloc; scalar_t__ nr; int * priv; int * entries; } ;



void FUNC_0(struct fdarray *VAR_0, int VAR_1)
{
 VAR_0->entries = ((void*)0);
 VAR_0->priv = ((void*)0);
 VAR_0->nr = VAR_0->nr_alloc = 0;
 VAR_0->nr_autogrow = VAR_1;
}
