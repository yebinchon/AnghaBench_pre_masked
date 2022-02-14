
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct hpi_response_header {int dummy; } ;
struct TYPE_12__ {int dsp_index; int count; } ;
struct TYPE_13__ {TYPE_5__ assert; } ;
struct TYPE_14__ {TYPE_6__ ax; } ;
struct hpi_response {int error; int specific_error; int size; TYPE_7__ u; } ;
struct TYPE_8__ {int object_type; int stream_index; } ;
struct TYPE_9__ {TYPE_1__ stream; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_11__ {TYPE_3__ d; } ;
struct hpi_message {int function; TYPE_4__ u; int object; int obj_index; } ;
struct hpi_hw_obj {int num_dsp; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;

 int FUNC_0 (struct hpi_adapter_obj*,struct hpi_message*) ;
 int FUNC_1 (struct hpi_adapter_obj*,int,struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_adapter_obj*,int,struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 (struct hpi_adapter_obj*,int,struct hpi_message*,struct hpi_response*) ;
 int FUNC_4 (struct hpi_adapter_obj*) ;
 int FUNC_5 (struct hpi_adapter_obj*) ;

__attribute__((used)) static void FUNC_6(struct hpi_adapter_obj *VAR_5, struct hpi_message *VAR_6,
 struct hpi_response *VAR_7)
{
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 struct hpi_hw_obj *VAR_10 = VAR_5->priv;
 u16 VAR_11 = VAR_10->num_dsp;

 if (VAR_11 < 2)
  VAR_9 = 0;
 else {
  VAR_9 = FUNC_0(VAR_5, VAR_6);


  if ((VAR_6->function == VAR_3)
   || (VAR_6->function == VAR_4)) {
   struct hpi_message VAR_12;
   u16 VAR_13;
   VAR_12.obj_index = VAR_6->u.d.u.stream.stream_index;
   VAR_12.object = VAR_6->u.d.u.stream.object_type;
   VAR_13 = FUNC_0(VAR_5, &VAR_12);
   if (VAR_13 != VAR_9) {
    VAR_7->error = VAR_2;
    return;
   }
  }
 }

 FUNC_4(VAR_5);
 VAR_8 = FUNC_2(VAR_5, VAR_9, VAR_6, VAR_7);

 if (VAR_8)
  goto err;

 if (VAR_7->error)
  goto out;

 switch (VAR_6->function) {
 case 128:
 case 131:
  VAR_8 = FUNC_3(VAR_5, VAR_9, VAR_6, VAR_7);
  break;
 case 130:
 case 129:
  VAR_8 = FUNC_1(VAR_5, VAR_9, VAR_6, VAR_7);
  break;
 case 132:
  VAR_7->u.ax.assert.dsp_index = 0;
  if (VAR_11 == 2) {
   if (!VAR_7->u.ax.assert.count) {

    VAR_8 = FUNC_2(VAR_5,
     1, VAR_6, VAR_7);
    VAR_7->u.ax.assert.dsp_index = 1;
   }
  }
 }

err:
 if (VAR_8) {
  if (VAR_8 >= VAR_0) {
   VAR_7->error = VAR_1;
   VAR_7->specific_error = VAR_8;
  } else {
   VAR_7->error = VAR_8;
  }


  VAR_7->size = sizeof(struct hpi_response_header);
 }
out:
 FUNC_5(VAR_5);
 return;
}
