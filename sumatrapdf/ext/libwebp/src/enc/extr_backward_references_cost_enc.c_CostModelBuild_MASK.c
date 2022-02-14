
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int cur_pos; } ;
typedef TYPE_1__ VP8LRefsCursor ;
struct TYPE_13__ {int distance_; int alpha_; int blue_; int red_; int literal_; int palette_code_bits_; } ;
typedef TYPE_2__ VP8LHistogram ;
typedef int VP8LBackwardRefs ;
struct TYPE_14__ {int distance_; int alpha_; int blue_; int red_; int literal_; } ;
typedef TYPE_3__ CostModel ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__* const) ;
 int FUNC_3 (TYPE_2__* const,int ,int ,int) ;
 int FUNC_4 (TYPE_2__* const,int,int) ;
 int FUNC_5 (int ) ;
 TYPE_1__ FUNC_6 (int const* const) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(CostModel* const VAR_3, int VAR_4, int VAR_5,
                          const VP8LBackwardRefs* const VAR_6) {
  int VAR_7 = 0;
  VP8LRefsCursor VAR_8 = FUNC_6(VAR_6);
  VP8LHistogram* const VAR_9 = FUNC_1(VAR_5);
  if (VAR_9 == ((void*)0)) goto Error;



  FUNC_4(VAR_9, VAR_5, 1);
  while (FUNC_8(&VAR_8)) {
    FUNC_3(VAR_9, VAR_8.cur_pos, VAR_2,
                                    VAR_4);
    FUNC_7(&VAR_8);
  }

  FUNC_0(
      FUNC_5(VAR_9->palette_code_bits_),
      VAR_9->literal_, VAR_3->literal_);
  FUNC_0(
      VAR_1, VAR_9->red_, VAR_3->red_);
  FUNC_0(
      VAR_1, VAR_9->blue_, VAR_3->blue_);
  FUNC_0(
      VAR_1, VAR_9->alpha_, VAR_3->alpha_);
  FUNC_0(
      VAR_0, VAR_9->distance_, VAR_3->distance_);
  VAR_7 = 1;

 Error:
  FUNC_2(VAR_9);
  return VAR_7;
}
