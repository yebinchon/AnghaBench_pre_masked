
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_field {int operator; struct hist_field** operands; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hist_field*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *FUNC_4(struct hist_field *VAR_3, unsigned int VAR_4)
{
 char *VAR_5;

 if (VAR_4 > 1)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 if (!VAR_3->operands[0]) {
  FUNC_0(VAR_3, VAR_5);
  return VAR_5;
 }

 if (VAR_3->operator == VAR_0) {
  char *VAR_6;

  FUNC_3(VAR_5, "-(");
  VAR_6 = FUNC_4(VAR_3->operands[0], ++VAR_4);
  if (!VAR_6) {
   FUNC_1(VAR_5);
   return ((void*)0);
  }
  FUNC_3(VAR_5, VAR_6);
  FUNC_3(VAR_5, ")");

  FUNC_1(VAR_6);

  return VAR_5;
 }

 FUNC_0(VAR_3->operands[0], VAR_5);

 switch (VAR_3->operator) {
 case 129:
  FUNC_3(VAR_5, "-");
  break;
 case 128:
  FUNC_3(VAR_5, "+");
  break;
 default:
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 FUNC_0(VAR_3->operands[1], VAR_5);

 return VAR_5;
}
