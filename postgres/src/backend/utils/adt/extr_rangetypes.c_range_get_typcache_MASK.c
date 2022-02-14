
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type_id; int * rngelemtype; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_9__ {TYPE_1__* flinfo; } ;
struct TYPE_7__ {void* fn_extra; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__,int ) ;

TypeCacheEntry *
FUNC_2(FunctionCallInfo VAR_2, Oid VAR_3)
{
 TypeCacheEntry *VAR_4 = (TypeCacheEntry *) VAR_2->flinfo->fn_extra;

 if (VAR_4 == ((void*)0) ||
  VAR_4->type_id != VAR_3)
 {
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  if (VAR_4->rngelemtype == ((void*)0))
   FUNC_0(VAR_0, "type %u is not a range type", VAR_3);
  VAR_2->flinfo->fn_extra = (void *) VAR_4;
 }

 return VAR_4;
}
