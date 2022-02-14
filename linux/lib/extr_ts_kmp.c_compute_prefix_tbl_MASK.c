
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ const FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static inline void FUNC_1(const u8 *VAR_1, unsigned int VAR_2,
          unsigned int *VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 const u8 VAR_7 = VAR_4 & VAR_0;

 for (VAR_5 = 0, VAR_6 = 1; VAR_6 < VAR_2; VAR_6++) {
  while (VAR_5 > 0 && (VAR_7 ? FUNC_0(VAR_1[VAR_5]) : VAR_1[VAR_5])
      != (VAR_7 ? FUNC_0(VAR_1[VAR_6]) : VAR_1[VAR_6]))
   VAR_5 = VAR_3[VAR_5-1];
  if ((VAR_7 ? FUNC_0(VAR_1[VAR_5]) : VAR_1[VAR_5])
      == (VAR_7 ? FUNC_0(VAR_1[VAR_6]) : VAR_1[VAR_6]))
   VAR_5++;
  VAR_3[VAR_6] = VAR_5;
 }
}
