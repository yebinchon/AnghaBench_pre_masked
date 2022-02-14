
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {struct slot* private_data; } ;
struct slot {struct slot* assigned; struct slot* name; scalar_t__ allocated; } ;


 int FUNC_0 (struct slot*) ;

__attribute__((used)) static void FUNC_1(struct snd_mixer_oss_slot *VAR_0)
{
 struct slot *VAR_1 = VAR_0->private_data;
 if (VAR_1) {
  if (VAR_1->allocated && VAR_1->assigned) {
   FUNC_0(VAR_1->assigned->name);
   FUNC_0(VAR_1->assigned);
  }
  FUNC_0(VAR_1);
 }
}
