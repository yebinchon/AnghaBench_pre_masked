
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; scalar_t__ name; } ;
typedef TYPE_1__ timelib_lookup_table ;
typedef int timelib_long ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static timelib_long FUNC_4(char **VAR_1)
{
 char *VAR_2;
 char *VAR_3 = *VAR_1, *VAR_4;
 timelib_long VAR_5 = 0;
 const timelib_lookup_table *VAR_6;

 while ((**VAR_1 >= 'A' && **VAR_1 <= 'Z') || (**VAR_1 >= 'a' && **VAR_1 <= 'z')) {
  ++*VAR_1;
 }
 VAR_4 = *VAR_1;
 VAR_2 = FUNC_1(1, VAR_4 - VAR_3 + 1);
 FUNC_0(VAR_2, VAR_3, VAR_4 - VAR_3);

 for (VAR_6 = VAR_0; VAR_6->name; VAR_6++) {
  if (FUNC_3(VAR_2, VAR_6->name) == 0) {
   VAR_5 = VAR_6->value;
  }
 }

 FUNC_2(VAR_2);
 return VAR_5;
}
