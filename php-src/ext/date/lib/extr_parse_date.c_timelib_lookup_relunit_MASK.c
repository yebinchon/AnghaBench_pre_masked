
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; } ;
typedef TYPE_1__ timelib_relunit ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static const timelib_relunit* FUNC_4(char **VAR_1)
{
 char *VAR_2;
 char *VAR_3 = *VAR_1, *VAR_4;
 const timelib_relunit *VAR_5, *VAR_6 = ((void*)0);

 while (**VAR_1 != '\0' && **VAR_1 != ' ' && **VAR_1 != ',' && **VAR_1 != '\t' && **VAR_1 != ';' && **VAR_1 != ':' &&
  **VAR_1 != '/' && **VAR_1 != '.' && **VAR_1 != '-' && **VAR_1 != '(' && **VAR_1 != ')' ) {
  ++*VAR_1;
 }
 VAR_4 = *VAR_1;
 VAR_2 = FUNC_1(1, VAR_4 - VAR_3 + 1);
 FUNC_0(VAR_2, VAR_3, VAR_4 - VAR_3);

 for (VAR_5 = VAR_0; VAR_5->name; VAR_5++) {
  if (FUNC_3(VAR_2, VAR_5->name) == 0) {
   VAR_6 = VAR_5;
   break;
  }
 }

 FUNC_2(VAR_2);
 return VAR_6;
}
