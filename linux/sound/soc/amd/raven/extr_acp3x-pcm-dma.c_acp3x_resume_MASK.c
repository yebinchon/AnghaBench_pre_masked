
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct i2s_stream_instance {int xfer_resolution; scalar_t__ acp3x_base; } ;
struct i2s_dev_data {int tdm_mode; int tdm_fmt; scalar_t__ acp3x_base; TYPE_4__* capture_stream; TYPE_2__* play_stream; } ;
struct device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* runtime; } ;
struct TYPE_7__ {struct i2s_stream_instance* private_data; } ;
struct TYPE_6__ {TYPE_1__* runtime; } ;
struct TYPE_5__ {struct i2s_stream_instance* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct i2s_stream_instance*,int ) ;
 struct i2s_dev_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 struct i2s_dev_data *VAR_11 = FUNC_2(VAR_8);

 VAR_9 = FUNC_0(VAR_11->acp3x_base);
 if (VAR_9)
  return -VAR_0;

 if (VAR_11->play_stream && VAR_11->play_stream->runtime) {
  struct i2s_stream_instance *VAR_12 =
   VAR_11->play_stream->runtime->private_data;
  FUNC_1(VAR_12, VAR_2);
  FUNC_4((VAR_12->xfer_resolution << 3),
     VAR_12->acp3x_base + VAR_4);
  if (VAR_11->tdm_mode == 1) {
   FUNC_4(VAR_11->tdm_fmt, VAR_11->acp3x_base +
      VAR_6);
   VAR_10 = FUNC_3(VAR_11->acp3x_base + VAR_4);
   FUNC_4((VAR_10 | 0x2), VAR_11->acp3x_base +
      VAR_4);
  }
 }

 if (VAR_11->capture_stream && VAR_11->capture_stream->runtime) {
  struct i2s_stream_instance *VAR_13 =
   VAR_11->capture_stream->runtime->private_data;
  FUNC_1(VAR_13, VAR_1);
  FUNC_4((VAR_13->xfer_resolution << 3),
     VAR_13->acp3x_base + VAR_3);
  if (VAR_11->tdm_mode == 1) {
   FUNC_4(VAR_11->tdm_fmt, VAR_11->acp3x_base +
      VAR_5);
   VAR_10 = FUNC_3(VAR_11->acp3x_base + VAR_3);
   FUNC_4((VAR_10 | 0x2), VAR_11->acp3x_base +
      VAR_3);
  }
 }

 FUNC_4(1, VAR_11->acp3x_base + VAR_7);
 return 0;
}
