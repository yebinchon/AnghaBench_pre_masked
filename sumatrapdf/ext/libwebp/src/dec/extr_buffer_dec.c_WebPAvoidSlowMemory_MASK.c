
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_external_memory; int colorspace; } ;
typedef TYPE_1__ WebPDecBuffer ;
struct TYPE_6__ {scalar_t__ has_alpha; } ;
typedef TYPE_2__ WebPBitstreamFeatures ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(const WebPDecBuffer* const VAR_0,
                        const WebPBitstreamFeatures* const VAR_1) {
  FUNC_1(VAR_0 != ((void*)0));
  return (VAR_0->is_external_memory >= 2) &&
         FUNC_0(VAR_0->colorspace) &&
         (VAR_1 != ((void*)0) && VAR_1->has_alpha);
}
