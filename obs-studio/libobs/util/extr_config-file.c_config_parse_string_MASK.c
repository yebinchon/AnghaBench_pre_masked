
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strref {int dummy; } ;
struct lexer {int dummy; } ;
struct TYPE_2__ {char* array; } ;
struct base_token {TYPE_1__ text; } ;


 int VAR_0 ;
 int FUNC_0 (struct base_token*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (struct lexer*,struct base_token*,int ) ;
 int FUNC_3 (struct strref*) ;
 int FUNC_4 (struct strref*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(struct lexer *VAR_1, struct strref *VAR_2, char VAR_3)
{
 bool VAR_4 = VAR_3 != 0;
 struct base_token VAR_5;
 FUNC_0(&VAR_5);

 while (FUNC_2(VAR_1, &VAR_5, VAR_0)) {
  if (VAR_3) {
   if (*VAR_5.text.array == VAR_3) {
    VAR_4 = 1;
    break;
   } else if (FUNC_1(*VAR_5.text.array)) {
    VAR_4 = 0;
    break;
   }
  } else {
   if (FUNC_1(*VAR_5.text.array)) {
    VAR_4 = 1;
    break;
   }
  }

  FUNC_4(VAR_2, &VAR_5.text);
 }

 FUNC_3(VAR_2);
 return VAR_4;
}
