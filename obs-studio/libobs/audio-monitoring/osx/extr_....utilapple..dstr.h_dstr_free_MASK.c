
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {scalar_t__ capacity; scalar_t__ len; int * array; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct dstr *VAR_0)
{
 FUNC_0(VAR_0->array);
 VAR_0->array = ((void*)0);
 VAR_0->len = 0;
 VAR_0->capacity = 0;
}
