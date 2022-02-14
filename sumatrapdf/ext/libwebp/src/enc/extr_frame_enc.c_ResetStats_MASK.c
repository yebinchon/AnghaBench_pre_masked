
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nb_skip_; } ;
struct TYPE_5__ {TYPE_2__ proba_; } ;
typedef TYPE_1__ VP8Encoder ;
typedef TYPE_2__ VP8EncProba ;


 int FUNC_0 (TYPE_2__* const) ;

__attribute__((used)) static void FUNC_1(VP8Encoder* const VAR_0) {
  VP8EncProba* const VAR_1 = &VAR_0->proba_;
  FUNC_0(VAR_1);
  VAR_1->nb_skip_ = 0;
}
