
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef scalar_t__ ut16 ;
typedef scalar_t__ st16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(ut16 VAR_2, ut16 VAR_3, ut8 *VAR_4)
{
 st16 VAR_5 = VAR_3 - (VAR_2 + 2);
 if (VAR_5 < VAR_1 || VAR_0 < VAR_5) {
  return 0;
 }
 else {
  *VAR_4 = VAR_5;
  return 1;
 }
}
