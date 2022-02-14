
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* array; } ;
struct base_token {int type; TYPE_1__ text; } ;







 int FUNC_0 (char) ;

__attribute__((used)) static bool FUNC_1(struct base_token *VAR_0,
         const struct base_token *VAR_1)
{
 switch (VAR_0->type) {
 case 132:
  if (VAR_1->type == 129 ||
      VAR_1->type == 128)
   return 1;
  break;

 case 131:
  if (VAR_1->type == 128 ||
      (VAR_1->type == 129 &&
       *VAR_1->text.array != '.'))
   return 1;
  break;

 case 128:

  if (FUNC_0(*VAR_0->text.array) &&
      FUNC_0(*VAR_1->text.array))
   break;
  return 1;

 case 129:
  if (*VAR_0->text.array == '.' &&
      VAR_1->type == 131) {
   VAR_0->type = 131;
   break;
  }


 case 130:
  return 1;
 }

 return 0;
}
