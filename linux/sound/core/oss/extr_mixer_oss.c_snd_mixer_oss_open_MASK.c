
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_file {int * mixer; struct snd_card* card; } ;
struct snd_card {int module; int * mixer_oss; } ;
struct inode {int dummy; } ;
struct file {struct snd_mixer_oss_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct snd_mixer_oss_file*) ;
 struct snd_mixer_oss_file* FUNC_2 (int,int ) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (struct snd_card*,struct file*) ;
 int FUNC_5 (struct snd_card*,struct file*) ;
 int FUNC_6 (struct snd_card*) ;
 struct snd_card* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5, struct file *VAR_6)
{
 struct snd_card *VAR_7;
 struct snd_mixer_oss_file *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_7(FUNC_0(VAR_5),
      VAR_4);
 if (VAR_7 == ((void*)0))
  return -VAR_1;
 if (VAR_7->mixer_oss == ((void*)0)) {
  FUNC_6(VAR_7);
  return -VAR_1;
 }
 VAR_9 = FUNC_4(VAR_7, VAR_6);
 if (VAR_9 < 0) {
  FUNC_6(VAR_7);
  return VAR_9;
 }
 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_7, VAR_6);
  FUNC_6(VAR_7);
  return -VAR_2;
 }
 VAR_8->card = VAR_7;
 VAR_8->mixer = VAR_7->mixer_oss;
 VAR_6->private_data = VAR_8;
 if (!FUNC_8(VAR_7->module)) {
  FUNC_1(VAR_8);
  FUNC_5(VAR_7, VAR_6);
  FUNC_6(VAR_7);
  return -VAR_0;
 }
 FUNC_6(VAR_7);
 return 0;
}
