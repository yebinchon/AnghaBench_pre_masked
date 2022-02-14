
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int currPos; } ;
struct TYPE_7__ {int opaque; } ;
typedef int ScanDirection ;
typedef TYPE_1__* IndexScanDesc ;
typedef int BlockNumber ;
typedef TYPE_2__* BTScanOpaque ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(IndexScanDesc VAR_0, BlockNumber VAR_1, ScanDirection VAR_2)
{
 BTScanOpaque VAR_3 = (BTScanOpaque) VAR_0->opaque;

 FUNC_1(VAR_3, VAR_2);

 if (!FUNC_2(VAR_0, VAR_1, VAR_2))
  return 0;


 FUNC_0(VAR_0, &VAR_3->currPos);

 return 1;
}
