
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* release; void* ioctl_compat; void* ioctl; void* open; } ;
struct snd_hwdep {TYPE_1__ ops; int name; struct hdspm* private_data; } ;
struct snd_card {int dummy; } ;
struct hdspm {struct snd_hwdep* hwdep; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct snd_card*,char*,int ,struct snd_hwdep**) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_2,
      struct hdspm *VAR_3)
{
 struct snd_hwdep *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, "HDSPM hwdep", 0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->hwdep = VAR_4;
 VAR_4->private_data = VAR_3;
 FUNC_1(VAR_4->name, "HDSPM hwdep interface");

 VAR_4->ops.open = VAR_0;
 VAR_4->ops.ioctl = VAR_1;
 VAR_4->ops.ioctl_compat = VAR_1;
 VAR_4->ops.release = VAR_0;

 return 0;
}
