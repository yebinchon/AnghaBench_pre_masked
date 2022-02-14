
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (char const* const*) ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int ,char const* const*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_info *VAR_1)
{
 static const char *const VAR_2[8] = {
  "Room 1", "Room 2", "Room 3", "Hall 1",
  "Hall 2", "Plate", "Delay", "Echo"
 };

 return FUNC_1(VAR_1, 1, FUNC_0(VAR_2), VAR_2);
}
