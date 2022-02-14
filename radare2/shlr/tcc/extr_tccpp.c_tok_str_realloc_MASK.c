
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocated_len; int* str; } ;
typedef TYPE_1__ TokenString ;


 int* FUNC_0 (int*,int) ;

__attribute__((used)) static int *FUNC_1(TokenString *VAR_0)
{
 int *VAR_1, VAR_2;

 if (VAR_0->allocated_len == 0) {
  VAR_2 = 8;
 } else {
  VAR_2 = VAR_0->allocated_len * 2;
 }
 VAR_1 = FUNC_0 (VAR_0->str, VAR_2 * sizeof(int));
 VAR_0->allocated_len = VAR_2;
 VAR_0->str = VAR_1;
 return VAR_1;
}
