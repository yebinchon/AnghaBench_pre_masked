
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lfFaceName; } ;
typedef TYPE_1__ LOGFONTW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,int) ;

__attribute__((used)) static BOOL FUNC_2(const LOGFONTW *VAR_2, const LOGFONTW *VAR_3)
{
  if (FUNC_1(VAR_2, VAR_3, sizeof(LOGFONTW)-sizeof(VAR_2->lfFaceName)))
    return VAR_0;
  if (FUNC_0(VAR_2->lfFaceName, VAR_3->lfFaceName))
    return VAR_0;
  return VAR_1;
}
