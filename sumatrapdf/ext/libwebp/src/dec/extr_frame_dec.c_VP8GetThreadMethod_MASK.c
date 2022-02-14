
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_lossless; } ;
typedef TYPE_1__ WebPHeaderStructure ;
struct TYPE_6__ {scalar_t__ use_threads; } ;
typedef TYPE_2__ WebPDecoderOptions ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(const WebPDecoderOptions* const VAR_1,
                       const WebPHeaderStructure* const VAR_2,
                       int VAR_3, int VAR_4) {
  if (VAR_1 == ((void*)0) || VAR_1->use_threads == 0) {
    return 0;
  }
  (void)VAR_2;
  (void)VAR_3;
  (void)VAR_4;
  FUNC_0(VAR_2 == ((void*)0) || !VAR_2->is_lossless);



  return 0;
}
