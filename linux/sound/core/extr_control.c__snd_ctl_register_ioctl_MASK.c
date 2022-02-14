
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kctl_ioctl {int list; int fioctl; } ;
struct list_head {int dummy; } ;
typedef int snd_kctl_ioctl_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct snd_kctl_ioctl* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(snd_kctl_ioctl_func_t VAR_3, struct list_head *VAR_4)
{
 struct snd_kctl_ioctl *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct snd_kctl_ioctl), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_5->fioctl = VAR_3;
 FUNC_0(&VAR_2);
 FUNC_2(&VAR_5->list, VAR_4);
 FUNC_3(&VAR_2);
 return 0;
}
