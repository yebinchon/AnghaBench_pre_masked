
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__** commands; } ;
struct TYPE_10__ {int id; int* prepared; size_t use_file; int command; int ecnt; int con; } ;
struct TYPE_9__ {char** argv; scalar_t__ type; scalar_t__ argc; } ;
typedef int PGresult ;
typedef TYPE_1__ Command ;
typedef TYPE_2__ CState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,char*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char const*,scalar_t__,int *,char const**,int *,int *,int ) ;
 int FUNC_6 (int ,char*,scalar_t__,char const**,int *,int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_7 (TYPE_2__*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,char const**) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*,size_t,int) ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static bool
FUNC_13(CState *VAR_11, Command *VAR_12)
{
 int VAR_13;

 if (VAR_8 == VAR_5)
 {
  char *VAR_14;

  VAR_14 = FUNC_11(VAR_12->argv[0]);
  VAR_14 = FUNC_7(VAR_11, VAR_14);

  if (VAR_7)
   FUNC_8(VAR_10, "client %d sending %s\n", VAR_11->id, VAR_14);
  VAR_13 = FUNC_4(VAR_11->con, VAR_14);
  FUNC_9(VAR_14);
 }
 else if (VAR_8 == VAR_3)
 {
  const char *VAR_15 = VAR_12->argv[0];
  const char *VAR_16[VAR_0];

  FUNC_10(VAR_11, VAR_12, VAR_16);

  if (VAR_7)
   FUNC_8(VAR_10, "client %d sending %s\n", VAR_11->id, VAR_15);
  VAR_13 = FUNC_5(VAR_11->con, VAR_15, VAR_12->argc - 1,
         ((void*)0), VAR_16, ((void*)0), ((void*)0), 0);
 }
 else if (VAR_8 == VAR_4)
 {
  char VAR_17[VAR_1];
  const char *VAR_18[VAR_0];

  if (!VAR_11->prepared[VAR_11->use_file])
  {
   int VAR_19;
   Command **VAR_20 = VAR_9[VAR_11->use_file].commands;

   for (VAR_19 = 0; VAR_20[VAR_19] != ((void*)0); VAR_19++)
   {
    PGresult *VAR_21;
    char VAR_22[VAR_1];

    if (VAR_20[VAR_19]->type != VAR_6)
     continue;
    FUNC_12(VAR_22, VAR_11->use_file, VAR_19);
    VAR_21 = FUNC_2(VAR_11->con, VAR_22,
        VAR_20[VAR_19]->argv[0], VAR_20[VAR_19]->argc - 1, ((void*)0));
    if (FUNC_3(VAR_21) != VAR_2)
     FUNC_8(VAR_10, "%s", FUNC_1(VAR_11->con));
    FUNC_0(VAR_21);
   }
   VAR_11->prepared[VAR_11->use_file] = 1;
  }

  FUNC_10(VAR_11, VAR_12, VAR_18);
  FUNC_12(VAR_17, VAR_11->use_file, VAR_11->command);

  if (VAR_7)
   FUNC_8(VAR_10, "client %d sending %s\n", VAR_11->id, VAR_17);
  VAR_13 = FUNC_6(VAR_11->con, VAR_17, VAR_12->argc - 1,
        VAR_18, ((void*)0), ((void*)0), 0);
 }
 else
  VAR_13 = 0;

 if (VAR_13 == 0)
 {
  if (VAR_7)
   FUNC_8(VAR_10, "client %d could not send %s\n",
     VAR_11->id, VAR_12->argv[0]);
  VAR_11->ecnt++;
  return 0;
 }
 else
  return 1;
}
