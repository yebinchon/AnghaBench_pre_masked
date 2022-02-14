
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int isReset; int name; TYPE_1__* methods; } ;
struct TYPE_8__ {void* (* alloc ) (TYPE_2__*,int ) ;} ;
typedef int Size ;
typedef TYPE_2__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,void*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_12 (int ) ;

void *
FUNC_13(MemoryContext VAR_3, Size VAR_4)
{
 void *VAR_5;

 FUNC_1(FUNC_3(VAR_3));
 FUNC_2(VAR_3);

 if (!FUNC_0(VAR_4))
  FUNC_6(VAR_1, "invalid memory alloc request size %zu", VAR_4);

 VAR_3->isReset = 0;

 VAR_5 = VAR_3->methods->alloc(VAR_3, VAR_4);
 if (FUNC_12(VAR_5 == ((void*)0)))
 {
  FUNC_4(VAR_2);







  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_10("out of memory"),
     FUNC_9("Failed on request of size %zu in memory context \"%s\".",
         VAR_4, VAR_3->name)));
 }

 FUNC_5(VAR_3, VAR_5, VAR_4);

 return VAR_5;
}
