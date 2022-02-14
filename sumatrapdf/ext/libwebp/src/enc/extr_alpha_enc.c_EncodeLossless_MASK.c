
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int width; int height; int use_argb; int argb_stride; int argb; int * stats; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_14__ {int lossless; int exact; int method; int quality; } ;
typedef TYPE_2__ WebPConfig ;
typedef int WebPAuxStats ;
struct TYPE_15__ {int error_; } ;
typedef TYPE_3__ VP8LBitWriter ;


 int FUNC_0 (TYPE_3__* const) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_3__* const,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int const* const,int,int,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(const uint8_t* const VAR_1, int VAR_2, int VAR_3,
                          int VAR_4,
                          int VAR_5, VP8LBitWriter* const VAR_6,
                          WebPAuxStats* const VAR_7) {
  int VAR_8 = 0;
  WebPConfig VAR_9;
  WebPPicture VAR_10;

  FUNC_6(&VAR_10);
  VAR_10.width = VAR_2;
  VAR_10.height = VAR_3;
  VAR_10.use_argb = 1;
  VAR_10.stats = VAR_7;
  if (!FUNC_4(&VAR_10)) return 0;


  FUNC_3(VAR_1, VAR_2, VAR_10.width, VAR_10.height,
                           VAR_10.argb, VAR_10.argb_stride);

  FUNC_2(&VAR_9);
  VAR_9.lossless = 1;




  VAR_9.exact = 1;
  VAR_9.method = VAR_4;





  VAR_9.quality =
      (VAR_5 && VAR_4 == 6) ? 100 : 8.f * VAR_4;
  FUNC_7(VAR_9.quality >= 0 && VAR_9.quality <= 100.f);





  VAR_8 = (FUNC_1(&VAR_9, &VAR_10, VAR_6, 0 ) == VAR_0);
  FUNC_5(&VAR_10);
  VAR_8 = VAR_8 && !VAR_6->error_;
  if (!VAR_8) {
    FUNC_0(VAR_6);
    return 0;
  }
  return 1;
}
