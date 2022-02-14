
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {scalar_t__ current_used; int * current; int * header; } ;



__attribute__((used)) static void
FUNC_0(struct pool *VAR_0) {
 VAR_0->header = ((void*)0);
 VAR_0->current = ((void*)0);
 VAR_0->current_used = 0;
}
