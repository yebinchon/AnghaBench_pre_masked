
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {unsigned int count; TYPE_1__* vd; } ;
struct snd_ctl_file {int dummy; } ;
struct TYPE_2__ {unsigned int access; struct snd_ctl_file* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct snd_kcontrol* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_kcontrol*,int ,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol **VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, struct snd_ctl_file *VAR_8)
{
 unsigned int VAR_9;

 if (VAR_6 == 0 || VAR_6 > VAR_3)
  return -VAR_0;

 *VAR_5 = FUNC_0(FUNC_1(*VAR_5, VAR_4, VAR_6), VAR_2);
 if (!*VAR_5)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  (*VAR_5)->vd[VAR_9].access = VAR_7;
  (*VAR_5)->vd[VAR_9].owner = VAR_8;
 }
 (*VAR_5)->count = VAR_6;

 return 0;
}
