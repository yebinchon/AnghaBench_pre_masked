
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct xtm {unsigned int dse; unsigned int monthday; unsigned int month; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct xtm *VAR_4, time_t VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8 = VAR_4->dse;
 for (VAR_7 = 0, VAR_6 = VAR_0; VAR_1[VAR_7] > VAR_8;
     ++VAR_7, --VAR_6)
                 ;

 VAR_8 -= VAR_1[VAR_7];
 if (FUNC_1(VAR_6)) {

  for (VAR_7 = FUNC_0(VAR_2) - 1;
      VAR_7 > 0 && VAR_2[VAR_7] > VAR_8; --VAR_7)
                  ;
  VAR_4->monthday = VAR_8 - VAR_2[VAR_7] + 1;
 } else {
  for (VAR_7 = FUNC_0(VAR_3) - 1;
      VAR_7 > 0 && VAR_3[VAR_7] > VAR_8; --VAR_7)
                  ;
  VAR_4->monthday = VAR_8 - VAR_3[VAR_7] + 1;
 }

 VAR_4->month = VAR_7 + 1;
}
