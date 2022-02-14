
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ CdioListNode_t ;



CdioListNode_t *
FUNC_0 (CdioListNode_t *VAR_0)
{
  if (VAR_0)
    return VAR_0->next;

  return ((void*)0);
}
