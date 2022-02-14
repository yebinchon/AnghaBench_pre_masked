
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int fn_nargs; } ;
struct fp_info {int * argtypes; TYPE_1__ flinfo; } ;
typedef int int16 ;
struct TYPE_13__ {int nargs; TYPE_2__* args; } ;
struct TYPE_12__ {scalar_t__ cursor; scalar_t__ len; } ;
struct TYPE_11__ {int isnull; void* value; } ;
typedef TYPE_3__ StringInfoData ;
typedef int StringInfo ;
typedef int Oid ;
typedef TYPE_4__* FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int16
FUNC_10(StringInfo VAR_4, struct fp_info *VAR_5,
       FunctionCallInfo VAR_6)
{
 int VAR_7;
 int VAR_8;
 StringInfoData VAR_9;

 VAR_7 = FUNC_8(VAR_4, 4);

 if (VAR_5->flinfo.fn_nargs != VAR_7 || VAR_7 > VAR_3)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("function call message contains %d arguments but function requires %d",
      VAR_7, VAR_5->flinfo.fn_nargs)));

 VAR_6->nargs = VAR_7;

 FUNC_6(&VAR_9);
 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
 {
  int VAR_10;
  Oid VAR_11;
  Oid VAR_12;

  FUNC_5(VAR_5->argtypes[VAR_8], &VAR_11, &VAR_12);

  VAR_10 = FUNC_8(VAR_4, 4);
  if (VAR_10 == -1)
  {
   VAR_6->args[VAR_8].isnull = 1;
   VAR_6->args[VAR_8].value = FUNC_0(VAR_11, ((void*)0),
                 VAR_12, -1);
   continue;
  }
  VAR_6->args[VAR_8].isnull = 0;
  if (VAR_10 < 0)
   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("invalid argument size %d in function call message",
       VAR_10)));


  FUNC_9(&VAR_9);
  FUNC_1(&VAR_9,
          FUNC_7(VAR_4, VAR_10),
          VAR_10);

  VAR_6->args[VAR_8].value = FUNC_0(VAR_11, &VAR_9,
                VAR_12, -1);


  if (VAR_9.cursor != VAR_9.len)
   FUNC_2(VAR_2,
     (FUNC_3(VAR_0),
      FUNC_4("incorrect binary data format in function argument %d",
       VAR_8 + 1)));
 }


 return 1;
}
