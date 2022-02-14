
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int timelib_sll ;
struct TYPE_3__ {int type; int value; scalar_t__ name; } ;
typedef TYPE_1__ timelib_lookup_table ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static timelib_sll FUNC_4(char **VAR_1, int *VAR_2)
{
 char *VAR_3;
 char *VAR_4 = *VAR_1, *VAR_5;
 timelib_sll VAR_6 = 0;
 const timelib_lookup_table *VAR_7;

 while ((**VAR_1 >= 'A' && **VAR_1 <= 'Z') || (**VAR_1 >= 'a' && **VAR_1 <= 'z')) {
  ++*VAR_1;
 }
 VAR_5 = *VAR_1;
 VAR_3 = FUNC_1(1, VAR_5 - VAR_4 + 1);
 FUNC_0(VAR_3, VAR_4, VAR_5 - VAR_4);

 for (VAR_7 = VAR_0; VAR_7->name; VAR_7++) {
  if (FUNC_3(VAR_3, VAR_7->name) == 0) {
   VAR_6 = VAR_7->value;
   *VAR_2 = VAR_7->type;
  }
 }

 FUNC_2(VAR_3);
 return VAR_6;
}
