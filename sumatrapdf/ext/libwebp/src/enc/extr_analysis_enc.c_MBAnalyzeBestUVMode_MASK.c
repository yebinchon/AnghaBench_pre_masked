
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VP8Histogram ;
struct TYPE_5__ {scalar_t__ yuv_p_; scalar_t__ yuv_in_; } ;
typedef TYPE_1__ VP8EncIterator ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,scalar_t__,int,int,int *) ;
 int FUNC_4 (TYPE_1__* const) ;
 int FUNC_5 (TYPE_1__* const,int) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_6(VP8EncIterator* const VAR_4) {
  int VAR_5 = VAR_0;
  int VAR_6 = 0;
  int VAR_7 = 0;
  const int VAR_8 = VAR_1;
  int VAR_9;

  FUNC_4(VAR_4);
  for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
    VP8Histogram VAR_10;
    int VAR_11;
    FUNC_2(&VAR_10);
    FUNC_3(VAR_4->yuv_in_ + VAR_2,
                        VAR_4->yuv_p_ + VAR_3[VAR_9],
                        16, 16 + 4 + 4, &VAR_10);
    VAR_11 = FUNC_0(&VAR_10);
    if (FUNC_1(VAR_11, VAR_5)) {
      VAR_5 = VAR_11;
    }

    if (VAR_9 == 0 || VAR_11 < VAR_6) {
      VAR_6 = VAR_11;
      VAR_7 = VAR_9;
    }
  }
  FUNC_5(VAR_4, VAR_7);
  return VAR_5;
}
