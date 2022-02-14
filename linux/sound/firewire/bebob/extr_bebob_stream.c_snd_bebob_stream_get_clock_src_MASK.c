
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct snd_bebob_clock_spec {int (* get ) (struct snd_bebob*,unsigned int*) ;unsigned int num; int* types; } ;
struct snd_bebob {unsigned int sync_input_plug; TYPE_2__* unit; TYPE_1__* spec; } ;
typedef enum snd_bebob_clock_type { ____Placeholder_snd_bebob_clock_type } snd_bebob_clock_type ;
typedef enum avc_bridgeco_plug_type { ____Placeholder_avc_bridgeco_plug_type } avc_bridgeco_plug_type ;
struct TYPE_5__ {int device; } ;
struct TYPE_4__ {struct snd_bebob_clock_spec* clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int*,int ,unsigned int) ;
 int FUNC_1 (int*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int*,int*) ;
 int FUNC_3 (TYPE_2__*,int*,int*) ;
 int FUNC_4 (int *,char*,unsigned int,...) ;
 int FUNC_5 (struct snd_bebob*,unsigned int*) ;

int FUNC_6(struct snd_bebob *VAR_14,
       enum snd_bebob_clock_type *VAR_15)
{
 const struct snd_bebob_clock_spec *VAR_16 = VAR_14->spec->clock;
 u8 VAR_17[VAR_0], VAR_18[7];
 unsigned int VAR_19;
 enum avc_bridgeco_plug_type VAR_20;
 int VAR_21 = 0;


 if (VAR_16) {
  VAR_21 = VAR_16->get(VAR_14, &VAR_19);
  if (VAR_21 < 0) {
   FUNC_4(&VAR_14->unit->device,
    "fail to get clock source: %d\n", VAR_21);
   goto end;
  }

  if (VAR_19 >= VAR_16->num) {
   FUNC_4(&VAR_14->unit->device,
    "clock source %d out of range 0..%d\n",
    VAR_19, VAR_16->num - 1);
   VAR_21 = -VAR_10;
   goto end;
  }

  *VAR_15 = VAR_16->types[VAR_19];
  goto end;
 }





 if (VAR_14->sync_input_plug < 0) {
  *VAR_15 = VAR_12;
  goto end;
 }





 FUNC_0(VAR_17, VAR_1,
       VAR_14->sync_input_plug);
 VAR_21 = FUNC_2(VAR_14->unit, VAR_17, VAR_18);
 if (VAR_21 < 0) {
  FUNC_4(&VAR_14->unit->device,
   "fail to get an input for MSU in plug %d: %d\n",
   VAR_14->sync_input_plug, VAR_21);
  goto end;
 }





 if (VAR_18[0] == 0xff) {
  *VAR_15 = VAR_12;
  goto end;
 }


 if (VAR_18[0] == VAR_2) {





  if (VAR_18[1] == VAR_3 &&
      VAR_18[2] == 0x0c) {
   *VAR_15 = VAR_12;
   goto end;
  }

 } else if (VAR_18[1] == VAR_4) {
  if (VAR_18[2] == VAR_9) {
   if (VAR_18[3] == 0x00) {







    *VAR_15 = VAR_13;
    goto end;
   } else {





    *VAR_15 = VAR_11;
    goto end;
   }
  } else if (VAR_18[2] == VAR_8) {

   FUNC_1(VAR_17,
          VAR_1,
          VAR_8,
          VAR_18[3]);
   VAR_21 = FUNC_3(VAR_14->unit, VAR_17,
        &VAR_20);
   if (VAR_21 < 0)
    goto end;

   if (VAR_20 == VAR_6) {




    *VAR_15 = VAR_11;
    goto end;
   } else if (VAR_20 == VAR_7) {

    *VAR_15 = VAR_11;
    goto end;
   } else if (VAR_20 == VAR_5) {




    *VAR_15 = VAR_12;
    goto end;
   }
  }
 }


 VAR_21 = -VAR_10;
end:
 return VAR_21;
}
