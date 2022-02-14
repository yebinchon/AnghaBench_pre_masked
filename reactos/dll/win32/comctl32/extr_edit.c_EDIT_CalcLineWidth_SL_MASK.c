
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ text_width; scalar_t__ ssa; } ;
struct TYPE_6__ {scalar_t__ cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(EDITSTATE *VAR_0)
{
 FUNC_0(VAR_0, ((void*)0), 0);
 if (VAR_0->ssa)
 {
  const SIZE *VAR_1;
  VAR_1 = FUNC_1(VAR_0->ssa);
  VAR_0->text_width = VAR_1->cx;
 }
 else
  VAR_0->text_width = 0;
}
