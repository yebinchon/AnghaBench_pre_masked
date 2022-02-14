
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mp_word ;
typedef unsigned int mp_size ;
typedef TYPE_1__* mp_int ;
typedef unsigned int mp_digit ;
struct TYPE_6__ {int sign; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (int) ;
 unsigned int* FUNC_2 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int
FUNC_6(mp_int VAR_3, mp_size VAR_4)
{
 mp_digit VAR_5 = (1u << (VAR_4 % VAR_0)),
      *VAR_6;
 mp_size VAR_7 = (VAR_4 / VAR_0),
    VAR_8;
 mp_word VAR_9 = 0;

 if (!FUNC_5(VAR_3, VAR_7 + 1))
  return 0;

 for (VAR_8 = 0, VAR_6 = FUNC_2(VAR_3); VAR_8 < VAR_7; ++VAR_8, ++VAR_6)
 {
  VAR_9 = ((mp_word) VAR_1 + 1) - VAR_9 - (mp_word) *VAR_6;

  *VAR_6 = FUNC_1(VAR_9);
  VAR_9 = FUNC_3(VAR_9) ? 0 : 1;
 }

 VAR_9 = ((mp_word) VAR_1 + 1 + VAR_5) - VAR_9 - (mp_word) *VAR_6;
 *VAR_6 = FUNC_1(VAR_9);

 FUNC_4(FUNC_3(VAR_9) != 0);

 VAR_3->sign = VAR_2;
 FUNC_0(VAR_3);

 return 1;
}
