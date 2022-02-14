
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int size_allocated; scalar_t__ data; } ;
typedef TYPE_1__ CString ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(CString *VAR_0, int VAR_1)
{
 int VAR_2;
 VAR_2 = VAR_0->size + 1;
 if (VAR_2 > VAR_0->size_allocated) {
  FUNC_0 (VAR_0, VAR_2);
 }
 ((unsigned char *) VAR_0->data)[VAR_2 - 1] = VAR_1;
 VAR_0->size = VAR_2;
}
