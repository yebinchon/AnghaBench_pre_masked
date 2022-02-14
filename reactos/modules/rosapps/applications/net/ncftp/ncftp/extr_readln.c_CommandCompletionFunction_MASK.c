
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__* CommandPtr ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char const*,size_t) ;
 char* FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_1, int VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5, VAR_6;
 CommandPtr VAR_7;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 == 0) {
  VAR_3 = ((void*)0);
 } else {
  VAR_3 = ((void*)0);
  for (VAR_5=0, VAR_6=0; ; VAR_5++) {
   VAR_7 = FUNC_0(VAR_5);
   if (VAR_7 == VAR_0)
    break;
   if (FUNC_1(VAR_7->name, VAR_1, VAR_4) == 0) {
    if (VAR_6 >= VAR_2) {
     VAR_3 = FUNC_2(VAR_7->name);
     break;
    }
    VAR_6++;
   }
  }
 }
 return VAR_3;
}
