
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {int type; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct tep_format_field *VAR_0)
{

 if (FUNC_0(VAR_0->type, "long"))
  return 1;

 return 0;
}
