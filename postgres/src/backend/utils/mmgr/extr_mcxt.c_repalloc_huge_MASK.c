
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; TYPE_1__* methods; int isReset; } ;
struct TYPE_7__ {void* (* realloc ) (TYPE_2__*,void*,int ) ;} ;
typedef int Size ;
typedef TYPE_2__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,void*,void*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (TYPE_2__*,void*,int ) ;
 scalar_t__ FUNC_12 (int ) ;

void *
FUNC_13(void *VAR_3, Size VAR_4)
{
 MemoryContext VAR_5 = FUNC_3(VAR_3);
 void *VAR_6;

 if (!FUNC_0(VAR_4))
  FUNC_6(VAR_1, "invalid memory alloc request size %zu", VAR_4);

 FUNC_2(VAR_5);


 FUNC_1(!VAR_5->isReset);

 VAR_6 = VAR_5->methods->realloc(VAR_5, VAR_3, VAR_4);
 if (FUNC_12(VAR_6 == ((void*)0)))
 {
  FUNC_4(VAR_2);
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_10("out of memory"),
     FUNC_9("Failed on request of size %zu in memory context \"%s\".",
         VAR_4, VAR_5->name)));
 }

 FUNC_5(VAR_5, VAR_3, VAR_6, VAR_4);

 return VAR_6;
}
