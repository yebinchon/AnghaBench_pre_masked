
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct via82xx {int port; } ;
struct TYPE_4__ {scalar_t__ index; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 struct via82xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct via82xx *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5 = VAR_4->port + (VAR_2->id.index ? (VAR_0 + 0x10) : VAR_0);
 VAR_3->value.enumerated.item[0] = FUNC_0(VAR_5) & VAR_1 ? 1 : 0;
 return 0;
}
