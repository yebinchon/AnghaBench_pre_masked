
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mp_size ;
typedef TYPE_1__* mp_int ;
typedef unsigned int mp_digit ;
struct TYPE_5__ {int used; unsigned int* digits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(mp_int VAR_1, mp_size VAR_2)
{
 mp_size VAR_3 = VAR_2 / VAR_0 + 1,
    VAR_4 = VAR_2 % VAR_0;
 mp_size VAR_5 = FUNC_1(VAR_1);
 mp_digit VAR_6 = (1u << VAR_4) - 1;

 if (VAR_3 <= VAR_5)
 {
  VAR_1->used = VAR_3;
  VAR_1->digits[VAR_3 - 1] &= VAR_6;
  FUNC_0(VAR_1);
 }
}
