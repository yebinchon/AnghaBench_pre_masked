
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_7__ {int error_; } ;
typedef TYPE_2__ VP8LBitWriter ;


 int FUNC_0 (TYPE_2__* const,int const,int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const WebPPicture* const VAR_2,
                          VP8LBitWriter* const VAR_3) {
  const int VAR_4 = VAR_2->width - 1;
  const int VAR_5 = VAR_2->height - 1;
  FUNC_1(VAR_4 < VAR_1 && VAR_5 < VAR_1);

  FUNC_0(VAR_3, VAR_4, VAR_0);
  FUNC_0(VAR_3, VAR_5, VAR_0);
  return !VAR_3->error_;
}
