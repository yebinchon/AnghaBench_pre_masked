
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {scalar_t__ num; scalar_t__ capacity; int * array; } ;


 int FUNC_0 (struct darray*) ;
 int FUNC_1 (struct darray*,struct darray*,int) ;

__attribute__((used)) static inline void FUNC_2(struct darray *VAR_0, struct darray *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_1, sizeof(struct darray));
 VAR_1->array = ((void*)0);
 VAR_1->capacity = 0;
 VAR_1->num = 0;
}
