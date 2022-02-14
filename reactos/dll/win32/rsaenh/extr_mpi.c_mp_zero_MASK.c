
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; int dp; scalar_t__ used; int sign; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1 (mp_int * VAR_1)
{
  VAR_1->sign = VAR_0;
  VAR_1->used = 0;
  FUNC_0 (VAR_1->dp, 0, sizeof (mp_digit) * VAR_1->alloc);
}
