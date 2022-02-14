
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1843 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ad1843*,int,int *,int,int *,int) ;

int FUNC_1(struct snd_ad1843 *VAR_3, int VAR_4)
{
 if (VAR_4 < 0 || VAR_4 > 2)
  return -VAR_0;

 FUNC_0(VAR_3, 2, &VAR_1, VAR_4, &VAR_2, VAR_4);
 return VAR_4;
}
