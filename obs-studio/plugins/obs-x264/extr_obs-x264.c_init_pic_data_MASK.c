
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_csp; int i_plane; int* i_stride; int * plane; } ;
struct TYPE_8__ {TYPE_2__ img; int i_pts; } ;
typedef TYPE_3__ x264_picture_t ;
struct TYPE_6__ {scalar_t__ i_csp; } ;
struct obs_x264 {TYPE_1__ params; } ;
struct encoder_frame {int * data; scalar_t__* linesize; int pts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_1(struct obs_x264 *VAR_3, x264_picture_t *VAR_4,
     struct encoder_frame *VAR_5)
{
 FUNC_0(VAR_4);

 VAR_4->i_pts = VAR_5->pts;
 VAR_4->img.i_csp = VAR_3->params.i_csp;

 if (VAR_3->params.i_csp == VAR_2)
  VAR_4->img.i_plane = 2;
 else if (VAR_3->params.i_csp == VAR_0)
  VAR_4->img.i_plane = 3;
 else if (VAR_3->params.i_csp == VAR_1)
  VAR_4->img.i_plane = 3;

 for (int VAR_6 = 0; VAR_6 < VAR_4->img.i_plane; VAR_6++) {
  VAR_4->img.i_stride[VAR_6] = (int)VAR_5->linesize[VAR_6];
  VAR_4->img.plane[VAR_6] = VAR_5->data[VAR_6];
 }
}
