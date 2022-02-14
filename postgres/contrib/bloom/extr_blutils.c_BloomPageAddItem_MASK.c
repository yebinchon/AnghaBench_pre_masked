
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ maxoff; } ;
struct TYPE_9__ {int sizeOfBloomTuple; } ;
struct TYPE_8__ {scalar_t__ pd_lower; scalar_t__ pd_upper; } ;
typedef scalar_t__ Pointer ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef int BloomTuple ;
typedef TYPE_2__ BloomState ;
typedef TYPE_3__* BloomPageOpaque ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int * FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;

bool
FUNC_7(BloomState *VAR_0, Page VAR_1, BloomTuple *VAR_2)
{
 BloomTuple *VAR_3;
 BloomPageOpaque VAR_4;
 Pointer VAR_5;


 FUNC_0(!FUNC_5(VAR_1) && !FUNC_4(VAR_1));


 if (FUNC_1(VAR_0, VAR_1) < VAR_0->sizeOfBloomTuple)
  return 0;


 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_4->maxoff + 1);
 FUNC_6((Pointer) VAR_3, (Pointer) VAR_2, VAR_0->sizeOfBloomTuple);


 VAR_4->maxoff++;
 VAR_5 = (Pointer) FUNC_3(VAR_0, VAR_1, VAR_4->maxoff + 1);
 ((PageHeader) VAR_1)->pd_lower = VAR_5 - VAR_1;


 FUNC_0(((PageHeader) VAR_1)->pd_lower <= ((PageHeader) VAR_1)->pd_upper);

 return 1;
}
