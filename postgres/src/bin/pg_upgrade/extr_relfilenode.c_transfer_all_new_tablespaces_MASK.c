
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_old_tablespaces; char** old_tablespaces; } ;
struct TYPE_3__ {int transfer_mode; int jobs; } ;
typedef int DbInfoArr ;


 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *,int *,char*,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 TYPE_1__ VAR_2 ;

void
FUNC_5(DbInfoArr *VAR_3, DbInfoArr *VAR_4,
        char *VAR_5, char *VAR_6)
{
 switch (VAR_2.transfer_mode)
 {
  case 130:
   FUNC_3(VAR_0, "Cloning user relation files\n");
   break;
  case 129:
   FUNC_3(VAR_0, "Copying user relation files\n");
   break;
  case 128:
   FUNC_3(VAR_0, "Linking user relation files\n");
   break;
 }
 if (VAR_2.jobs <= 1)
  FUNC_2(VAR_3, VAR_4, VAR_5,
           VAR_6, ((void*)0));
 else
 {
  int VAR_7;


  FUNC_2(VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_5);

  for (VAR_7 = 0; VAR_7 < VAR_1.num_old_tablespaces; VAR_7++)
   FUNC_2(VAR_3,
            VAR_4,
            VAR_5,
            VAR_6,
            VAR_1.old_tablespaces[VAR_7]);

  while (FUNC_4(1) == 1)
   ;
 }

 FUNC_1();
 FUNC_0();

 return;
}
