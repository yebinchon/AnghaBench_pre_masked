
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int card; } ;
struct inode {int i_mode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 unsigned int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 struct snd_pcm* FUNC_5 (unsigned int,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_6(struct file *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_3);
 struct snd_pcm *VAR_5;
 unsigned int VAR_6;

 if (!FUNC_0(VAR_4->i_mode) || FUNC_2(VAR_4) != VAR_2)
  return 0;
 VAR_6 = FUNC_3(VAR_4);
 VAR_5 = FUNC_5(VAR_6, VAR_1);
 if (!VAR_5)
  VAR_5 = FUNC_5(VAR_6, VAR_0);
 if (!VAR_5)
  return 0;
 FUNC_4(VAR_5->card);
 return 1;
}
