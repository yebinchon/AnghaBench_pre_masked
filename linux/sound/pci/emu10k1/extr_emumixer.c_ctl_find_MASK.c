
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_id {int iface; int name; } ;
struct snd_card {int dummy; } ;
typedef int sid ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 struct snd_kcontrol* FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static struct snd_kcontrol *FUNC_3(struct snd_card *VAR_1, const char *VAR_2)
{
 struct snd_ctl_elem_id VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(VAR_3.name, VAR_2);
 VAR_3.iface = VAR_0;
 return FUNC_1(VAR_1, &VAR_3);
}
