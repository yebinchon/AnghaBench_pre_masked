
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ codec_id; } ;
struct TYPE_7__ {scalar_t__ id; scalar_t__ pix_fmt; } ;
typedef TYPE_1__ AVHWAccel ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;

AVHWAccel *FUNC_1(AVCodecContext *VAR_3)
{
 AVHWAccel *VAR_4 = ((void*)0);

 while ((VAR_4 = FUNC_0(VAR_4)) != ((void*)0)) {
  if (VAR_4->id == VAR_3->codec_id &&
      (VAR_4->pix_fmt == VAR_2 ||
       VAR_4->pix_fmt == VAR_0 ||
       VAR_4->pix_fmt == VAR_1)) {
   return VAR_4;
  }
 }

 return ((void*)0);
}
