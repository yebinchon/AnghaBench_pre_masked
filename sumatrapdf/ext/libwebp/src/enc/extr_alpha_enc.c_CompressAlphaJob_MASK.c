
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {int method; int alpha_filtering; int alpha_compression; int alpha_quality; } ;
typedef TYPE_1__ WebPConfig ;
typedef int WEBP_FILTER_TYPE ;
struct TYPE_5__ {size_t alpha_data_size_; int * alpha_data_; TYPE_1__* config_; } ;
typedef TYPE_2__ VP8Encoder ;


 int FUNC_0 (TYPE_2__* const,int ,int ,int const,int const,int **,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void* VAR_3, void* VAR_4) {
  VP8Encoder* const VAR_5 = (VP8Encoder*)VAR_3;
  const WebPConfig* VAR_6 = VAR_5->config_;
  uint8_t* VAR_7 = ((void*)0);
  size_t VAR_8 = 0;
  const int VAR_9 = VAR_6->method;
  const WEBP_FILTER_TYPE VAR_10 =
      (VAR_6->alpha_filtering == 0) ? VAR_2 :
      (VAR_6->alpha_filtering == 1) ? VAR_1 :
                                       VAR_0;
  if (!FUNC_0(VAR_5, VAR_6->alpha_quality, VAR_6->alpha_compression,
                   VAR_10, VAR_9, &VAR_7, &VAR_8)) {
    return 0;
  }
  if (VAR_8 != (uint32_t)VAR_8) {
    FUNC_1(VAR_7);
    return 0;
  }
  VAR_5->alpha_data_size_ = (uint32_t)VAR_8;
  VAR_5->alpha_data_ = VAR_7;
  (void)VAR_4;
  return 1;
}
