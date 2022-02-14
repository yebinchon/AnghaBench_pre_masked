
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct idma_ctrl* private_data; } ;
struct idma_ctrl {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct idma_ctrl*) ;
 struct idma_ctrl* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,struct idma_ctrl*) ;
 int FUNC_4 (struct snd_pcm_substream*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_5->runtime;
 struct idma_ctrl *VAR_7;
 int VAR_8;

 FUNC_4(VAR_5, &VAR_2);

 VAR_7 = FUNC_1(sizeof(struct idma_ctrl), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_3, VAR_4, 0, "i2s", VAR_7);
 if (VAR_8 < 0) {
  FUNC_2("fail to claim i2s irq , ret = %d\n", VAR_8);
  FUNC_0(VAR_7);
  return VAR_8;
 }

 FUNC_5(&VAR_7->lock);

 VAR_6->private_data = VAR_7;

 return 0;
}
