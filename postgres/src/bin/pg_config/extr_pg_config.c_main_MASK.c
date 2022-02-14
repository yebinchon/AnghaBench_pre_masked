
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* switchname; int configname; } ;
struct TYPE_5__ {char* name; char* setting; } ;
typedef TYPE_1__ ConfigData ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*,...) ;
 TYPE_1__* FUNC_6 (char*,size_t*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 () ;
 TYPE_3__* VAR_1 ;
 int FUNC_9 (char*,char*,char*) ;
 char* VAR_2 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,TYPE_1__*,size_t) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (char*,char*) ;

int
FUNC_13(int VAR_4, char **VAR_5)
{
 ConfigData *VAR_6;
 size_t VAR_7;
 char VAR_8[VAR_0];
 int VAR_9;
 int VAR_10;

 FUNC_10(VAR_5[0], FUNC_0("pg_config"));

 VAR_2 = FUNC_7(VAR_5[0]);


 for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++)
 {
  if (FUNC_12(VAR_5[VAR_9], "--help") == 0 || FUNC_12(VAR_5[VAR_9], "-?") == 0)
  {
   FUNC_8();
   FUNC_3(0);
  }
 }

 if (FUNC_4(VAR_5[0], VAR_8) < 0)
 {
  FUNC_5(VAR_3, FUNC_1("%s: could not find own program executable\n"), VAR_2);
  FUNC_3(1);
 }

 VAR_6 = FUNC_6(VAR_8, &VAR_7);

 if (VAR_4 < 2)
 {
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_9("%s = %s\n", VAR_6[VAR_9].name, VAR_6[VAR_9].setting);
  FUNC_3(0);
 }


 for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++)
 {
  for (VAR_10 = 0; VAR_1[VAR_10].switchname != ((void*)0); VAR_10++)
  {
   if (FUNC_12(VAR_5[VAR_9], VAR_1[VAR_10].switchname) == 0)
   {
    FUNC_11(VAR_1[VAR_10].configname,
        VAR_6, VAR_7);
    break;
   }
  }
  if (VAR_1[VAR_10].switchname == ((void*)0))
  {
   FUNC_5(VAR_3, FUNC_1("%s: invalid argument: %s\n"),
     VAR_2, VAR_5[VAR_9]);
   FUNC_2();
   FUNC_3(1);
  }
 }

 return 0;
}
