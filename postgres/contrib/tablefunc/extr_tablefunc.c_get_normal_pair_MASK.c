
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double float8 ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 () ;
 double FUNC_2 (double) ;

__attribute__((used)) static void
FUNC_3(float8 *VAR_1, float8 *VAR_2)
{
 float8 VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;

 do
 {
  VAR_3 = (float8) FUNC_1() / (float8) VAR_0;
  VAR_4 = (float8) FUNC_1() / (float8) VAR_0;

  VAR_5 = (2.0 * VAR_3) - 1.0;
  VAR_6 = (2.0 * VAR_4) - 1.0;

  VAR_7 = VAR_5 * VAR_5 + VAR_6 * VAR_6;
 } while (VAR_7 >= 1.0);

 if (VAR_7 == 0)
 {
  *VAR_1 = 0;
  *VAR_2 = 0;
 }
 else
 {
  VAR_7 = FUNC_2((-2.0 * FUNC_0(VAR_7)) / VAR_7);
  *VAR_1 = VAR_5 * VAR_7;
  *VAR_2 = VAR_6 * VAR_7;
 }
}
