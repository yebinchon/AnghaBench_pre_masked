
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* int32 ;
struct TYPE_13__ {int typiofunc; int typioparam; } ;
struct TYPE_11__ {void* element_typmod; int element_type; void* element_info; } ;
struct TYPE_10__ {int * domain_info; void* base_typmod; scalar_t__ base_typid; int * tupdesc; int * record_io; } ;
struct TYPE_9__ {int * domain_info; void* base_io; void* base_typmod; scalar_t__ base_typid; } ;
struct TYPE_12__ {TYPE_3__ array; TYPE_2__ composite; TYPE_1__ domain; } ;
struct TYPE_15__ {TYPE_5__ scalar_io; int typcat; TYPE_4__ io; void* typmod; scalar_t__ typid; } ;
struct TYPE_14__ {scalar_t__ typtype; int typlen; int typelem; } ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_6__* Form_pg_type ;
typedef TYPE_7__ ColumnIOData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,void**) ;
 int FUNC_10 (scalar_t__,scalar_t__*,int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12(ColumnIOData *VAR_10,
      Oid VAR_11,
      int32 VAR_12,
      MemoryContext VAR_13,
      bool VAR_14)
{
 HeapTuple VAR_15;
 Form_pg_type VAR_16;

 VAR_10->typid = VAR_11;
 VAR_10->typmod = VAR_12;

 VAR_15 = FUNC_6(VAR_7, FUNC_3(VAR_11));
 if (!FUNC_1(VAR_15))
  FUNC_7(VAR_0, "cache lookup failed for type %u", VAR_11);

 VAR_16 = (Form_pg_type) FUNC_0(VAR_15);

 if (VAR_16->typtype == VAR_9)
 {




  Oid VAR_17;
  int32 VAR_18 = VAR_12;

  VAR_17 = FUNC_9(VAR_11, &VAR_18);
  if (FUNC_11(VAR_17) == VAR_8)
  {

   VAR_10->typcat = VAR_4;
   VAR_10->io.composite.record_io = ((void*)0);
   VAR_10->io.composite.tupdesc = ((void*)0);
   VAR_10->io.composite.base_typid = VAR_17;
   VAR_10->io.composite.base_typmod = VAR_18;
   VAR_10->io.composite.domain_info = ((void*)0);
  }
  else
  {

   VAR_10->typcat = VAR_5;
   VAR_10->io.domain.base_typid = VAR_17;
   VAR_10->io.domain.base_typmod = VAR_18;
   VAR_10->io.domain.base_io =
    FUNC_2(VAR_13, sizeof(ColumnIOData));
   VAR_10->io.domain.domain_info = ((void*)0);
  }
 }
 else if (VAR_16->typtype == VAR_8 || VAR_11 == VAR_1)
 {
  VAR_10->typcat = VAR_3;
  VAR_10->io.composite.record_io = ((void*)0);
  VAR_10->io.composite.tupdesc = ((void*)0);
  VAR_10->io.composite.base_typid = VAR_11;
  VAR_10->io.composite.base_typmod = VAR_12;
  VAR_10->io.composite.domain_info = ((void*)0);
 }
 else if (VAR_16->typlen == -1 && FUNC_4(VAR_16->typelem))
 {
  VAR_10->typcat = VAR_2;
  VAR_10->io.array.element_info = FUNC_2(VAR_13,
                  sizeof(ColumnIOData));
  VAR_10->io.array.element_type = VAR_16->typelem;

  VAR_10->io.array.element_typmod = VAR_12;
 }
 else
 {
  VAR_10->typcat = VAR_6;
  VAR_14 = 1;
 }


 if (VAR_14)
 {
  Oid VAR_19;

  FUNC_10(VAR_11, &VAR_19, &VAR_10->scalar_io.typioparam);
  FUNC_8(VAR_19, &VAR_10->scalar_io.typiofunc, VAR_13);
 }

 FUNC_5(VAR_15);
}
