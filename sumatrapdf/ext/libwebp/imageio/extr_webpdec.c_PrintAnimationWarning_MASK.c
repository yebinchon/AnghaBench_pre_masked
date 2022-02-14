
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ has_animation; } ;
struct TYPE_5__ {TYPE_1__ input; } ;
typedef TYPE_2__ WebPDecoderConfig ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const WebPDecoderConfig* const VAR_1) {
  if (VAR_1->input.has_animation) {
    FUNC_0(VAR_0,
            "Error! Decoding of an animated WebP file is not supported.\n"
            "       Use webpmux to extract the individual frames or\n"
            "       vwebp to view this image.\n");
  }
}
