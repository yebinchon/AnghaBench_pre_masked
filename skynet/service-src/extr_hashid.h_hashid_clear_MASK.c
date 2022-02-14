
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashid {int hashmod; scalar_t__ count; scalar_t__ cap; int * hash; int * id; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct hashid *VAR_0) {
 FUNC_0(VAR_0->id);
 FUNC_0(VAR_0->hash);
 VAR_0->id = ((void*)0);
 VAR_0->hash = ((void*)0);
 VAR_0->hashmod = 1;
 VAR_0->cap = 0;
 VAR_0->count = 0;
}
