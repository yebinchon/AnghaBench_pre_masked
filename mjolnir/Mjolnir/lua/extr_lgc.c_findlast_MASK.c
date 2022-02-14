
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ GCObject ;



__attribute__((used)) static GCObject **FUNC_0 (GCObject **VAR_0) {
  while (*VAR_0 != ((void*)0))
    VAR_0 = &(*VAR_0)->next;
  return VAR_0;
}
