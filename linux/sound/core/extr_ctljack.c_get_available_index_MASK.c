
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_elem_id {int index; scalar_t__ numid; int name; int iface; } ;
struct snd_card {int dummy; } ;
typedef int sid ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 scalar_t__ FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_1, const char *VAR_2)
{
 struct snd_ctl_elem_id VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.index = 0;
 VAR_3.iface = VAR_0;
 FUNC_2(VAR_3.name, VAR_2, sizeof(VAR_3.name));

 while (FUNC_1(VAR_1, &VAR_3)) {
  VAR_3.index++;

  VAR_3.numid = 0;
 }

 return VAR_3.index;
}
