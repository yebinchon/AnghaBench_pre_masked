
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct device {int dummy; } ;
struct audio_substream_data {int dummy; } ;
struct audio_drv_data {scalar_t__ asic_type; int acp_mmio; TYPE_8__* capture_i2sbt_stream; TYPE_6__* play_i2sbt_stream; TYPE_4__* capture_i2ssp_stream; TYPE_2__* play_i2ssp_stream; } ;
struct TYPE_16__ {TYPE_7__* runtime; } ;
struct TYPE_15__ {struct audio_substream_data* private_data; } ;
struct TYPE_14__ {TYPE_5__* runtime; } ;
struct TYPE_13__ {struct audio_substream_data* private_data; } ;
struct TYPE_12__ {TYPE_3__* runtime; } ;
struct TYPE_11__ {struct audio_substream_data* private_data; } ;
struct TYPE_10__ {TYPE_1__* runtime; } ;
struct TYPE_9__ {struct audio_substream_data* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,struct audio_substream_data*,scalar_t__) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct audio_drv_data* FUNC_5 (struct device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 u16 VAR_4;
 int VAR_5;
 struct audio_substream_data *VAR_6;
 struct audio_drv_data *VAR_7 = FUNC_5(VAR_3);

 VAR_5 = FUNC_0(VAR_7->acp_mmio, VAR_7->asic_type);
 if (VAR_5) {
  FUNC_4(VAR_3, "ACP Init failed status:%d\n", VAR_5);
  return VAR_5;
 }

 if (VAR_7->play_i2ssp_stream && VAR_7->play_i2ssp_stream->runtime) {





  if (VAR_7->asic_type != VAR_1) {
   for (VAR_4 = 1; VAR_4 <= 4; VAR_4++)
    FUNC_2(VAR_7->acp_mmio, VAR_4,
       1);
  }
  VAR_6 = VAR_7->play_i2ssp_stream->runtime->private_data;
  FUNC_3(VAR_7->acp_mmio, VAR_6, VAR_7->asic_type);
 }
 if (VAR_7->capture_i2ssp_stream &&
     VAR_7->capture_i2ssp_stream->runtime) {
  if (VAR_7->asic_type != VAR_1) {
   for (VAR_4 = 5; VAR_4 <= 8; VAR_4++)
    FUNC_2(VAR_7->acp_mmio, VAR_4,
       1);
  }
  VAR_6 = VAR_7->capture_i2ssp_stream->runtime->private_data;
  FUNC_3(VAR_7->acp_mmio, VAR_6, VAR_7->asic_type);
 }
 if (VAR_7->asic_type != VAR_0) {
  if (VAR_7->play_i2sbt_stream &&
      VAR_7->play_i2sbt_stream->runtime) {
   VAR_6 = VAR_7->play_i2sbt_stream->runtime->private_data;
   FUNC_3(VAR_7->acp_mmio, VAR_6, VAR_7->asic_type);
  }
  if (VAR_7->capture_i2sbt_stream &&
      VAR_7->capture_i2sbt_stream->runtime) {
   VAR_6 = VAR_7->capture_i2sbt_stream->runtime->private_data;
   FUNC_3(VAR_7->acp_mmio, VAR_6, VAR_7->asic_type);
  }
 }
 FUNC_1(1, VAR_7->acp_mmio, VAR_2);
 return 0;
}
