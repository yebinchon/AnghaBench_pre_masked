
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nFlags; scalar_t__ style; } ;
typedef TYPE_1__ ME_Run ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOL FUNC_0(const ME_Run *VAR_4, const ME_Run *VAR_5)
{
  if ((VAR_4->nFlags | VAR_5->nFlags) & VAR_1)
    return VAR_0;
  if (VAR_4->style != VAR_5->style)
    return VAR_0;
  if ((VAR_4->nFlags & VAR_2) != (VAR_5->nFlags & VAR_2))
    return VAR_0;
  return VAR_3;
}
