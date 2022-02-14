
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int (* func ) (char*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4 = FUNC_2(VAR_1);
 int VAR_5, VAR_6 = 0, VAR_7;

 VAR_2 = FUNC_5(VAR_4, " ", &VAR_3);
 if (VAR_2 == ((void*)0))
  goto out;
 VAR_7 = FUNC_3(VAR_2);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  if (VAR_7 != FUNC_3(VAR_0[VAR_5].name))
   continue;
  if (FUNC_4(VAR_0[VAR_5].name, VAR_2, VAR_7) == 0) {
   VAR_6 = VAR_0[VAR_5].func(VAR_3);
   break;
  }
 }
out:
 FUNC_1(VAR_4);
 return VAR_6;
}
