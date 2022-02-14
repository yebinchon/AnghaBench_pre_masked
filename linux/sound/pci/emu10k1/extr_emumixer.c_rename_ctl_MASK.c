
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 struct snd_kcontrol* FUNC_0 (struct snd_card*,char const*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct snd_kcontrol *VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_4->id.name, VAR_3);
  return 0;
 }
 return -VAR_0;
}
