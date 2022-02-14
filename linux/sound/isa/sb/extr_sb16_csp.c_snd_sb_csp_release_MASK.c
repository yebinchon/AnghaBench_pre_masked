
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb_csp {int dummy; } ;
struct snd_hwdep {struct snd_sb_csp* private_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct snd_sb_csp*) ;

__attribute__((used)) static int FUNC_1(struct snd_hwdep * VAR_0, struct file *VAR_1)
{
 struct snd_sb_csp *VAR_2 = VAR_0->private_data;
 return (FUNC_0(VAR_2));
}
