
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hdspm {int texts_autosync; int texts_autosync_items; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int ,int ) ;
 struct hdspm* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_info *VAR_1)
{
 struct hdspm *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 1, VAR_2->texts_autosync_items, VAR_2->texts_autosync);

 return 0;
}
