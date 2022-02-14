
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dfsentry {struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {scalar_t__ host_offset; int dtrace_is_enabled; } ;
struct inode {struct snd_sof_dfsentry* i_private; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, struct file *VAR_1)
{
 struct snd_sof_dfsentry *VAR_2 = VAR_0->i_private;
 struct snd_sof_dev *VAR_3 = VAR_2->sdev;


 if (!VAR_3->dtrace_is_enabled)
  VAR_3->host_offset = 0;

 return 0;
}
