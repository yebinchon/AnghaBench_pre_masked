
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* fn_extra; int fn_mcxt; } ;
struct TYPE_9__ {int element_type; } ;
struct TYPE_8__ {TYPE_3__* flinfo; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_1__* FunctionCallInfo ;
typedef int ExpandedArrayHeader ;
typedef TYPE_2__ ArrayMetaState ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int,TYPE_2__*) ;
 int * FUNC_6 (int ,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,int) ;

__attribute__((used)) static ExpandedArrayHeader *
FUNC_12(FunctionCallInfo VAR_5, int VAR_6)
{
 ExpandedArrayHeader *VAR_7;
 Oid VAR_8;
 ArrayMetaState *VAR_9;
 MemoryContext VAR_10;


 VAR_9 = (ArrayMetaState *) VAR_5->flinfo->fn_extra;
 if (VAR_9 == ((void*)0))
 {
  VAR_9 = (ArrayMetaState *)
   FUNC_1(VAR_5->flinfo->fn_mcxt,
          sizeof(ArrayMetaState));
  VAR_9->element_type = VAR_4;
  VAR_5->flinfo->fn_extra = VAR_9;
 }


 if (!FUNC_0(VAR_5, &VAR_10))
  VAR_10 = VAR_0;


 if (!FUNC_4(VAR_6))
 {
  MemoryContext VAR_11 = FUNC_2(VAR_10);

  VAR_7 = FUNC_5(VAR_6, VAR_9);
  FUNC_2(VAR_11);
 }
 else
 {

  Oid VAR_12 = FUNC_11(VAR_5->flinfo, VAR_6);

  if (!FUNC_3(VAR_12))
   FUNC_7(VAR_3,
     (FUNC_8(VAR_2),
      FUNC_9("could not determine input data type")));
  VAR_8 = FUNC_10(VAR_12);
  if (!FUNC_3(VAR_8))
   FUNC_7(VAR_3,
     (FUNC_8(VAR_1),
      FUNC_9("input data type is not an array")));

  VAR_7 = FUNC_6(VAR_8,
            VAR_10,
            VAR_9);
 }

 return VAR_7;
}
