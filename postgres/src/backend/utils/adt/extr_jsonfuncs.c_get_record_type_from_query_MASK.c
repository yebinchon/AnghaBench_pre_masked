
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_4__* TupleDesc ;
struct TYPE_10__ {int base_typmod; int base_typid; int tupdesc; } ;
struct TYPE_11__ {TYPE_1__ composite; } ;
struct TYPE_12__ {TYPE_2__ io; } ;
struct TYPE_14__ {TYPE_3__ c; int fn_mcxt; int argtype; } ;
struct TYPE_13__ {int tdtypmod; int tdtypeid; } ;
typedef TYPE_5__ PopulateRecordCache ;
typedef int MemoryContext ;
typedef int FunctionCallInfo ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (int ,int *,TYPE_4__**) ;

__attribute__((used)) static void
FUNC_9(FunctionCallInfo VAR_3,
         const char *VAR_4,
         PopulateRecordCache *VAR_5)
{
 TupleDesc VAR_6;
 MemoryContext VAR_7;

 if (FUNC_8(VAR_3, ((void*)0), &VAR_6) != VAR_2)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),

     FUNC_7("could not determine row type for result of %s",
      VAR_4),
     FUNC_6("Provide a non-null record argument, "
       "or call the function in the FROM clause "
       "using a column definition list.")));

 FUNC_0(VAR_6);
 VAR_5->argtype = VAR_6->tdtypeid;


 if (VAR_5->c.io.composite.tupdesc)
  FUNC_2(VAR_5->c.io.composite.tupdesc);


 VAR_7 = FUNC_3(VAR_5->fn_mcxt);
 VAR_5->c.io.composite.tupdesc = FUNC_1(VAR_6);
 VAR_5->c.io.composite.base_typid = VAR_6->tdtypeid;
 VAR_5->c.io.composite.base_typmod = VAR_6->tdtypmod;
 FUNC_3(VAR_7);
}
