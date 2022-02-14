
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct RBasic {int dummy; } ;
struct TYPE_7__ {int arena_err; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_8__ {scalar_t__ arena_idx; int arena_capa; struct RBasic** arena; } ;
typedef TYPE_2__ mrb_gc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct RBasic**,int) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_1, mrb_gc *VAR_2, struct RBasic *VAR_3)
{







  if (VAR_2->arena_idx >= VAR_2->arena_capa) {

    VAR_2->arena_capa = (int)(VAR_2->arena_capa * 3 / 2);
    VAR_2->arena = (struct RBasic**)FUNC_2(VAR_1, VAR_2->arena, sizeof(struct RBasic*)*VAR_2->arena_capa);
  }

  VAR_2->arena[VAR_2->arena_idx++] = VAR_3;
}
