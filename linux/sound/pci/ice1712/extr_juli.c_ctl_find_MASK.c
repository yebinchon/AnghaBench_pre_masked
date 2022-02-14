
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_id {int iface; int name; int member_0; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 struct snd_kcontrol* FUNC_0 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static struct snd_kcontrol *FUNC_2(struct snd_card *VAR_1,
         const char *VAR_2)
{
 struct snd_ctl_elem_id VAR_3 = {0};

 FUNC_1(VAR_3.name, VAR_2, sizeof(VAR_3.name));
 VAR_3.iface = VAR_0;
 return FUNC_0(VAR_1, &VAR_3);
}
