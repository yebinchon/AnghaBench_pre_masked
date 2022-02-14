
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ relid; } ;
struct TYPE_4__ {scalar_t__ localreloid; scalar_t__ state; scalar_t__ statelsn; } ;
typedef TYPE_1__ LogicalRepRelMapEntry ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_1(LogicalRepRelMapEntry *VAR_4)
{
 if (FUNC_0())
  return VAR_0->relid == VAR_4->localreloid;
 else
  return (VAR_4->state == VAR_1 ||
    (VAR_4->state == VAR_2 &&
     VAR_4->statelsn <= VAR_3));
}
