
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int PWMDriver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(PWMDriver *VAR_8)
{
  (void)VAR_8;
  uint16_t VAR_9 = (uint16_t) VAR_6 * 256 / VAR_2;

  VAR_4 = (VAR_4 + 1) % (VAR_6 * 256);
  uint8_t VAR_10 = VAR_4 / VAR_9 % VAR_2;

  if (((VAR_5 == VAR_1) && (VAR_10 == VAR_2 / 2)) ||
      ((VAR_5 == VAR_0) && (VAR_10 == VAR_2 - 1)))
  {
      FUNC_1();
  }

  uint32_t VAR_11 = FUNC_4(FUNC_6(VAR_7[VAR_10] * 256));

  FUNC_2();
  FUNC_5(
    &VAR_3,
    0,
    FUNC_0(
      &VAR_3,
      0xFFFF,
      VAR_11
    )
  );
  FUNC_3();
}
