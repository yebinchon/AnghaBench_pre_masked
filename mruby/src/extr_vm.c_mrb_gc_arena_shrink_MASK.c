
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct RBasic {int dummy; } ;
struct TYPE_6__ {int arena_capa; struct RBasic** arena; } ;
struct TYPE_5__ {TYPE_2__ gc; } ;
typedef TYPE_1__ mrb_state ;
typedef TYPE_2__ mrb_gc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct RBasic**,int) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, int VAR_2)
{
  mrb_gc *VAR_3 = &VAR_1->gc;
  int VAR_4 = VAR_3->arena_capa;

  if (VAR_2 < VAR_4 / 4) {
    VAR_4 >>= 2;
    if (VAR_4 < VAR_0) {
      VAR_4 = VAR_0;
    }
    if (VAR_4 != VAR_3->arena_capa) {
      VAR_3->arena = (struct RBasic**)FUNC_0(VAR_1, VAR_3->arena, sizeof(struct RBasic*)*VAR_4);
      VAR_3->arena_capa = VAR_4;
    }
  }
}
