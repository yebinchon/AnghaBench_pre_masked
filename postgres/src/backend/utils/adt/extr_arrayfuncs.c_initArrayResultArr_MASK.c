
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int private_cxt; void* element_type; void* array_type; int mcontext; } ;
typedef void* Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ ArrayBuildStateArr ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (void*) ;

ArrayBuildStateArr *
FUNC_8(Oid VAR_3, Oid VAR_4, MemoryContext VAR_5,
       bool VAR_6)
{
 ArrayBuildStateArr *VAR_7;
 MemoryContext VAR_8 = VAR_5;


 if (!FUNC_2(VAR_4))
 {
  VAR_4 = FUNC_7(VAR_3);

  if (!FUNC_2(VAR_4))
   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      FUNC_5("data type %s is not an array type",
       FUNC_6(VAR_3))));
 }


 if (VAR_6)
  VAR_8 = FUNC_0(VAR_5,
           "accumArrayResultArr",
           VAR_0);


 VAR_7 = (ArrayBuildStateArr *)
  FUNC_1(VAR_8, sizeof(ArrayBuildStateArr));
 VAR_7->mcontext = VAR_8;
 VAR_7->private_cxt = VAR_6;


 VAR_7->array_type = VAR_3;
 VAR_7->element_type = VAR_4;

 return VAR_7;
}
