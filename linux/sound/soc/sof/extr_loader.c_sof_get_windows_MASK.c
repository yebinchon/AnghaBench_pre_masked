
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sof_ipc_window_elem {int type; scalar_t__ offset; scalar_t__ size; int id; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ offset; } ;
struct snd_sof_dev {scalar_t__* bar; int dev; TYPE_2__ stream_box; int dsp_oops_offset; TYPE_1__* info_window; } ;
struct TYPE_3__ {int num_windows; struct sof_ipc_window_elem* window; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct snd_sof_dev*,scalar_t__,scalar_t__,char*,int ) ;
 int FUNC_4 (struct snd_sof_dev*,int ) ;
 int FUNC_5 (struct snd_sof_dev*,int ) ;
 int FUNC_6 (struct snd_sof_dev*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct snd_sof_dev *VAR_2)
{
 struct sof_ipc_window_elem *VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if (!VAR_2->info_window) {
  FUNC_1(VAR_2->dev, "error: have no window info\n");
  return;
 }

 VAR_11 = FUNC_4(VAR_2, VAR_1);
 if (VAR_11 < 0) {
  FUNC_1(VAR_2->dev, "error: have no bar mapping\n");
  return;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2->info_window->num_windows; VAR_12++) {
  VAR_3 = &VAR_2->info_window->window[VAR_12];

  VAR_10 = FUNC_5(VAR_2, VAR_3->id);
  if (VAR_10 < 0) {
   FUNC_2(VAR_2->dev, "warn: no offset for window %d\n",
     VAR_3->id);
   continue;
  }

  switch (VAR_3->type) {
  case 128:
   VAR_6 = VAR_10 + VAR_3->offset;
   VAR_9 = VAR_3->size;
   FUNC_3(VAR_2,
      VAR_2->bar[VAR_11] +
      VAR_6,
      VAR_3->size, "inbox",
      VAR_0);
   break;
  case 133:
   VAR_4 = VAR_10 + VAR_3->offset;
   VAR_7 = VAR_3->size;
   FUNC_3(VAR_2,
      VAR_2->bar[VAR_11] +
      VAR_4,
      VAR_3->size, "outbox",
      VAR_0);
   break;
  case 129:
   FUNC_3(VAR_2,
      VAR_2->bar[VAR_11] +
      VAR_10 +
      VAR_3->offset,
      VAR_3->size, "etrace",
      VAR_0);
   break;
  case 134:
   FUNC_3(VAR_2,
      VAR_2->bar[VAR_11] +
      VAR_10 +
      VAR_3->offset,
      VAR_3->size, "debug",
      VAR_0);
   break;
  case 130:
   VAR_5 = VAR_10 + VAR_3->offset;
   VAR_8 = VAR_3->size;
   FUNC_3(VAR_2,
      VAR_2->bar[VAR_11] +
      VAR_5,
      VAR_3->size, "stream",
      VAR_0);
   break;
  case 131:
   FUNC_3(VAR_2,
      VAR_2->bar[VAR_11] +
      VAR_10 +
      VAR_3->offset,
      VAR_3->size, "regs",
      VAR_0);
   break;
  case 132:
   VAR_2->dsp_oops_offset = VAR_10 + VAR_3->offset;
   FUNC_3(VAR_2,
      VAR_2->bar[VAR_11] +
      VAR_10 +
      VAR_3->offset,
      VAR_3->size, "exception",
      VAR_0);
   break;
  default:
   FUNC_1(VAR_2->dev, "error: get illegal window info\n");
   return;
  }
 }

 if (VAR_7 == 0 || VAR_9 == 0) {
  FUNC_1(VAR_2->dev, "error: get illegal mailbox window\n");
  return;
 }

 FUNC_6(VAR_2, VAR_6, VAR_9,
     VAR_4, VAR_7);
 VAR_2->stream_box.offset = VAR_5;
 VAR_2->stream_box.size = VAR_8;

 FUNC_0(VAR_2->dev, " mailbox upstream 0x%x - size 0x%x\n",
  VAR_6, VAR_9);
 FUNC_0(VAR_2->dev, " mailbox downstream 0x%x - size 0x%x\n",
  VAR_4, VAR_7);
 FUNC_0(VAR_2->dev, " stream region 0x%x - size 0x%x\n",
  VAR_5, VAR_8);
}
