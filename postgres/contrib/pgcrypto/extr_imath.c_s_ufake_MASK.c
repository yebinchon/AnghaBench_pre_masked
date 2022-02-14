
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_usmall ;
typedef int mp_size ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_3__ {int * digits; int sign; int alloc; int used; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(mp_int VAR_1, mp_usmall VAR_2, mp_digit VAR_3[])
{
 mp_size VAR_4 = (mp_size) FUNC_1(VAR_2, VAR_3);

 VAR_1->used = VAR_4;
 VAR_1->alloc = FUNC_0(VAR_2);
 VAR_1->sign = VAR_0;
 VAR_1->digits = VAR_3;
}
