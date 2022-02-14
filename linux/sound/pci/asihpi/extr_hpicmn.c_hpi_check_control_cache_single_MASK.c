
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef scalar_t__ u16 ;
struct hpi_response_header {int dummy; } ;
struct TYPE_29__ {unsigned int remaining_chars; int sz_data; } ;
struct TYPE_42__ {void* s_level; } ;
struct TYPE_30__ {TYPE_15__ chars8; TYPE_6__ tuner; } ;
struct TYPE_28__ {int param1; void** an_log_value; int param2; } ;
struct TYPE_31__ {TYPE_16__ cu; TYPE_14__ c; } ;
struct hpi_response {int function; int object; int type; scalar_t__ size; TYPE_17__ u; void* error; } ;
struct TYPE_35__ {unsigned int param1; int attribute; } ;
struct TYPE_36__ {TYPE_20__ c; } ;
struct hpi_message {int function; int object; TYPE_21__ u; int adapter_index; } ;
struct hpi_control_res {int dummy; } ;
struct TYPE_32__ {int control_type; int control_index; } ;
struct TYPE_27__ {int sample_rate; int source_index; int source; } ;
struct TYPE_26__ {int phantom_state; } ;
struct TYPE_25__ {int state; } ;
struct TYPE_24__ {int state; } ;
struct TYPE_45__ {int format; } ;
struct TYPE_44__ {int format; int error_status; } ;
struct TYPE_43__ {void* s_level_avg; int band; int freq_ink_hz; } ;
struct TYPE_41__ {void** an_log; } ;
struct TYPE_40__ {int mode; } ;
struct TYPE_39__ {int source_node_index; int source_node_type; } ;
struct TYPE_38__ {int flags; void** an_log; } ;
struct TYPE_34__ {void** an_logRMS; void** an_log_peak; } ;
struct TYPE_33__ {TYPE_18__ i; TYPE_13__ clk; TYPE_12__ microphone; TYPE_11__ silence; TYPE_10__ tone; TYPE_9__ aes3tx; TYPE_8__ aes3rx; TYPE_7__ tuner; TYPE_5__ level; TYPE_4__ mode; TYPE_3__ mux; TYPE_2__ vol; TYPE_1__ meter; } ;
struct hpi_control_cache_single {TYPE_19__ u; } ;
struct hpi_control_cache_pad {int field_valid_flags; int pTY; int pI; } ;
struct TYPE_37__ {int offset; unsigned int field_size; } ;


 int FUNC_0 (TYPE_22__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int ,int ,int ,int ) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 TYPE_22__* VAR_31 ;
 int FUNC_4 (char*) ;

short FUNC_5(struct hpi_control_cache_single *VAR_32,
 struct hpi_message *VAR_33, struct hpi_response *VAR_34)
{
 size_t VAR_35;
 short VAR_36 = 1;


 VAR_35 =
  sizeof(struct hpi_response_header) +
  sizeof(struct hpi_control_res);

 switch (VAR_32->u.i.control_type) {

 case 136:
  if (VAR_33->u.c.attribute == VAR_11) {
   VAR_34->u.c.an_log_value[0] = VAR_32->u.meter.an_log_peak[0];
   VAR_34->u.c.an_log_value[1] = VAR_32->u.meter.an_log_peak[1];
  } else if (VAR_33->u.c.attribute == VAR_12) {
   if (VAR_32->u.meter.an_logRMS[0] ==
    VAR_4) {
    VAR_34->error =
     VAR_7;
    VAR_34->u.c.an_log_value[0] = VAR_10;
    VAR_34->u.c.an_log_value[1] = VAR_10;
   } else {
    VAR_34->u.c.an_log_value[0] =
     VAR_32->u.meter.an_logRMS[0];
    VAR_34->u.c.an_log_value[1] =
     VAR_32->u.meter.an_logRMS[1];
   }
  } else
   VAR_36 = 0;
  break;
 case 128:
  if (VAR_33->u.c.attribute == VAR_28) {
   VAR_34->u.c.an_log_value[0] = VAR_32->u.vol.an_log[0];
   VAR_34->u.c.an_log_value[1] = VAR_32->u.vol.an_log[1];
  } else if (VAR_33->u.c.attribute == VAR_29) {
   if (VAR_32->u.vol.flags & VAR_26) {
    if (VAR_32->u.vol.flags & VAR_27)
     VAR_34->u.c.param1 =
      VAR_3;
    else
     VAR_34->u.c.param1 = 0;
   } else {
    VAR_34->error =
     VAR_7;
    VAR_34->u.c.param1 = 0;
   }
  } else {
   VAR_36 = 0;
  }
  break;
 case 134:
  if (VAR_33->u.c.attribute == VAR_14) {
   VAR_34->u.c.param1 = VAR_32->u.mux.source_node_type;
   VAR_34->u.c.param2 = VAR_32->u.mux.source_node_index;
  } else {
   VAR_36 = 0;
  }
  break;
 case 138:
  if (VAR_33->u.c.attribute == VAR_6)
   VAR_34->u.c.param1 = VAR_32->u.mode.mode;
  else
   VAR_36 = 0;
  break;
 case 137:
  if (VAR_33->u.c.attribute == VAR_9) {
   VAR_34->u.c.an_log_value[0] = VAR_32->u.level.an_log[0];
   VAR_34->u.c.an_log_value[1] = VAR_32->u.level.an_log[1];
  } else
   VAR_36 = 0;
  break;
 case 129:
  if (VAR_33->u.c.attribute == VAR_23)
   VAR_34->u.c.param1 = VAR_32->u.tuner.freq_ink_hz;
  else if (VAR_33->u.c.attribute == VAR_22)
   VAR_34->u.c.param1 = VAR_32->u.tuner.band;
  else if (VAR_33->u.c.attribute == VAR_24)
   if (VAR_32->u.tuner.s_level_avg ==
    VAR_4) {
    VAR_34->u.cu.tuner.s_level = 0;
    VAR_34->error =
     VAR_7;
   } else
    VAR_34->u.cu.tuner.s_level =
     VAR_32->u.tuner.s_level_avg;
  else
   VAR_36 = 0;
  break;
 case 140:
  if (VAR_33->u.c.attribute == VAR_0)
   VAR_34->u.c.param1 = VAR_32->u.aes3rx.error_status;
  else if (VAR_33->u.c.attribute == VAR_1)
   VAR_34->u.c.param1 = VAR_32->u.aes3rx.format;
  else
   VAR_36 = 0;
  break;
 case 139:
  if (VAR_33->u.c.attribute == VAR_2)
   VAR_34->u.c.param1 = VAR_32->u.aes3tx.format;
  else
   VAR_36 = 0;
  break;
 case 130:
  if (VAR_33->u.c.attribute == VAR_21)
   VAR_34->u.c.param1 = VAR_32->u.tone.state;
  else
   VAR_36 = 0;
  break;
 case 131:
  if (VAR_33->u.c.attribute == VAR_20) {
   VAR_34->u.c.param1 = VAR_32->u.silence.state;
  } else
   VAR_36 = 0;
  break;
 case 135:
  if (VAR_33->u.c.attribute == VAR_13)
   VAR_34->u.c.param1 = VAR_32->u.microphone.phantom_state;
  else
   VAR_36 = 0;
  break;
 case 132:
  if (VAR_33->u.c.attribute == VAR_18)
   VAR_34->u.c.param1 = VAR_32->u.clk.source;
  else if (VAR_33->u.c.attribute == VAR_19) {
   if (VAR_32->u.clk.source_index ==
    VAR_5) {
    VAR_34->u.c.param1 = 0;
    VAR_34->error =
     VAR_7;
   } else
    VAR_34->u.c.param1 = VAR_32->u.clk.source_index;
  } else if (VAR_33->u.c.attribute == VAR_17)
   VAR_34->u.c.param1 = VAR_32->u.clk.sample_rate;
  else
   VAR_36 = 0;
  break;
 case 133:{
   struct hpi_control_cache_pad *VAR_37;
   VAR_37 = (struct hpi_control_cache_pad *)VAR_32;

   if (!(VAR_37->field_valid_flags & (1 <<
      FUNC_1(VAR_33->u.c.
       attribute)))) {
    VAR_34->error =
     VAR_7;
    break;
   }

   if (VAR_33->u.c.attribute == VAR_15)
    VAR_34->u.c.param1 = VAR_37->pI;
   else if (VAR_33->u.c.attribute == VAR_16)
    VAR_34->u.c.param1 = VAR_37->pTY;
   else {
    unsigned int VAR_38 =
     FUNC_1(VAR_33->u.c.
     attribute) - 1;
    unsigned int VAR_39 = VAR_33->u.c.param1;
    unsigned int VAR_40, VAR_41;
    char *VAR_42;
    unsigned int VAR_43;

    if (VAR_38 > FUNC_0(VAR_31) - 1) {
     VAR_34->error =
      VAR_7;
     break;
    }

    VAR_42 =
     ((char *)VAR_37) +
     VAR_31[VAR_38].offset;
    VAR_41 = VAR_31[VAR_38].field_size;

    VAR_42[VAR_41 - 1] = 0;

    VAR_40 = FUNC_4(VAR_42) + 1;

    if (VAR_39 > VAR_40) {
     VAR_34->error =
      VAR_8;
     break;
    }

    VAR_43 = VAR_40 - VAR_39;
    if (VAR_43 > sizeof(VAR_34->u.cu.chars8.sz_data))
     VAR_43 = sizeof(VAR_34->u.cu.chars8.
      sz_data);

    FUNC_3(VAR_34->u.cu.chars8.sz_data,
     &VAR_42[VAR_39], VAR_43);

    VAR_34->u.cu.chars8.remaining_chars =
     VAR_40 - VAR_39 - VAR_43;
   }
  }
  break;
 default:
  VAR_36 = 0;
  break;
 }

 FUNC_2(VAR_30, "%s Adap %d, Ctl %d, Type %d, Attr %d\n",
  VAR_36 ? "Cached" : "Uncached", VAR_33->adapter_index,
  VAR_32->u.i.control_index, VAR_32->u.i.control_type,
  VAR_33->u.c.attribute);

 if (VAR_36) {
  VAR_34->size = (u16)VAR_35;
  VAR_34->type = VAR_25;
  VAR_34->object = VAR_33->object;
  VAR_34->function = VAR_33->function;
 }

 return VAR_36;
}
