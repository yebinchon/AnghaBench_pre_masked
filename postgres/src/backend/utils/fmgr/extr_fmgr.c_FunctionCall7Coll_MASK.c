
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ isnull; TYPE_1__* args; } ;
struct TYPE_10__ {int fn_oid; } ;
struct TYPE_9__ {int isnull; void* value; } ;
typedef int Oid ;
typedef TYPE_2__ FmgrInfo ;
typedef void* Datum ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__,TYPE_2__*,int,int ,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_3__* VAR_1 ;

Datum
FUNC_4(FmgrInfo *VAR_2, Oid VAR_3, Datum VAR_4, Datum VAR_5,
      Datum VAR_6, Datum VAR_7, Datum VAR_8,
      Datum VAR_9, Datum VAR_10)
{
 FUNC_2(VAR_1, 7);
 Datum VAR_11;

 FUNC_1(*VAR_1, VAR_2, 7, VAR_3, ((void*)0), ((void*)0));

 VAR_1->args[0].value = VAR_4;
 VAR_1->args[0].isnull = 0;
 VAR_1->args[1].value = VAR_5;
 VAR_1->args[1].isnull = 0;
 VAR_1->args[2].value = VAR_6;
 VAR_1->args[2].isnull = 0;
 VAR_1->args[3].value = VAR_7;
 VAR_1->args[3].isnull = 0;
 VAR_1->args[4].value = VAR_8;
 VAR_1->args[4].isnull = 0;
 VAR_1->args[5].value = VAR_9;
 VAR_1->args[5].isnull = 0;
 VAR_1->args[6].value = VAR_10;
 VAR_1->args[6].isnull = 0;

 VAR_11 = FUNC_0(VAR_1);


 if (VAR_1->isnull)
  FUNC_3(VAR_0, "function %u returned NULL", VAR_2->fn_oid);

 return VAR_11;
}
