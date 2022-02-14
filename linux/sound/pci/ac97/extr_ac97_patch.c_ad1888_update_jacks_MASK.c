
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lo_as_master; } ;
struct TYPE_4__ {TYPE_1__ ad18xx; } ;
struct snd_ac97 {TYPE_2__ spec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 scalar_t__ FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int ,int,unsigned short) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_1)
{
 unsigned short VAR_2 = 0;

 if (!VAR_1->spec.ad18xx.lo_as_master && FUNC_0(VAR_1))
  VAR_2 |= (1 << 12);

 if (FUNC_1(VAR_1))
  VAR_2 |= (1 << 11);

 FUNC_2(VAR_1, VAR_0, (1 << 11) | (1 << 12), VAR_2);
}
