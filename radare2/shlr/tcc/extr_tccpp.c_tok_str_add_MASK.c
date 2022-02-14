
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int* str; int allocated_len; } ;
typedef TYPE_1__ TokenString ;


 int* FUNC_0 (TYPE_1__*) ;

void FUNC_1(TokenString *VAR_0, int VAR_1)
{
 int VAR_2, *VAR_3;

 VAR_2 = VAR_0->len;
 VAR_3 = VAR_0->str;
 if (VAR_2 >= VAR_0->allocated_len) {
  VAR_3 = FUNC_0 (VAR_0);
 }
 VAR_3[VAR_2++] = VAR_1;
 VAR_0->len = VAR_2;
}
