
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mp_word ;
typedef scalar_t__ mp_size ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_5__ {int used; } ;


 int FUNC_0 (int) ;
 int* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(mp_int VAR_0, mp_digit VAR_1)
{
 mp_word VAR_2 = 0;
 mp_digit *VAR_3 = FUNC_1(VAR_0);
 mp_size VAR_4 = FUNC_2(VAR_0);

 while (VAR_4 > 0)
 {
  VAR_2 = (mp_word) *VAR_3 * VAR_1 + VAR_2;
  *VAR_3++ = FUNC_0(VAR_2);
  VAR_2 = FUNC_3(VAR_2);
  --VAR_4;
 }

 if (VAR_2)
 {
  *VAR_3 = (mp_digit) VAR_2;
  VAR_0->used += 1;
 }
}
