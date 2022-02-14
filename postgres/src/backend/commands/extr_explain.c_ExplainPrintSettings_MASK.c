
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct config_generic {char* name; } ;
struct TYPE_11__ {scalar_t__ format; int settings; } ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int,TYPE_2__*) ;
 int FUNC_1 (char*,char*,int,TYPE_2__*) ;
 int FUNC_2 (char*,char*,TYPE_2__*) ;
 char* FUNC_3 (char*,int *,int) ;
 int FUNC_4 (TYPE_1__*,char*,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct config_generic** FUNC_6 (int*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(ExplainState *VAR_1)
{
 int VAR_2;
 struct config_generic **VAR_3;


 if (!VAR_1->settings)
  return;


 VAR_3 = FUNC_6(&VAR_2);


 if (!VAR_2)
  return;

 if (VAR_1->format != VAR_0)
 {
  int VAR_4;

  FUNC_1("Settings", "Settings", 1, VAR_1);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   char *VAR_5;
   struct config_generic *VAR_6 = VAR_3[VAR_4];

   VAR_5 = FUNC_3(VAR_6->name, ((void*)0), 1);

   FUNC_2(VAR_6->name, VAR_5, VAR_1);
  }

  FUNC_0("Settings", "Settings", 1, VAR_1);
 }
 else
 {
  int VAR_7;
  StringInfoData VAR_8;

  FUNC_7(&VAR_8);

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  {
   char *VAR_9;
   struct config_generic *VAR_10 = VAR_3[VAR_7];

   if (VAR_7 > 0)
    FUNC_5(&VAR_8, ", ");

   VAR_9 = FUNC_3(VAR_10->name, ((void*)0), 1);

   if (VAR_9)
    FUNC_4(&VAR_8, "%s = '%s'", VAR_10->name, VAR_9);
   else
    FUNC_4(&VAR_8, "%s = NULL", VAR_10->name);
  }

  if (VAR_2 > 0)
   FUNC_2("Settings", VAR_8.data, VAR_1);
 }
}
