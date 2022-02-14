
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mp_size ;
typedef TYPE_1__* mp_int ;
typedef unsigned int mp_digit ;
struct TYPE_6__ {unsigned int* digits; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(mp_int VAR_1, mp_int VAR_2)
{
 mp_digit VAR_3 = VAR_2->digits[FUNC_0(VAR_2) - 1];
 int VAR_4 = 0;

 while (VAR_3 < (1u << (mp_digit) (VAR_0 - 1)))
 {
  VAR_3 <<= 1;
  ++VAR_4;
 }


 if (VAR_4 != 0)
 {
  (void) FUNC_1(VAR_1, (mp_size) VAR_4);
  (void) FUNC_1(VAR_2, (mp_size) VAR_4);
 }

 return VAR_4;
}
