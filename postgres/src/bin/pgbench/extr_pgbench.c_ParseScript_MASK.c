
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int promptStatus_t ;
struct TYPE_9__ {scalar_t__ meta; scalar_t__ type; int argc; char** argv; int * varprefix; int * first_line; } ;
struct TYPE_8__ {char const* desc; int weight; TYPE_2__** commands; int stats; } ;
typedef int PsqlScanState ;
typedef scalar_t__ PsqlScanResult ;
typedef TYPE_1__ ParsedScript ;
typedef int PQExpBufferData ;
typedef TYPE_2__ Command ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__) ;
 TYPE_2__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_2__**,int) ;
 void* FUNC_9 (char*) ;
 int VAR_6 ;
 TYPE_2__* FUNC_10 (int ,char const*) ;
 scalar_t__ FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char const*,int ,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char const*,int,int *,int *,char*,int *,int) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void
FUNC_20(const char *VAR_7, const char *VAR_8, int VAR_9)
{
 ParsedScript VAR_10;
 PsqlScanState VAR_11;
 PQExpBufferData VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;


 VAR_13 = 128;


 VAR_10.desc = VAR_8;
 VAR_10.weight = VAR_9;
 VAR_10.commands = (Command **) FUNC_7(sizeof(Command *) * VAR_13);
 FUNC_6(&VAR_10.stats, 0);


 VAR_11 = FUNC_12(&VAR_6);
 FUNC_15(VAR_11, VAR_7, FUNC_17(VAR_7), 0, 1);
 VAR_16 = FUNC_3(VAR_11) - 1;

 FUNC_5(&VAR_12);

 VAR_14 = 0;

 for (;;)
 {
  PsqlScanResult VAR_17;
  promptStatus_t VAR_18;
  Command *VAR_19 = ((void*)0);

  FUNC_16(&VAR_12);
  VAR_15 = FUNC_2(VAR_11, VAR_16);

  VAR_17 = FUNC_11(VAR_11, &VAR_12, &VAR_18);


  VAR_19 = FUNC_1(&VAR_12, VAR_8);


  if (VAR_19)
   VAR_10.commands[VAR_14++] = VAR_19;


  if (VAR_17 == VAR_2)
  {
   VAR_19 = FUNC_10(VAR_11, VAR_8);

   if (VAR_19)
   {




    if (VAR_19->meta == VAR_1)
    {
     Command *VAR_20;

     if (VAR_14 == 0)
      FUNC_18(VAR_8, VAR_15, ((void*)0), ((void*)0),
          "\\gset must follow a SQL command",
          ((void*)0), -1);

     VAR_20 = VAR_10.commands[VAR_14 - 1];

     if (VAR_20->type != VAR_5 ||
      VAR_20->varprefix != ((void*)0))
      FUNC_18(VAR_8, VAR_15, ((void*)0), ((void*)0),
          "\\gset must follow a SQL command",
          VAR_20->first_line, -1);


     if (VAR_19->argc <= 1 || VAR_19->argv[1][0] == '\0')
      VAR_20->varprefix = FUNC_9("");
     else
      VAR_20->varprefix = FUNC_9(VAR_19->argv[1]);


     FUNC_4(VAR_19);

     continue;
    }


    VAR_10.commands[VAR_14++] = VAR_19;
   }
  }






  if (VAR_14 >= VAR_13)
  {
   VAR_13 += 128;
   VAR_10.commands = (Command **)
    FUNC_8(VAR_10.commands, sizeof(Command *) * VAR_13);
  }


  if (VAR_17 == VAR_4 || VAR_17 == VAR_3)
   break;
 }

 VAR_10.commands[VAR_14] = ((void*)0);

 FUNC_0(VAR_10);

 FUNC_19(&VAR_12);
 FUNC_14(VAR_11);
 FUNC_13(VAR_11);
}
