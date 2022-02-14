
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int structure; } ;
struct TYPE_10__ {int defined; TYPE_1__ details; } ;
typedef TYPE_2__ type_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(type_t *VAR_3)
{
  if (FUNC_3(VAR_3) && FUNC_0(VAR_3)) {
    type_t *VAR_4 = FUNC_1(VAR_3);
    FUNC_4(VAR_4);
    if (FUNC_2(VAR_4) == VAR_1 ||
        FUNC_2(VAR_4) == VAR_2 ||
        FUNC_2(VAR_4) == VAR_0)
      VAR_3->details.structure = VAR_4->details.structure;
    VAR_3->defined = VAR_4->defined;
  }
}
