
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6asm {int adev; int slock; struct audio_client** session; } ;
struct device {int parent; } ;
struct audio_client {int session; int perf_mode; int stream_id; int lock; int cmd_lock; int cmd_wait; int refcount; int adev; int io_mode; void* priv; struct q6asm* q6asm; struct device* dev; int cb; } ;
typedef int q6asm_cb ;


 int VAR_0 ;
 int VAR_1 ;
 struct audio_client* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct q6asm* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct audio_client* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 struct audio_client* FUNC_7 (struct q6asm*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

struct audio_client *FUNC_11(struct device *VAR_3, q6asm_cb VAR_4,
           void *VAR_5, int VAR_6,
           int VAR_7)
{
 struct q6asm *VAR_8 = FUNC_2(VAR_3->parent);
 struct audio_client *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_7(VAR_8, VAR_6 + 1);
 if (VAR_9) {
  FUNC_1(VAR_3, "Audio Client already active\n");
  return VAR_9;
 }

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 FUNC_9(&VAR_8->slock, VAR_10);
 VAR_8->session[VAR_6 + 1] = VAR_9;
 FUNC_10(&VAR_8->slock, VAR_10);
 VAR_9->session = VAR_6 + 1;
 VAR_9->cb = VAR_4;
 VAR_9->dev = VAR_3;
 VAR_9->q6asm = VAR_8;
 VAR_9->priv = VAR_5;
 VAR_9->io_mode = VAR_0;
 VAR_9->perf_mode = VAR_7;

 VAR_9->stream_id = 1;
 VAR_9->adev = VAR_8->adev;
 FUNC_4(&VAR_9->refcount);

 FUNC_3(&VAR_9->cmd_wait);
 FUNC_6(&VAR_9->cmd_lock);
 FUNC_8(&VAR_9->lock);

 return VAR_9;
}
