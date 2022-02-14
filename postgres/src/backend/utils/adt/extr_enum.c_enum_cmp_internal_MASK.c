
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_7__ {int enumtypid; } ;
struct TYPE_6__ {TYPE_1__* flinfo; } ;
struct TYPE_5__ {void* fn_extra; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* FunctionCallInfo ;
typedef TYPE_3__* Form_pg_enum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 int * FUNC_10 (int,int ) ;

__attribute__((used)) static int
FUNC_11(Oid VAR_3, Oid VAR_4, FunctionCallInfo VAR_5)
{
 TypeCacheEntry *VAR_6;
 FUNC_0(VAR_5->flinfo != ((void*)0));


 if (VAR_3 == VAR_4)
  return 0;


 if ((VAR_3 & 1) == 0 && (VAR_4 & 1) == 0)
 {
  if (VAR_3 < VAR_4)
   return -1;
  else
   return 1;
 }


 VAR_6 = (TypeCacheEntry *) VAR_5->flinfo->fn_extra;
 if (VAR_6 == ((void*)0))
 {
  HeapTuple VAR_7;
  Form_pg_enum VAR_8;
  Oid VAR_9;


  VAR_7 = FUNC_5(VAR_0, FUNC_3(VAR_3));
  if (!FUNC_2(VAR_7))
   FUNC_7(VAR_2,
     (FUNC_8(VAR_1),
      FUNC_9("invalid internal value for enum: %u",
       VAR_3)));
  VAR_8 = (Form_pg_enum) FUNC_1(VAR_7);
  VAR_9 = VAR_8->enumtypid;
  FUNC_4(VAR_7);

  VAR_6 = FUNC_10(VAR_9, 0);
  VAR_5->flinfo->fn_extra = (void *) VAR_6;
 }


 return FUNC_6(VAR_6, VAR_3, VAR_4);
}
