
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
struct snd_bebob_clock_spec {int dummy; } ;
struct snd_bebob {scalar_t__ midi_output_ports; TYPE_2__* unit; scalar_t__ midi_input_ports; TYPE_1__* spec; } ;
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
 int FUNC_0 (unsigned int*,int ,int ,unsigned int) ;
 int FUNC_1 (TYPE_2__*,unsigned int*,int*) ;
 int FUNC_2 (TYPE_2__*,int,int,int,unsigned int*) ;
 int FUNC_3 (int *,char*,unsigned int,...) ;
 int FUNC_4 (struct snd_bebob*,int ,int ) ;
 int FUNC_5 (struct snd_bebob*) ;

int FUNC_6(struct snd_bebob *VAR_9)
{
 const struct snd_bebob_clock_spec *VAR_10 = VAR_9->spec->clock;
 u8 VAR_11[VAR_7], VAR_12[VAR_0];
 enum avc_bridgeco_plug_type VAR_13;
 unsigned int VAR_14;
 int VAR_15;


 VAR_15 = FUNC_2(VAR_9->unit, 0x1f, 0x07, 0x00, VAR_11);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_9->unit->device,
  "fail to get info for isoc/external in/out plugs: %d\n",
   VAR_15);
  goto end;
 }





 if ((VAR_11[0] == 0) || (VAR_11[1] == 0)) {
  VAR_15 = -VAR_8;
  goto end;
 }

 FUNC_0(VAR_12, VAR_1,
        VAR_6, 0);
 VAR_15 = FUNC_1(VAR_9->unit, VAR_12, &VAR_13);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_9->unit->device,
   "fail to get type for isoc in plug 0: %d\n", VAR_15);
  goto end;
 } else if (VAR_13 != VAR_3) {
  VAR_15 = -VAR_8;
  goto end;
 }
 VAR_15 = FUNC_4(VAR_9, VAR_1, 0);
 if (VAR_15 < 0)
  goto end;

 FUNC_0(VAR_12, VAR_2,
        VAR_6, 0);
 VAR_15 = FUNC_1(VAR_9->unit, VAR_12, &VAR_13);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_9->unit->device,
   "fail to get type for isoc out plug 0: %d\n", VAR_15);
  goto end;
 } else if (VAR_13 != VAR_3) {
  VAR_15 = -VAR_8;
  goto end;
 }
 VAR_15 = FUNC_4(VAR_9, VAR_2, 0);
 if (VAR_15 < 0)
  goto end;


 VAR_9->midi_input_ports = 0;
 for (VAR_14 = 0; VAR_14 < VAR_11[2]; VAR_14++) {
  FUNC_0(VAR_12, VAR_1,
         VAR_5, VAR_14);
  VAR_15 = FUNC_1(VAR_9->unit, VAR_12, &VAR_13);
  if (VAR_15 < 0) {
   FUNC_3(&VAR_9->unit->device,
   "fail to get type for external in plug %d: %d\n",
    VAR_14, VAR_15);
   goto end;
  } else if (VAR_13 == VAR_4) {
   VAR_9->midi_input_ports++;
  }
 }


 VAR_9->midi_output_ports = 0;
 for (VAR_14 = 0; VAR_14 < VAR_11[3]; VAR_14++) {
  FUNC_0(VAR_12, VAR_2,
         VAR_5, VAR_14);
  VAR_15 = FUNC_1(VAR_9->unit, VAR_12, &VAR_13);
  if (VAR_15 < 0) {
   FUNC_3(&VAR_9->unit->device,
   "fail to get type for external out plug %d: %d\n",
    VAR_14, VAR_15);
   goto end;
  } else if (VAR_13 == VAR_4) {
   VAR_9->midi_output_ports++;
  }
 }


 if (!VAR_10)
  VAR_15 = FUNC_5(VAR_9);
end:
 return VAR_15;
}
