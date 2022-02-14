
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; char* name; int index; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(const void *VAR_1, const void *VAR_2)
{
  const struct symbol *VAR_3 = *(const struct symbol **) VAR_1;
  const struct symbol *VAR_4 = *(const struct symbol **) VAR_2;
  int VAR_5 = VAR_3->type==VAR_0 ? 3 : VAR_3->name[0]>'Z' ? 2 : 1;
  int VAR_6 = VAR_4->type==VAR_0 ? 3 : VAR_4->name[0]>'Z' ? 2 : 1;
  return VAR_5==VAR_6 ? VAR_3->index - VAR_4->index : VAR_5 - VAR_6;
}
