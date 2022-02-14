
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int VP8RDLevel ;
typedef int VP8ModeScore ;
struct TYPE_21__ {int use_skip_proba_; } ;
struct TYPE_22__ {int rd_opt_level_; TYPE_1__ proba_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_23__ {int bw_; } ;
typedef TYPE_3__ VP8EncIterator ;


 int FUNC_0 (int ,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__* const) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__* const) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *,int const) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_2__* const,TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;

int FUNC_15(VP8Encoder* const VAR_0) {
  VP8EncIterator VAR_1;
  int VAR_2 = FUNC_2(VAR_0);
  if (!VAR_2) return 0;

  FUNC_4(VAR_0);

  FUNC_10(VAR_0, &VAR_1);
  FUNC_7(&VAR_1);
  do {
    VP8ModeScore VAR_3;
    const int VAR_4 = !VAR_0->proba_.use_skip_proba_;
    const VP8RDLevel VAR_5 = VAR_0->rd_opt_level_;

    FUNC_9(&VAR_1, ((void*)0));


    if (!FUNC_6(&VAR_1, &VAR_3, VAR_5) || VAR_4) {
      FUNC_0(VAR_1.bw_, &VAR_1, &VAR_3);
    } else {
      FUNC_3(&VAR_1);
    }
    FUNC_5(&VAR_1);
    FUNC_14(&VAR_1);
    FUNC_8(&VAR_1);
    VAR_2 = FUNC_12(&VAR_1, 20);
    FUNC_13(&VAR_1);
  } while (VAR_2 && FUNC_11(&VAR_1));

  return FUNC_1(&VAR_1, VAR_2);
}
