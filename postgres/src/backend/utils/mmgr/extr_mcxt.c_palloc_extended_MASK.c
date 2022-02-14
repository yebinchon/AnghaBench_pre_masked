
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
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_2__*,void*,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (char*) ;
 void* FUNC_13 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_14 (int ) ;

void *
FUNC_15(Size VAR_7, int VAR_8)
{

 void *VAR_9;
 MemoryContext VAR_10 = VAR_0;

 FUNC_2(FUNC_5(VAR_10));
 FUNC_3(VAR_10);

 if (((VAR_8 & VAR_3) != 0 && !FUNC_0(VAR_7)) ||
  ((VAR_8 & VAR_3) == 0 && !FUNC_1(VAR_7)))
  FUNC_8(VAR_2, "invalid memory alloc request size %zu", VAR_7);

 VAR_10->isReset = 0;

 VAR_9 = VAR_10->methods->alloc(VAR_10, VAR_7);
 if (FUNC_14(VAR_9 == ((void*)0)))
 {
  if ((VAR_8 & VAR_4) == 0)
  {
   FUNC_6(VAR_6);
   FUNC_9(VAR_2,
     (FUNC_10(VAR_1),
      FUNC_12("out of memory"),
      FUNC_11("Failed on request of size %zu in memory context \"%s\".",
          VAR_7, VAR_10->name)));
  }
  return ((void*)0);
 }

 FUNC_7(VAR_10, VAR_9, VAR_7);

 if ((VAR_8 & VAR_5) != 0)
  FUNC_4(VAR_9, 0, VAR_7);

 return VAR_9;
}
