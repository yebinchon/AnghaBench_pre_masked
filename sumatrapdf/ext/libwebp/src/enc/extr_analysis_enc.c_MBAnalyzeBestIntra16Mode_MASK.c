
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
 int FUNC_3 (scalar_t__,scalar_t__,int ,int,int *) ;
 scalar_t__* VAR_2 ;
 int FUNC_4 (TYPE_1__* const) ;
 int FUNC_5 (TYPE_1__* const,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_6(VP8EncIterator* const VAR_4) {
  const int VAR_5 = VAR_1;
  int VAR_6;
  int VAR_7 = VAR_0;
  int VAR_8 = 0;

  FUNC_4(VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
    VP8Histogram VAR_9;
    int VAR_10;

    FUNC_2(&VAR_9);
    FUNC_3(VAR_4->yuv_in_ + VAR_3,
                        VAR_4->yuv_p_ + VAR_2[VAR_6],
                        0, 16, &VAR_9);
    VAR_10 = FUNC_0(&VAR_9);
    if (FUNC_1(VAR_10, VAR_7)) {
      VAR_7 = VAR_10;
      VAR_8 = VAR_6;
    }
  }
  FUNC_5(VAR_4, VAR_8);
  return VAR_7;
}
