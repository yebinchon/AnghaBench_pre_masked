
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ Size ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static uint8
FUNC_1(Size VAR_3)
{
 int VAR_4;


 if (VAR_3 > VAR_2)
  FUNC_0(VAR_0, "invalid FSM request size %zu", VAR_3);

 if (VAR_3 == 0)
  return 1;

 VAR_4 = (VAR_3 + VAR_1 - 1) / VAR_1;

 if (VAR_4 > 255)
  VAR_4 = 255;

 return (uint8) VAR_4;
}
