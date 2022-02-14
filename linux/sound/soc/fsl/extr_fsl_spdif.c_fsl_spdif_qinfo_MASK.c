
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int count; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_info *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->count = VAR_1;

 return 0;
}
