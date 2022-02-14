
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int stats_; } ;
struct TYPE_4__ {TYPE_2__ proba_; } ;
typedef TYPE_1__ VP8Encoder ;
typedef TYPE_2__ VP8EncProba ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(VP8Encoder* const VAR_0) {
  VP8EncProba* const VAR_1 = &VAR_0->proba_;
  FUNC_0(VAR_1->stats_, 0, sizeof(VAR_1->stats_));
}
