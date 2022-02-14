
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_11__ {int bd_context; int bd_index; TYPE_1__** bd_info; } ;
struct TYPE_10__ {scalar_t__ fn_oid; } ;
struct TYPE_9__ {int* extra_proc_missing; TYPE_3__* extra_procinfos; } ;
struct TYPE_8__ {scalar_t__ oi_opaque; } ;
typedef TYPE_2__ InclusionOpaque ;
typedef TYPE_3__ FmgrInfo ;
typedef TYPE_4__ BrinDesc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static FmgrInfo *
FUNC_4(BrinDesc *VAR_2, uint16 VAR_3, uint16 VAR_4)
{
 InclusionOpaque *VAR_5;
 uint16 VAR_6 = VAR_4 - VAR_1;





 VAR_5 = (InclusionOpaque *) VAR_2->bd_info[VAR_3 - 1]->oi_opaque;





 if (VAR_5->extra_proc_missing[VAR_6])
  return ((void*)0);

 if (VAR_5->extra_procinfos[VAR_6].fn_oid == VAR_0)
 {
  if (FUNC_0(FUNC_2(VAR_2->bd_index, VAR_3,
            VAR_4)))
  {
   FUNC_1(&VAR_5->extra_procinfos[VAR_6],
         FUNC_3(VAR_2->bd_index, VAR_3, VAR_4),
         VAR_2->bd_context);
  }
  else
  {
   VAR_5->extra_proc_missing[VAR_6] = 1;
   return ((void*)0);
  }
 }

 return &VAR_5->extra_procinfos[VAR_6];
}
