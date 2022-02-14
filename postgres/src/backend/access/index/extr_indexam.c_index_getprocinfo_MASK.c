
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_10__ {scalar_t__ fn_oid; } ;
struct TYPE_9__ {int rd_indexcxt; int * rd_support; TYPE_3__* rd_supportinfo; TYPE_1__* rd_indam; } ;
struct TYPE_8__ {int amsupport; } ;
typedef TYPE_2__* Relation ;
typedef int RegProcedure ;
typedef TYPE_3__ FmgrInfo ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int,int,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ) ;

FmgrInfo *
FUNC_5(Relation VAR_2,
      AttrNumber VAR_3,
      uint16 VAR_4)
{
 FmgrInfo *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->rd_indam->amsupport;

 FUNC_0(VAR_4 > 0 && VAR_4 <= (uint16) VAR_6);

 VAR_7 = (VAR_6 * (VAR_3 - 1)) + (VAR_4 - 1);

 VAR_5 = VAR_2->rd_supportinfo;

 FUNC_0(VAR_5 != ((void*)0));

 VAR_5 += VAR_7;


 if (VAR_5->fn_oid == VAR_1)
 {
  RegProcedure *VAR_8 = VAR_2->rd_support;
  RegProcedure VAR_9;

  FUNC_0(VAR_8 != ((void*)0));

  VAR_9 = VAR_8[VAR_7];







  if (!FUNC_1(VAR_9))
   FUNC_3(VAR_0, "missing support function %d for attribute %d of index \"%s\"",
     VAR_4, VAR_3, FUNC_2(VAR_2));

  FUNC_4(VAR_9, VAR_5, VAR_2->rd_indexcxt);
 }

 return VAR_5;
}
