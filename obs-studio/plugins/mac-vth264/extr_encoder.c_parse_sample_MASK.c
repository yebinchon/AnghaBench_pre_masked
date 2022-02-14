
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; int array; int da; } ;
struct darray {int dummy; } ;
struct TYPE_3__ {scalar_t__ num; struct darray da; } ;
struct vt_h264_encoder {int fps_den; TYPE_2__ packet_data; TYPE_1__ extra_data; scalar_t__ bframes; scalar_t__ fps_num; } ;
struct encoder_packet {int keyframe; int size; int data; void* dts; void* pts; int type; } ;
typedef void* int64_t ;
typedef int Float64 ;
typedef int CMTime ;
typedef int CMSampleBufferRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct vt_h264_encoder*,int *,struct darray*,int ,int) ;
 int FUNC_7 (TYPE_2__,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct vt_h264_encoder *VAR_1, CMSampleBufferRef VAR_2,
    struct encoder_packet *VAR_3, CMTime VAR_4)
{
 CMTime VAR_5 = FUNC_2(VAR_2);
 CMTime VAR_6 = FUNC_1(VAR_2);

 VAR_5 = FUNC_4(VAR_5,
          ((Float64)VAR_1->fps_num / VAR_1->fps_den));
 VAR_6 = FUNC_4(VAR_6,
          ((Float64)VAR_1->fps_num / VAR_1->fps_den));


 if (VAR_1->bframes)
  VAR_6 = FUNC_5(VAR_6, VAR_4);

 bool VAR_7 = FUNC_8(VAR_2);

 FUNC_7(VAR_1->packet_data, 0);


 struct darray *VAR_8 = ((void*)0);
 if (VAR_1->extra_data.num == 0)
  VAR_8 = &VAR_1->extra_data.da;

 if (!FUNC_6(VAR_1, &VAR_1->packet_data.da, VAR_8,
          VAR_2, VAR_7))
  goto fail;

 VAR_3->type = VAR_0;
 VAR_3->pts = (int64_t)(FUNC_3(VAR_5));
 VAR_3->dts = (int64_t)(FUNC_3(VAR_6));
 VAR_3->data = VAR_1->packet_data.array;
 VAR_3->size = VAR_1->packet_data.num;
 VAR_3->keyframe = VAR_7;

 FUNC_0(VAR_2);
 return 1;

fail:
 FUNC_0(VAR_2);
 return 0;
}
