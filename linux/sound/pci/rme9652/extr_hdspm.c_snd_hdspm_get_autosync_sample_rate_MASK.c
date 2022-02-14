
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {void** item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int io_type; } ;




 scalar_t__ VAR_0 ;



 void* FUNC_0 (struct hdspm*) ;
 void* FUNC_1 (struct hdspm*,scalar_t__) ;
 void* FUNC_2 (struct hdspm*,int ) ;
 void* FUNC_3 (struct hdspm*) ;
 void* FUNC_4 (struct hdspm*) ;
 void* FUNC_5 (struct hdspm*) ;
 struct hdspm* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *
           VAR_2)
{
 struct hdspm *VAR_3 = FUNC_6(VAR_1);

 switch (VAR_3->io_type) {
 case 128:
  switch (VAR_1->private_value) {
  case 0:
   VAR_2->value.enumerated.item[0] =
    FUNC_5(VAR_3);
   break;
  case 7:
   VAR_2->value.enumerated.item[0] =
    FUNC_4(VAR_3);
   break;
  case 8:
   VAR_2->value.enumerated.item[0] =
    FUNC_3(VAR_3);
   break;
  default:
   VAR_2->value.enumerated.item[0] =
    FUNC_2(VAR_3,
      VAR_1->private_value-1);
  }
  break;

 case 131:
  switch (VAR_1->private_value) {
  case 0:
   VAR_2->value.enumerated.item[0] =
    FUNC_5(VAR_3);
   break;
  case 4:
   VAR_2->value.enumerated.item[0] =
    FUNC_4(VAR_3);
   break;
  case 5:
   VAR_2->value.enumerated.item[0] =
    FUNC_3(VAR_3);
   break;
  default:
   VAR_2->value.enumerated.item[0] =
    FUNC_2(VAR_3,
      VAR_1->private_value-1);
  }
  break;

 case 132:

  switch (VAR_1->private_value) {
  case 0:
   VAR_2->value.enumerated.item[0] =
    FUNC_5(VAR_3);
   break;
  case 9:
   VAR_2->value.enumerated.item[0] =
    FUNC_4(VAR_3);
   break;
  case 10:
   VAR_2->value.enumerated.item[0] =
    FUNC_3(VAR_3);
   break;
  case 11:
   VAR_2->value.enumerated.item[0] =
    FUNC_0(VAR_3);
   break;
  default:
   VAR_2->value.enumerated.item[0] =
    FUNC_1(VAR_3,
      VAR_1->private_value -
      VAR_0);
   break;
  }
  break;

 case 130:
 case 129:
  VAR_2->value.enumerated.item[0] =
   FUNC_0(VAR_3);
  break;
 default:
  break;
 }

 return 0;
}
