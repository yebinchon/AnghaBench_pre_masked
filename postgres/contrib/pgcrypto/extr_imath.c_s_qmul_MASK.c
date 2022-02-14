
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mp_size ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_7__ {int used; } ;


 int FUNC_0 (TYPE_1__*) ;
 int* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5(mp_int VAR_1, mp_size VAR_2)
{
 mp_size VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;
 mp_digit *VAR_8,
      *VAR_9,
    VAR_10;

 if (VAR_2 == 0)
  return 1;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = VAR_2 / VAR_0;
 VAR_5 = VAR_2 % VAR_0;






 VAR_6 = 0;
 if (VAR_5 != 0)
 {
  mp_digit *VAR_11 = FUNC_1(VAR_1) + VAR_3 - 1;

  if ((*VAR_11 >> (VAR_0 - VAR_5)) != 0)
   VAR_6 = 1;
 }

 if (!FUNC_4(VAR_1, VAR_3 + VAR_4 + VAR_6))
  return 0;





 if (VAR_4 > 0)
 {
  VAR_8 = FUNC_1(VAR_1) + VAR_3 - 1;
  VAR_9 = VAR_8 + VAR_4;

  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7)
   *VAR_9-- = *VAR_8--;

  FUNC_3(FUNC_1(VAR_1), VAR_4);
  VAR_3 += VAR_4;
 }

 if (VAR_5)
 {
  VAR_10 = 0;
  for (VAR_7 = VAR_4, VAR_8 = FUNC_1(VAR_1) + VAR_4; VAR_7 < VAR_3; ++VAR_7, ++VAR_8)
  {
   mp_digit VAR_12 = *VAR_8;

   *VAR_8 = (*VAR_8 << VAR_5) | (VAR_10 >> (VAR_0 - VAR_5));
   VAR_10 = VAR_12;
  }

  VAR_10 >>= (VAR_0 - VAR_5);
  if (VAR_10 != 0)
  {
   *VAR_8 = VAR_10;
   VAR_3 += VAR_6;
  }
 }

 VAR_1->used = VAR_3;
 FUNC_0(VAR_1);

 return 1;
}
