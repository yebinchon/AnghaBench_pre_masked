
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int yyscan_t ;
struct TYPE_8__ {int argc; char** argv; scalar_t__ meta; void* first_line; int expr; int stats; int type; } ;
struct TYPE_7__ {int data; } ;
typedef int PsqlScanState ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_2__ Command ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int*) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (int ,char const*,int,int,char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (unsigned char) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (char const*,int,void*,char*,char*,char*,int) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static Command *
FUNC_17(PsqlScanState VAR_12, const char *VAR_13)
{
 Command *VAR_14;
 PQExpBufferData VAR_15;
 int VAR_16;
 int VAR_17[VAR_0];
 int VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_9(&VAR_15);


 VAR_18 = FUNC_6(VAR_12) - 1;
 VAR_19 = FUNC_3(VAR_12, VAR_18);


 if (!FUNC_1(VAR_12, &VAR_15, &VAR_16))
 {
  FUNC_16(&VAR_15);
  return ((void*)0);
 }


 VAR_14 = (Command *) FUNC_12(sizeof(Command));
 VAR_14->type = VAR_1;
 VAR_14->argc = 0;
 FUNC_10(&VAR_14->stats);


 VAR_20 = 0;
 VAR_17[VAR_20] = VAR_16;
 VAR_14->argv[VAR_20++] = FUNC_14(VAR_15.data);
 VAR_14->argc++;


 VAR_14->meta = FUNC_8(VAR_14->argv[0]);

 if (VAR_14->meta == VAR_7 ||
  VAR_14->meta == VAR_6 ||
  VAR_14->meta == VAR_2)
 {
  yyscan_t VAR_21;


  if (VAR_14->meta == VAR_7)
  {
   if (!FUNC_1(VAR_12, &VAR_15, &VAR_16))
    FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
        "missing argument", ((void*)0), -1);

   VAR_17[VAR_20] = VAR_16;
   VAR_14->argv[VAR_20++] = FUNC_14(VAR_15.data);
   VAR_14->argc++;
  }


  VAR_21 = FUNC_5(VAR_12, VAR_13, VAR_19, VAR_18,
           VAR_14->argv[0]);

  if (FUNC_7(VAR_21) != 0)
  {

   FUNC_0(1);
  }

  VAR_14->expr = VAR_11;


  VAR_14->first_line =
   FUNC_4(VAR_12,
            VAR_18,
            FUNC_6(VAR_12),
            1);

  FUNC_2(VAR_21);

  FUNC_16(&VAR_15);

  return VAR_14;
 }


 while (FUNC_1(VAR_12, &VAR_15, &VAR_16))
 {




  if (VAR_20 >= VAR_0)
   FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
       "too many arguments", ((void*)0), -1);

  VAR_17[VAR_20] = VAR_16;
  VAR_14->argv[VAR_20++] = FUNC_14(VAR_15.data);
  VAR_14->argc++;
 }


 VAR_14->first_line =
  FUNC_4(VAR_12,
           VAR_18,
           FUNC_6(VAR_12),
           1);

 if (VAR_14->meta == VAR_10)
 {
  if (VAR_14->argc < 2)
   FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
       "missing argument", ((void*)0), -1);

  if (VAR_14->argc > 3)
   FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
       "too many arguments", ((void*)0),
       VAR_17[3] - VAR_18);







  if (VAR_14->argc == 2 && VAR_14->argv[1][0] != ':')
  {
   char *VAR_22 = VAR_14->argv[1];

   while (FUNC_11((unsigned char) *VAR_22))
    VAR_22++;
   if (*VAR_22)
   {
    VAR_14->argv[2] = VAR_22;
    VAR_17[2] = VAR_17[1] + (VAR_22 - VAR_14->argv[1]);
    VAR_14->argc = 3;
   }
  }

  if (VAR_14->argc == 3)
  {
   if (FUNC_13(VAR_14->argv[2], "us") != 0 &&
    FUNC_13(VAR_14->argv[2], "ms") != 0 &&
    FUNC_13(VAR_14->argv[2], "s") != 0)
    FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
        "unrecognized time unit, must be us, ms or s",
        VAR_14->argv[2], VAR_17[2] - VAR_18);
  }
 }
 else if (VAR_14->meta == VAR_8)
 {
  if (VAR_14->argc < 3)
   FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
       "missing argument", ((void*)0), -1);
 }
 else if (VAR_14->meta == VAR_9)
 {
  if (VAR_14->argc < 2)
   FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
       "missing command", ((void*)0), -1);
 }
 else if (VAR_14->meta == VAR_3 || VAR_14->meta == VAR_4)
 {
  if (VAR_14->argc != 1)
   FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
       "unexpected argument", ((void*)0), -1);
 }
 else if (VAR_14->meta == VAR_5)
 {
  if (VAR_14->argc > 2)
   FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
       "too many arguments", ((void*)0), -1);
 }
 else
 {

  FUNC_15(VAR_13, VAR_19, VAR_14->first_line, VAR_14->argv[0],
      "invalid command", ((void*)0), -1);
 }

 FUNC_16(&VAR_15);

 return VAR_14;
}
