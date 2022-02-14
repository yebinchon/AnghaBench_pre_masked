
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; scalar_t__ priv; int colorspace; int field; int pixelformat; } ;
struct TYPE_3__ {int width; int height; scalar_t__ interlaced; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct skeleton {scalar_t__ input; int std; TYPE_2__ timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct skeleton *VAR_7,
         struct v4l2_pix_format *VAR_8)
{
 VAR_8->pixelformat = VAR_5;
 if (VAR_7->input == 0) {

  VAR_8->width = 720;
  VAR_8->height = (VAR_7->std & VAR_6) ? 480 : 576;
  VAR_8->field = VAR_3;
  VAR_8->colorspace = VAR_1;
 } else {

  VAR_8->width = VAR_7->timings.bt.width;
  VAR_8->height = VAR_7->timings.bt.height;
  if (VAR_7->timings.bt.interlaced) {
   VAR_8->field = VAR_2;
   VAR_8->height /= 2;
  } else {
   VAR_8->field = VAR_4;
  }
  VAR_8->colorspace = VAR_0;
 }





 VAR_8->bytesperline = VAR_8->width * 2;
 VAR_8->sizeimage = VAR_8->bytesperline * VAR_8->height;
 VAR_8->priv = 0;
}
