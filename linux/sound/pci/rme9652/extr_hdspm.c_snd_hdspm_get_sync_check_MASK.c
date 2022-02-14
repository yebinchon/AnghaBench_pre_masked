
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int io_type; scalar_t__ tco; } ;




 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct hdspm*,int) ;
 int FUNC_1 (struct hdspm*) ;
 int FUNC_2 (struct hdspm*,int) ;
 int FUNC_3 (struct hdspm*) ;
 int FUNC_4 (struct hdspm*,int ) ;
 int FUNC_5 (struct hdspm*) ;
 int FUNC_6 (struct hdspm*) ;
 struct hdspm* FUNC_7 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct hdspm *VAR_4 = FUNC_7(VAR_2);
 int VAR_5 = -1;

 switch (VAR_4->io_type) {
 case 128:
  switch (VAR_2->private_value) {
  case 0:
   VAR_5 = FUNC_6(VAR_4); break;
  case 7:
   VAR_5 = FUNC_5(VAR_4); break;
  case 8:
   VAR_5 = FUNC_3(VAR_4); break;
  default:
   VAR_5 = FUNC_2(VAR_4,
     VAR_2->private_value-1);
  }
  break;

 case 131:
  switch (VAR_2->private_value) {
  case 0:
   VAR_5 = FUNC_6(VAR_4); break;
  case 4:
   VAR_5 = FUNC_5(VAR_4); break;
  case 5:
   VAR_5 = FUNC_3(VAR_4); break;
  default:
   VAR_5 = FUNC_2(VAR_4,
     VAR_2->private_value-1);
  }
  break;

 case 130:
  switch (VAR_2->private_value) {
  case 0:
   VAR_5 = FUNC_6(VAR_4); break;
  case 1:
   VAR_5 = FUNC_1(VAR_4); break;
  case 2:
   VAR_5 = FUNC_5(VAR_4); break;
  case 3:
   VAR_5 = FUNC_3(VAR_4); break;
  }
  break;

 case 129:
  VAR_5 = FUNC_1(VAR_4);
  break;

 case 132:
  switch (VAR_2->private_value) {
  case 0:
   VAR_5 = FUNC_6(VAR_4); break;
  case 9:
   VAR_5 = FUNC_5(VAR_4); break;
  case 10 :
   VAR_5 = FUNC_3(VAR_4); break;
  default:
    VAR_5 = FUNC_0(VAR_4,
      VAR_2->private_value-1);
  }
  break;

 }

 if (VAR_4->tco) {
  switch (VAR_2->private_value) {
  case 11:

   VAR_5 = FUNC_4(VAR_4, VAR_1);
   break;
  case 12:

   VAR_5 = FUNC_4(VAR_4,
    VAR_0);
   break;
  default:
   break;
  }
 }

 if (-1 == VAR_5)
  VAR_5 = 3;

 VAR_3->value.enumerated.item[0] = VAR_5;
 return 0;
}
