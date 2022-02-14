
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_ops {void* open; } ;
struct snd_pcm {struct snd_cmi8330* private_data; int name; } ;
struct snd_cmi8330 {scalar_t__ type; struct snd_pcm* pcm; TYPE_1__* streams; int wss; int sb; } ;
struct snd_card {int dev; } ;
typedef void* snd_pcm_open_callback_t ;
struct TYPE_2__ {struct snd_pcm_ops ops; int private_data; void* open; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;


 int FUNC_0 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_1 (struct snd_card*,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,size_t,struct snd_pcm_ops*) ;
 struct snd_pcm_ops* FUNC_3 (size_t) ;
 struct snd_pcm_ops* FUNC_4 (size_t) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_card *VAR_6, struct snd_cmi8330 *VAR_7)
{
 struct snd_pcm *VAR_8;
 const struct snd_pcm_ops *VAR_9;
 int VAR_10;
 static snd_pcm_open_callback_t VAR_11[2] = {
  128,
  129
 };

 if ((VAR_10 = FUNC_1(VAR_6, (VAR_7->type == VAR_0) ? "CMI8329" : "CMI8330", 0, 1, 1, &VAR_8)) < 0)
  return VAR_10;
 FUNC_5(VAR_8->name, (VAR_7->type == VAR_0) ? "CMI8329" : "CMI8330");
 VAR_8->private_data = VAR_7;


 VAR_9 = FUNC_3(VAR_2);
 VAR_7->streams[VAR_2].ops = *VAR_9;
 VAR_7->streams[VAR_2].open = VAR_9->open;
 VAR_7->streams[VAR_2].ops.open = VAR_11[VAR_2];
 VAR_7->streams[VAR_2].private_data = VAR_7->sb;


 VAR_9 = FUNC_4(VAR_1);
 VAR_7->streams[VAR_1].ops = *VAR_9;
 VAR_7->streams[VAR_1].open = VAR_9->open;
 VAR_7->streams[VAR_1].ops.open = VAR_11[VAR_1];
 VAR_7->streams[VAR_1].private_data = VAR_7->wss;

 FUNC_2(VAR_8, VAR_5, &VAR_7->streams[VAR_5].ops);
 FUNC_2(VAR_8, VAR_4, &VAR_7->streams[VAR_4].ops);

 FUNC_0(VAR_8, VAR_3,
           VAR_6->dev,
           64*1024, 128*1024);
 VAR_7->pcm = VAR_8;

 return 0;
}
