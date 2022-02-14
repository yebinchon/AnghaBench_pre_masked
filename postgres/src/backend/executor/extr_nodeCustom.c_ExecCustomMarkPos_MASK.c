
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* MarkPosCustomScan ) (TYPE_2__*) ;int CustomName; } ;
typedef TYPE_2__ CustomScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(CustomScanState *VAR_2)
{
 if (!VAR_2->methods->MarkPosCustomScan)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("custom scan \"%s\" does not support MarkPos",
      VAR_2->methods->CustomName)));
 VAR_2->methods->MarkPosCustomScan(VAR_2);
}
