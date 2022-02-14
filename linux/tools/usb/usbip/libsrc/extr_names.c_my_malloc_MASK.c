
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {void* mem; struct pool* next; } ;


 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (struct pool*) ;
 struct pool* VAR_0 ;

__attribute__((used)) static void *FUNC_2(size_t VAR_1)
{
 struct pool *VAR_2;

 VAR_2 = FUNC_0(1, sizeof(struct pool));
 if (!VAR_2)
  return ((void*)0);

 VAR_2->mem = FUNC_0(1, VAR_1);
 if (!VAR_2->mem) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;

 return VAR_2->mem;
}
