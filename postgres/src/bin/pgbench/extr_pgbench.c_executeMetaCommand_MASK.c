
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_12__ {TYPE_1__** commands; } ;
struct TYPE_11__ {size_t use_file; size_t command; int id; int cstack; scalar_t__ sleep_until; } ;
struct TYPE_10__ {scalar_t__ type; int argc; char** argv; scalar_t__ meta; int * expr; } ;
typedef int PgBenchValue ;
typedef int PgBenchExpr ;
typedef int ConnectionStateEnum ;
typedef TYPE_1__ Command ;
typedef TYPE_2__ CState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (TYPE_2__*,char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (TYPE_2__*,int *,int *) ;
 int FUNC_11 (TYPE_2__*,int,char**,int*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (TYPE_2__*,char*,char*,int *) ;
 int FUNC_14 (TYPE_2__*,char*,char**,int) ;
 TYPE_3__* VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static ConnectionStateEnum
FUNC_16(CState *VAR_15, instr_time *VAR_16)
{
 Command *VAR_17 = VAR_13[VAR_15->use_file].commands[VAR_15->command];
 int VAR_18;
 char **VAR_19;

 FUNC_0(VAR_17 != ((void*)0) && VAR_17->type == VAR_3);

 VAR_18 = VAR_17->argc;
 VAR_19 = VAR_17->argv;

 if (VAR_12)
 {
  FUNC_12(VAR_14, "client %d executing \\%s", VAR_15->id, VAR_19[0]);
  for (int VAR_20 = 1; VAR_20 < VAR_18; VAR_20++)
   FUNC_12(VAR_14, " %s", VAR_19[VAR_20]);
  FUNC_12(VAR_14, "\n");
 }

 if (VAR_17->meta == VAR_11)
 {
  int VAR_21;







  if (!FUNC_11(VAR_15, VAR_18, VAR_19, &VAR_21))
  {
   FUNC_4(VAR_15, "sleep", "execution of meta-command failed");
   return VAR_0;
  }

  FUNC_2(*VAR_16);
  VAR_15->sleep_until = FUNC_1(*VAR_16) + VAR_21;
  return VAR_2;
 }
 else if (VAR_17->meta == VAR_8)
 {
  PgBenchExpr *VAR_22 = VAR_17->expr;
  PgBenchValue VAR_23;

  if (!FUNC_10(VAR_15, VAR_22, &VAR_23))
  {
   FUNC_4(VAR_15, VAR_19[0], "evaluation of meta-command failed");
   return VAR_0;
  }

  if (!FUNC_13(VAR_15, VAR_19[0], VAR_19[1], &VAR_23))
  {
   FUNC_4(VAR_15, "set", "assignment of meta-command failed");
   return VAR_0;
  }
 }
 else if (VAR_17->meta == VAR_7)
 {

  PgBenchExpr *VAR_24 = VAR_17->expr;
  PgBenchValue VAR_25;
  bool VAR_26;

  if (!FUNC_10(VAR_15, VAR_24, &VAR_25))
  {
   FUNC_4(VAR_15, VAR_19[0], "evaluation of meta-command failed");
   return VAR_0;
  }

  VAR_26 = FUNC_15(&VAR_25);
  FUNC_9(VAR_15->cstack, VAR_26 ? 128 : 131);
 }
 else if (VAR_17->meta == VAR_4)
 {

  PgBenchExpr *VAR_27 = VAR_17->expr;
  PgBenchValue VAR_28;
  bool VAR_29;

  if (FUNC_6(VAR_15->cstack) == 128)
  {

   FUNC_7(VAR_15->cstack, 130);
   return VAR_1;
  }

  if (!FUNC_10(VAR_15, VAR_27, &VAR_28))
  {
   FUNC_4(VAR_15, VAR_19[0], "evaluation of meta-command failed");
   return VAR_0;
  }

  VAR_29 = FUNC_15(&VAR_28);
  FUNC_0(FUNC_6(VAR_15->cstack) == 131);
  FUNC_7(VAR_15->cstack, VAR_29 ? 128 : 131);
 }
 else if (VAR_17->meta == VAR_5)
 {
  switch (FUNC_6(VAR_15->cstack))
  {
   case 128:
    FUNC_7(VAR_15->cstack, 133);
    break;
   case 131:
   case 130:
   case 129:
   case 132:
   case 133:
   default:

    FUNC_0(0);
  }
 }
 else if (VAR_17->meta == VAR_6)
 {
  FUNC_0(!FUNC_5(VAR_15->cstack));
  FUNC_8(VAR_15->cstack);
 }
 else if (VAR_17->meta == VAR_9)
 {
  if (!FUNC_14(VAR_15, VAR_19[1], VAR_19 + 2, VAR_18 - 2))
  {
   FUNC_4(VAR_15, "setshell", "execution of meta-command failed");
   return VAR_0;
  }
 }
 else if (VAR_17->meta == VAR_10)
 {
  if (!FUNC_14(VAR_15, ((void*)0), VAR_19 + 1, VAR_18 - 1))
  {
   FUNC_4(VAR_15, "shell", "execution of meta-command failed");
   return VAR_0;
  }
 }





 FUNC_3(*VAR_16);

 return VAR_1;
}
