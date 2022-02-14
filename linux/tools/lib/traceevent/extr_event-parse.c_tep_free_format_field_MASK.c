
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {scalar_t__ alias; scalar_t__ name; struct tep_format_field* type; } ;


 int FUNC_0 (struct tep_format_field*) ;

void FUNC_1(struct tep_format_field *VAR_0)
{
 FUNC_0(VAR_0->type);
 if (VAR_0->alias != VAR_0->name)
  FUNC_0(VAR_0->alias);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0);
}
