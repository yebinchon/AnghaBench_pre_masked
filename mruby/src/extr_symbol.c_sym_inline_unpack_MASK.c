
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mrb_sym ;
typedef int mrb_int ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 char* VAR_1 ;

__attribute__((used)) static const char*
FUNC_3(mrb_sym VAR_2, char *VAR_3, mrb_int *VAR_4)
{
  int VAR_5 = FUNC_0(VAR_2) ? 5 : 6;
  int VAR_6;

  FUNC_2(FUNC_1(VAR_2));

  for (VAR_6=0; VAR_6<30/VAR_5; VAR_6++) {
    uint32_t VAR_7 = VAR_2>>(VAR_6*VAR_5+VAR_0) & ((1<<VAR_5)-1);
    if (VAR_7 == 0) break;
    VAR_3[VAR_6] = VAR_1[VAR_7-1];;
  }
  VAR_3[VAR_6] = '\0';
  if (VAR_4) *VAR_4 = VAR_6;
  return VAR_3;
}
