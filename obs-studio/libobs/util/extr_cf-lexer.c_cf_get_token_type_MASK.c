
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * array; } ;
struct cf_token {TYPE_1__ str; } ;
struct base_token {int type; } ;
typedef enum cf_token_type { ____Placeholder_cf_token_type } cf_token_type ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline enum cf_token_type
FUNC_1(const struct cf_token *VAR_5,
    const struct base_token *VAR_6)
{
 switch (VAR_6->type) {
 case 132:
  return VAR_0;

 case 131:
  return VAR_2;

 case 128:
  if (FUNC_0(*VAR_5->str.array))
   return VAR_1;
  else
   return VAR_4;

 case 130:
 case 129:
  break;
 }

 return VAR_3;
}
