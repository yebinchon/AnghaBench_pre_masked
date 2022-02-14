
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {scalar_t__ type; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct vx_core* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[3] = {
  "Digital", "Line", "Mic"
 };
 static const char * const VAR_4[2] = {
  "Digital", "Analog"
 };
 struct vx_core *VAR_5 = FUNC_1(VAR_1);

 if (VAR_5->type >= VAR_0)
  return FUNC_0(VAR_2, 1, 3, VAR_3);
 else
  return FUNC_0(VAR_2, 1, 2, VAR_4);
}
