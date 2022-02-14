
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {size_t private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct qtet_kcontrol_private {int texts; } ;


 int FUNC_0 (int ) ;
 struct qtet_kcontrol_private* VAR_0 ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
  struct snd_ctl_elem_info *VAR_2)
{
 struct qtet_kcontrol_private VAR_3 =
  VAR_0[VAR_1->private_value];
 return FUNC_1(VAR_2, 1, FUNC_0(VAR_3.texts),
     VAR_3.texts);
}
