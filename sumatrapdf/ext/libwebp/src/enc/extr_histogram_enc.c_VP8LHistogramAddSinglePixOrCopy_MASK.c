
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * distance_; int * literal_; int * blue_; int * red_; int * alpha_; } ;
typedef TYPE_1__ VP8LHistogram ;
typedef int PixOrCopy ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const* const) ;
 int FUNC_1 (int const* const) ;
 scalar_t__ FUNC_2 (int const* const) ;
 scalar_t__ FUNC_3 (int const* const) ;
 int FUNC_4 (int const* const) ;
 size_t FUNC_5 (int const* const,int) ;
 int FUNC_6 (int,int*,int*) ;

void FUNC_7(VP8LHistogram* const VAR_2,
                                     const PixOrCopy* const VAR_3,
                                     int (*const VAR_4)(int, int),
                                     int VAR_5) {
  if (FUNC_3(VAR_3)) {
    ++VAR_2->alpha_[FUNC_5(VAR_3, 3)];
    ++VAR_2->red_[FUNC_5(VAR_3, 2)];
    ++VAR_2->literal_[FUNC_5(VAR_3, 1)];
    ++VAR_2->blue_[FUNC_5(VAR_3, 0)];
  } else if (FUNC_2(VAR_3)) {
    const int VAR_6 =
        VAR_1 + VAR_0 + FUNC_0(VAR_3);
    ++VAR_2->literal_[VAR_6];
  } else {
    int VAR_7, VAR_8;
    FUNC_6(FUNC_4(VAR_3), &VAR_7, &VAR_8);
    ++VAR_2->literal_[VAR_1 + VAR_7];
    if (VAR_4 == ((void*)0)) {
      FUNC_6(FUNC_1(VAR_3), &VAR_7, &VAR_8);
    } else {
      FUNC_6(
          VAR_4(VAR_5, FUNC_1(VAR_3)),
          &VAR_7, &VAR_8);
    }
    ++VAR_2->distance_[VAR_7];
  }
}
