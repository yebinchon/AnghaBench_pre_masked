
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t depth; struct TYPE_4__** dirname; int * dirdesc; } ;
typedef TYPE_1__ pg_tzenum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(pg_tzenum *VAR_0)
{
 while (VAR_0->depth >= 0)
 {
  FUNC_0(VAR_0->dirdesc[VAR_0->depth]);
  FUNC_1(VAR_0->dirname[VAR_0->depth]);
  VAR_0->depth--;
 }
 FUNC_1(VAR_0);
}
