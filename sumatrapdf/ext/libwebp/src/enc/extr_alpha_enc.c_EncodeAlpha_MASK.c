
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint64_t ;
struct TYPE_5__ {int width; int height; int const a_stride; TYPE_4__* stats; int * a; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_6__ {int* sse_; TYPE_1__* pic_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_7__ {int coded_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const,int const,size_t const,int,int,int const,int,int ** const,size_t* const,TYPE_4__*) ;
 int FUNC_1 (int *,int const,int const,int const,int const*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int const,int *,int const,int const,int const) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned long long,size_t const) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(VP8Encoder* const VAR_4,
                       int VAR_5, int VAR_6, int VAR_7,
                       int VAR_8,
                       uint8_t** const VAR_9, size_t* const VAR_10) {
  const WebPPicture* const VAR_11 = VAR_4->pic_;
  const int VAR_12 = VAR_11->width;
  const int VAR_13 = VAR_11->height;

  uint8_t* VAR_14 = ((void*)0);
  const size_t VAR_15 = VAR_12 * VAR_13;
  uint64_t VAR_16 = 0;
  int VAR_17 = 1;
  const int VAR_18 = (VAR_5 < 100);


  FUNC_6((uint64_t)VAR_15 == (uint64_t)VAR_12 * VAR_13);
  FUNC_6(VAR_4 != ((void*)0) && VAR_11 != ((void*)0) && VAR_11->a != ((void*)0));
  FUNC_6(VAR_9 != ((void*)0) && VAR_10 != ((void*)0));
  FUNC_6(VAR_12 > 0 && VAR_13 > 0);
  FUNC_6(VAR_11->a_stride >= VAR_12);
  FUNC_6(VAR_7 >= VAR_3 && VAR_7 <= VAR_2);

  if (VAR_5 < 0 || VAR_5 > 100) {
    return 0;
  }

  if (VAR_6 < VAR_1 || VAR_6 > VAR_0) {
    return 0;
  }

  if (VAR_6 == VAR_1) {

    VAR_7 = VAR_3;
  }

  VAR_14 = (uint8_t*)FUNC_5(1ULL, VAR_15);
  if (VAR_14 == ((void*)0)) {
    return 0;
  }


  FUNC_3(VAR_11->a, VAR_11->a_stride, VAR_14, VAR_12, VAR_12, VAR_13);

  if (VAR_18) {



    const int VAR_19 = (VAR_5 <= 70) ? (2 + VAR_5 / 5)
                                             : (16 + (VAR_5 - 70) * 8);
    VAR_17 = FUNC_1(VAR_14, VAR_12, VAR_13, VAR_19, &VAR_16);
  }

  if (VAR_17) {
    FUNC_2();
    VAR_17 = FUNC_0(VAR_14, VAR_12, VAR_13, VAR_15, VAR_6,
                               VAR_7, VAR_18, VAR_8, VAR_9,
                               VAR_10, VAR_11->stats);

    if (VAR_11->stats != ((void*)0)) {
      VAR_11->stats->coded_size += (int)(*VAR_10);
      VAR_4->sse_[3] = VAR_16;
    }

  }

  FUNC_4(VAR_14);
  return VAR_17;
}
