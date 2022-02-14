
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef void* u16 ;
struct TYPE_22__ {int * an_log_value; } ;
struct TYPE_23__ {TYPE_5__ c; } ;
struct hpi_response {TYPE_6__ u; } ;
struct TYPE_16__ {int param1; int attribute; int param2; } ;
struct TYPE_17__ {TYPE_12__ c; } ;
struct hpi_message {TYPE_13__ u; } ;
struct TYPE_14__ {int sample_rate; void* source_index; void* source; } ;
struct TYPE_26__ {int format; } ;
struct TYPE_25__ {int format; } ;
struct TYPE_24__ {void* phantom_state; } ;
struct TYPE_21__ {int * an_log; int flags; } ;
struct TYPE_20__ {void* mode; } ;
struct TYPE_19__ {void* source_node_index; void* source_node_type; } ;
struct TYPE_18__ {int control_type; } ;
struct TYPE_15__ {TYPE_10__ clk; TYPE_9__ aes3rx; TYPE_8__ aes3tx; TYPE_7__ microphone; TYPE_4__ vol; TYPE_3__ mode; TYPE_2__ mux; TYPE_1__ i; } ;
struct hpi_control_cache_single {TYPE_11__ u; } ;


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

void FUNC_0(struct hpi_control_cache_single
 *VAR_12, struct hpi_message *VAR_13, struct hpi_response *VAR_14)
{
 switch (VAR_12->u.i.control_type) {
 case 128:
  if (VAR_13->u.c.attribute == VAR_10) {
   VAR_12->u.vol.an_log[0] = VAR_14->u.c.an_log_value[0];
   VAR_12->u.vol.an_log[1] = VAR_14->u.c.an_log_value[1];
  } else if (VAR_13->u.c.attribute == VAR_11) {
   if (VAR_13->u.c.param1)
    VAR_12->u.vol.flags |= VAR_9;
   else
    VAR_12->u.vol.flags &= ~VAR_9;
  }
  break;
 case 130:

  if (VAR_13->u.c.attribute == VAR_5) {
   VAR_12->u.mux.source_node_type = (u16)VAR_13->u.c.param1;
   VAR_12->u.mux.source_node_index = (u16)VAR_13->u.c.param2;
  }
  break;
 case 133:

  if (VAR_13->u.c.attribute == VAR_2)
   VAR_12->u.mode.mode = (u16)VAR_13->u.c.param1;
  break;
 case 132:
  if (VAR_13->u.c.attribute == VAR_3) {
   VAR_12->u.vol.an_log[0] = VAR_14->u.c.an_log_value[0];
   VAR_12->u.vol.an_log[1] = VAR_14->u.c.an_log_value[1];
  }
  break;
 case 131:
  if (VAR_13->u.c.attribute == VAR_4)
   VAR_12->u.microphone.phantom_state = (u16)VAR_13->u.c.param1;
  break;
 case 134:
  if (VAR_13->u.c.attribute == VAR_1)
   VAR_12->u.aes3tx.format = VAR_13->u.c.param1;
  break;
 case 135:
  if (VAR_13->u.c.attribute == VAR_0)
   VAR_12->u.aes3rx.format = VAR_13->u.c.param1;
  break;
 case 129:
  if (VAR_13->u.c.attribute == VAR_7)
   VAR_12->u.clk.source = (u16)VAR_13->u.c.param1;
  else if (VAR_13->u.c.attribute == VAR_8)
   VAR_12->u.clk.source_index = (u16)VAR_13->u.c.param1;
  else if (VAR_13->u.c.attribute == VAR_6)
   VAR_12->u.clk.sample_rate = VAR_13->u.c.param1;
  break;
 default:
  break;
 }
}
