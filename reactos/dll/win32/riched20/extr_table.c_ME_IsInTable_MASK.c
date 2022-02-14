
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int dwMask; int wEffects; } ;
struct TYPE_8__ {TYPE_3__ fmt; } ;
struct TYPE_9__ {TYPE_1__ para; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ member; } ;
typedef TYPE_3__ PARAFORMAT2 ;
typedef TYPE_4__ ME_DisplayItem ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

BOOL FUNC_1(ME_DisplayItem *VAR_5)
{
  PARAFORMAT2 *VAR_6;
  if (!VAR_5)
    return VAR_0;
  if (VAR_5->type == VAR_4)
    VAR_5 = FUNC_0(VAR_5);
  if (VAR_5->type != VAR_3)
    return VAR_0;
  VAR_6 = &VAR_5->member.para.fmt;
  return VAR_6->dwMask & VAR_2 && VAR_6->wEffects & VAR_1;
}
