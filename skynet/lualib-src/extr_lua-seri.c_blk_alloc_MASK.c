
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int * next; } ;


 struct block* FUNC_0 (int) ;

__attribute__((used)) inline static struct block *
FUNC_1(void) {
 struct block *VAR_0 = FUNC_0(sizeof(struct block));
 VAR_0->next = ((void*)0);
 return VAR_0;
}
