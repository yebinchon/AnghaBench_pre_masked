
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_3__ {int alloc; int used; int sign; scalar_t__ single; scalar_t__* digits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

mp_result
FUNC_0(mp_int VAR_3)
{
 if (VAR_3 == ((void*)0))
  return VAR_0;

 VAR_3->single = 0;
 VAR_3->digits = &(VAR_3->single);
 VAR_3->alloc = 1;
 VAR_3->used = 1;
 VAR_3->sign = VAR_2;

 return VAR_1;
}
