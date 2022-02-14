
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int use_threads; } ;
struct TYPE_9__ {int is_external_memory; scalar_t__ colorspace; } ;
struct TYPE_11__ {TYPE_2__ options; TYPE_1__ output; } ;
typedef TYPE_3__ WebPDecoderConfig ;
struct TYPE_12__ {scalar_t__ color_mode; int use_threads; } ;
typedef TYPE_4__ WebPAnimDecoderOptions ;
struct TYPE_13__ {int * blend_func_; TYPE_3__ config_; } ;
typedef TYPE_5__ WebPAnimDecoder ;
typedef scalar_t__ WEBP_CSP_MODE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const WebPAnimDecoderOptions* const VAR_6,
                               WebPAnimDecoder* const VAR_7) {
  WEBP_CSP_MODE VAR_8;
  WebPDecoderConfig* VAR_9 = &VAR_7->config_;
  FUNC_1(VAR_6 != ((void*)0));

  VAR_8 = VAR_6->color_mode;
  if (VAR_8 != VAR_3 && VAR_8 != VAR_2 &&
      VAR_8 != VAR_5 && VAR_8 != VAR_4) {
    return 0;
  }
  VAR_7->blend_func_ = (VAR_8 == VAR_3 || VAR_8 == VAR_2)
                         ? &VAR_0
                         : &VAR_1;
  FUNC_0(VAR_9);
  VAR_9->output.colorspace = VAR_8;
  VAR_9->output.is_external_memory = 1;
  VAR_9->options.use_threads = VAR_6->use_threads;

  return 1;
}
