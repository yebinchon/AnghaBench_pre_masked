
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* tuning; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_8__ {int refs; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0)
{
 if (!VAR_0)
  return;
 if (FUNC_0(VAR_0, VAR_0->tuning, &VAR_0->tuning->refs))
 {
  FUNC_1(VAR_0, VAR_0->tuning);
 }
}
