
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int root ;
struct TYPE_3__ {int (* fn ) (char*) ;int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 TYPE_1__* VAR_3 ;

int FUNC_7(int VAR_4, char *VAR_5[])
{
 char VAR_6[VAR_2];
 int VAR_7, VAR_8 = VAR_1;

 if (FUNC_1(VAR_6, sizeof(VAR_6)))
  FUNC_2("cgroup v2 isn't mounted\n");
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  switch (VAR_3[VAR_7].fn(VAR_6)) {
  case 129:
   FUNC_4("%s\n", VAR_3[VAR_7].name);
   break;
  case 128:
   FUNC_5("%s\n", VAR_3[VAR_7].name);
   break;
  default:
   VAR_8 = VAR_0;
   FUNC_3("%s\n", VAR_3[VAR_7].name);
   break;
  }
 }

 return VAR_8;
}
