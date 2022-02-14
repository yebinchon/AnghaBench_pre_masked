
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {TYPE_1__** scanEntry; } ;
struct TYPE_3__ {scalar_t__ predictNumberResult; } ;
typedef TYPE_2__* GinScanKey ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 const GinScanKey VAR_3 = (const GinScanKey) VAR_2;
 int VAR_4 = *(const int *) VAR_0;
 int VAR_5 = *(const int *) VAR_1;
 uint32 VAR_6 = VAR_3->scanEntry[VAR_4]->predictNumberResult;
 uint32 VAR_7 = VAR_3->scanEntry[VAR_5]->predictNumberResult;

 if (VAR_6 < VAR_7)
  return -1;
 else if (VAR_6 == VAR_7)
  return 0;
 else
  return 1;
}
