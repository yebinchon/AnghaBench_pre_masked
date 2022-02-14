
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol*,int *,int) ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_info *VAR_3)
{
 u16 VAR_4[VAR_0];
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_2, VAR_4,
    VAR_0);

 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_3, 1, VAR_5, VAR_1);
}
