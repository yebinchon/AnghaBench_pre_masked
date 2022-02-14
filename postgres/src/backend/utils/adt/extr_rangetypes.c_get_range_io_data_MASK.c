
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_12__ {scalar_t__ type_id; TYPE_1__* rngelemtype; } ;
struct TYPE_11__ {TYPE_2__* flinfo; } ;
struct TYPE_10__ {int proc; int typiofunc; TYPE_5__* typcache; int typioparam; } ;
struct TYPE_9__ {void* fn_extra; int fn_mcxt; } ;
struct TYPE_8__ {int type_id; } ;
typedef TYPE_3__ RangeIOData ;
typedef scalar_t__ Oid ;
typedef int IOFuncSelector ;
typedef TYPE_4__* FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *,int*,char*,char*,int *,int *) ;
 TYPE_5__* FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static RangeIOData *
FUNC_10(FunctionCallInfo VAR_4, Oid VAR_5, IOFuncSelector VAR_6)
{
 RangeIOData *VAR_7 = (RangeIOData *) VAR_4->flinfo->fn_extra;

 if (VAR_7 == ((void*)0) || VAR_7->typcache->type_id != VAR_5)
 {
  int16 VAR_8;
  bool VAR_9;
  char VAR_10;
  char VAR_11;

  VAR_7 = (RangeIOData *) FUNC_0(VAR_4->flinfo->fn_mcxt,
               sizeof(RangeIOData));
  VAR_7->typcache = FUNC_9(VAR_5, VAR_3);
  if (VAR_7->typcache->rngelemtype == ((void*)0))
   FUNC_2(VAR_1, "type %u is not a range type", VAR_5);


  FUNC_8(VAR_7->typcache->rngelemtype->type_id,
       VAR_6,
       &VAR_8,
       &VAR_9,
       &VAR_10,
       &VAR_11,
       &VAR_7->typioparam,
       &VAR_7->typiofunc);

  if (!FUNC_1(VAR_7->typiofunc))
  {

   if (VAR_6 == VAR_2)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("no binary input function available for type %s",
        FUNC_7(VAR_7->typcache->rngelemtype->type_id))));
   else
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("no binary output function available for type %s",
        FUNC_7(VAR_7->typcache->rngelemtype->type_id))));
  }
  FUNC_6(VAR_7->typiofunc, &VAR_7->proc,
       VAR_4->flinfo->fn_mcxt);

  VAR_4->flinfo->fn_extra = (void *) VAR_7;
 }

 return VAR_7;
}
