
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int fn_nargs; } ;
struct fp_info {int * argtypes; TYPE_1__ flinfo; } ;
typedef int int16 ;
struct TYPE_17__ {int nargs; TYPE_2__* args; } ;
struct TYPE_16__ {char* data; scalar_t__ cursor; scalar_t__ len; } ;
struct TYPE_15__ {int isnull; int value; } ;
typedef TYPE_3__ StringInfoData ;
typedef TYPE_3__* StringInfo ;
typedef int Oid ;
typedef TYPE_5__* FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,int) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*) ;

__attribute__((used)) static int16
FUNC_15(StringInfo VAR_5, struct fp_info *VAR_6,
       FunctionCallInfo VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int16 *VAR_11 = ((void*)0);
 StringInfoData VAR_12;


 VAR_10 = FUNC_13(VAR_5, 2);
 if (VAR_10 > 0)
 {
  VAR_11 = (int16 *) FUNC_9(VAR_10 * sizeof(int16));
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
   VAR_11[VAR_9] = FUNC_13(VAR_5, 2);
 }

 VAR_8 = FUNC_13(VAR_5, 2);

 if (VAR_6->flinfo.fn_nargs != VAR_8 || VAR_8 > VAR_4)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("function call message contains %d arguments but function requires %d",
      VAR_8, VAR_6->flinfo.fn_nargs)));

 VAR_7->nargs = VAR_8;

 if (VAR_10 > 1 && VAR_10 != VAR_8)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("function call message contains %d argument formats but %d arguments",
      VAR_10, VAR_8)));

 FUNC_8(&VAR_12);




 for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9)
 {
  int VAR_13;
  int16 VAR_14;

  VAR_13 = FUNC_13(VAR_5, 4);
  if (VAR_13 == -1)
  {
   VAR_7->args[VAR_9].isnull = 1;
  }
  else
  {
   VAR_7->args[VAR_9].isnull = 0;
   if (VAR_13 < 0)
    FUNC_3(VAR_3,
      (FUNC_4(VAR_2),
       FUNC_5("invalid argument size %d in function call message",
        VAR_13)));


   FUNC_14(&VAR_12);
   FUNC_2(&VAR_12,
           FUNC_12(VAR_5, VAR_13),
           VAR_13);
  }

  if (VAR_10 > 1)
   VAR_14 = VAR_11[VAR_9];
  else if (VAR_10 > 0)
   VAR_14 = VAR_11[0];
  else
   VAR_14 = 0;

  if (VAR_14 == 0)
  {
   Oid VAR_15;
   Oid VAR_16;
   char *VAR_17;

   FUNC_7(VAR_6->argtypes[VAR_9], &VAR_15, &VAR_16);







   if (VAR_13 == -1)
    VAR_17 = ((void*)0);
   else
    VAR_17 = FUNC_11(VAR_12.data, VAR_13);

   VAR_7->args[VAR_9].value = FUNC_0(VAR_15, VAR_17,
               VAR_16, -1);

   if (VAR_17 && VAR_17 != VAR_12.data)
    FUNC_10(VAR_17);
  }
  else if (VAR_14 == 1)
  {
   Oid VAR_18;
   Oid VAR_19;
   StringInfo VAR_20;


   FUNC_6(VAR_6->argtypes[VAR_9], &VAR_18, &VAR_19);

   if (VAR_13 == -1)
    VAR_20 = ((void*)0);
   else
    VAR_20 = &VAR_12;

   VAR_7->args[VAR_9].value = FUNC_1(VAR_18, VAR_20,
                 VAR_19, -1);


   if (VAR_13 != -1 && VAR_12.cursor != VAR_12.len)
    FUNC_3(VAR_3,
      (FUNC_4(VAR_0),
       FUNC_5("incorrect binary data format in function argument %d",
        VAR_9 + 1)));
  }
  else
   FUNC_3(VAR_3,
     (FUNC_4(VAR_1),
      FUNC_5("unsupported format code: %d", VAR_14)));
 }


 return (int16) FUNC_13(VAR_5, 2);
}
