
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optioninfo {int type; int* storep; int value; int (* func ) (struct optioninfo const*,char const*,char const*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct optioninfo const*) ;





 int FUNC_3 (struct optioninfo const*,char const*,char const*) ;

void FUNC_4(const struct optioninfo *VAR_0, int VAR_1,
     const char *VAR_2, const char *VAR_3) {
  switch (VAR_0->type) {
  case 132:
    FUNC_1(!VAR_2);
    *VAR_0->storep= !VAR_1;
    return;
  case 128:
    FUNC_1(!VAR_2);
    if (VAR_1) FUNC_2(VAR_0);
    *VAR_0->storep= VAR_0->value;
    return;
  case 131: case 130: case 129:
    if (VAR_1) FUNC_2(VAR_0);
    VAR_0->func(VAR_0,VAR_2,VAR_3);
    return;
  default:
    FUNC_0();
  }
}
