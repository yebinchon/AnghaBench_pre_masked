
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size_allocated; void* data; void* data_allocated; } ;
typedef TYPE_1__ CString ;


 void* FUNC_0 (void*,int) ;

__attribute__((used)) static void FUNC_1(CString *VAR_0, int VAR_1)
{
 int VAR_2;
 void *VAR_3;

 VAR_2 = VAR_0->size_allocated;
 if (VAR_2 == 0) {
  VAR_2 = 8;
 }
 while (VAR_2 < VAR_1)
  VAR_2 = VAR_2 * 2;
 VAR_3 = FUNC_0 (VAR_0->data_allocated, VAR_2);
 VAR_0->data_allocated = VAR_3;
 VAR_0->size_allocated = VAR_2;
 VAR_0->data = VAR_3;
}
