
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int count; int type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 VAR_2->type = VAR_0;
 VAR_2->count = 10;
 return 0;
}
