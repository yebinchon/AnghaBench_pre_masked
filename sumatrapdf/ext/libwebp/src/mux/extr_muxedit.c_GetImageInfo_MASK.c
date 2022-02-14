
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width_; int height_; int * header_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
typedef int WebPChunk ;


 scalar_t__ FUNC_0 (int const* const,int* const,int* const,int* const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static WebPMuxError FUNC_2(const WebPMuxImage* const VAR_1,
                                 int* const VAR_2, int* const VAR_3,
                                 int* const VAR_4,
                                 int* const VAR_5, int* const VAR_6) {
  const WebPChunk* const VAR_7 = VAR_1->header_;
  WebPMuxError VAR_8;
  FUNC_1(VAR_1 != ((void*)0));
  FUNC_1(VAR_7 != ((void*)0));


  VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_3, VAR_4);
  if (VAR_8 != VAR_0) return VAR_8;


  if (VAR_5 != ((void*)0)) *VAR_5 = VAR_1->width_;
  if (VAR_6 != ((void*)0)) *VAR_6 = VAR_1->height_;
  return VAR_0;
}
