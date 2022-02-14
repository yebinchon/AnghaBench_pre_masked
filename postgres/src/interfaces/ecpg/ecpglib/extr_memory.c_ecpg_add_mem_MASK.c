
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_mem {int next; void* pointer; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct auto_mem*) ;

bool
FUNC_3(void *VAR_0, int VAR_1)
{
 struct auto_mem *VAR_2 = (struct auto_mem *) FUNC_0(sizeof(struct auto_mem), VAR_1);

 if (!VAR_2)
  return 0;

 VAR_2->pointer = VAR_0;
 VAR_2->next = FUNC_1();
 FUNC_2(VAR_2);
 return 1;
}
