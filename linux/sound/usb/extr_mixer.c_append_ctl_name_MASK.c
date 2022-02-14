
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;


 size_t FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static size_t FUNC_1(struct snd_kcontrol *VAR_0, const char *VAR_1)
{
 return FUNC_0(VAR_0->id.name, VAR_1, sizeof(VAR_0->id.name));
}
