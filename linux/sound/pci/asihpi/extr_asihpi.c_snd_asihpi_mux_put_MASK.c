
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = VAR_0->private_value;
 u16 VAR_4, VAR_5;
 u16 VAR_6;

 VAR_2 = 1;

 VAR_6 = FUNC_1(VAR_3,
        VAR_1->value.enumerated.item[0],
        &VAR_4, &VAR_5);
 if (!VAR_6)
  FUNC_0(
   FUNC_2(VAR_3,
      VAR_4, VAR_5));
 return VAR_2;
}
