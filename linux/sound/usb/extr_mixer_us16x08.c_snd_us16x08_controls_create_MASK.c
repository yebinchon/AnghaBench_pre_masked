
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_mixer_interface {int chip; TYPE_2__* hostif; } ;
struct usb_mixer_elem_info {int* cache_val; int cached; } ;
struct snd_us16x08_meter_store {struct snd_us16x08_meter_store* comp_store; } ;
struct snd_us16x08_eq_store {struct snd_us16x08_eq_store* comp_store; } ;
struct snd_us16x08_comp_store {struct snd_us16x08_comp_store* comp_store; } ;
struct TYPE_10__ {int num_channels; char* name; int default_val; int type; int control_id; int * kcontrol_new; } ;
struct TYPE_8__ {int bInterfaceNumber; } ;
struct TYPE_9__ {TYPE_1__ desc; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct usb_mixer_interface*,int *,int ,int ,int,char*,struct snd_us16x08_meter_store*,int,struct usb_mixer_elem_info**) ;
 TYPE_3__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_3__* VAR_9 ;
 struct snd_us16x08_meter_store* FUNC_2 () ;
 struct snd_us16x08_meter_store* FUNC_3 () ;
 struct snd_us16x08_meter_store* FUNC_4 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(struct usb_mixer_interface *VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15;
 struct usb_mixer_elem_info *VAR_16;
 struct snd_us16x08_comp_store *VAR_17;
 struct snd_us16x08_meter_store *VAR_18;
 struct snd_us16x08_eq_store *VAR_19;


 if (VAR_12->hostif->desc.bInterfaceNumber == 3) {


  VAR_15 = FUNC_1(VAR_12, &VAR_11,
   VAR_2, VAR_5, 8, "Line Out Route",
   ((void*)0), 0, &VAR_16);
  if (VAR_15 < 0) {
   FUNC_5(VAR_12->chip,
    "Failed to create route control, err:%d\n",
    VAR_15);
   return VAR_15;
  }
  for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
   VAR_16->cache_val[VAR_13] = VAR_13 < 2 ? VAR_13 : VAR_13 + 2;
  VAR_16->cached = 0xff;


  VAR_17 = FUNC_2();
  if (!VAR_17)
   return -VAR_0;


  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9); VAR_13++) {

   VAR_15 = FUNC_1(VAR_12,
    VAR_9[VAR_13].kcontrol_new,
    VAR_9[VAR_13].control_id,
    VAR_9[VAR_13].type,
    VAR_9[VAR_13].num_channels,
    VAR_9[VAR_13].name,
    VAR_17,
    VAR_13 == 0,
    &VAR_16);
   if (VAR_15 < 0)
    return VAR_15;
   VAR_16->cache_val[0] = VAR_9[VAR_13].default_val;
   VAR_16->cached = 1;
  }


  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++) {

   VAR_15 = FUNC_1(VAR_12,
    VAR_6[VAR_13].kcontrol_new,
    VAR_6[VAR_13].control_id,
    VAR_6[VAR_13].type,
    VAR_6[VAR_13].num_channels,
    VAR_6[VAR_13].name,
    VAR_17,
    0, &VAR_16);
   if (VAR_15 < 0)
    return VAR_15;
   for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
    VAR_16->cache_val[VAR_14] =
     VAR_6[VAR_13].default_val;
   }
   VAR_16->cached = 0xffff;
  }


  VAR_19 = FUNC_3();
  if (!VAR_19)
   return -VAR_0;


  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {

   VAR_15 = FUNC_1(VAR_12,
    VAR_8[VAR_13].kcontrol_new,
    VAR_8[VAR_13].control_id,
    VAR_8[VAR_13].type,
    VAR_8[VAR_13].num_channels,
    VAR_8[VAR_13].name,
    VAR_19,
    VAR_13 == 0,
    ((void*)0));
   if (VAR_15 < 0)
    return VAR_15;
  }


  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {

   VAR_15 = FUNC_1(VAR_12,
    VAR_7[VAR_13].kcontrol_new,
    VAR_7[VAR_13].control_id,
    VAR_7[VAR_13].type,
    VAR_7[VAR_13].num_channels,
    VAR_7[VAR_13].name,
    VAR_17,
    0, ((void*)0));
   if (VAR_15 < 0)
    return VAR_15;
  }


  VAR_18 = FUNC_4();
  if (!VAR_18)
   return -VAR_0;




  VAR_18->comp_store = VAR_17;
  VAR_15 = FUNC_1(VAR_12, &VAR_10,
   VAR_1, VAR_4, 0, "Level Meter",
   VAR_18, 1, ((void*)0));
  if (VAR_15 < 0)
   return VAR_15;
 }

 return 0;
}
