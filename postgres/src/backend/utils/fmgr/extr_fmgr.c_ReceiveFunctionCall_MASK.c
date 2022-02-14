
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_11__ {scalar_t__ isnull; TYPE_1__* args; } ;
struct TYPE_10__ {int fn_oid; scalar_t__ fn_strict; } ;
struct TYPE_9__ {int isnull; int value; } ;
typedef int * StringInfo ;
typedef int Oid ;
typedef TYPE_2__ FmgrInfo ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__,TYPE_2__*,int,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;
 TYPE_3__* VAR_2 ;

Datum
FUNC_7(FmgrInfo *VAR_3, StringInfo VAR_4,
     Oid VAR_5, int32 VAR_6)
{
 FUNC_3(VAR_2, 3);
 Datum VAR_7;

 if (VAR_4 == ((void*)0) && VAR_3->fn_strict)
  return (Datum) 0;

 FUNC_1(*VAR_2, VAR_3, 3, VAR_1, ((void*)0), ((void*)0));

 VAR_2->args[0].value = FUNC_5(VAR_4);
 VAR_2->args[0].isnull = 0;
 VAR_2->args[1].value = FUNC_4(VAR_5);
 VAR_2->args[1].isnull = 0;
 VAR_2->args[2].value = FUNC_2(VAR_6);
 VAR_2->args[2].isnull = 0;

 VAR_7 = FUNC_0(VAR_2);


 if (VAR_4 == ((void*)0))
 {
  if (!VAR_2->isnull)
   FUNC_6(VAR_0, "receive function %u returned non-NULL",
     VAR_3->fn_oid);
 }
 else
 {
  if (VAR_2->isnull)
   FUNC_6(VAR_0, "receive function %u returned NULL",
     VAR_3->fn_oid);
 }

 return VAR_7;
}
