
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hpi_response_header {int dummy; } ;
struct hpi_response {scalar_t__ error; int size; scalar_t__ specific_error; } ;
struct TYPE_5__ {int data_size; int pb_data; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_message {int function; TYPE_4__ u; } ;
struct hpi_adapter_obj {scalar_t__ dsp_crashed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 scalar_t__ FUNC_0 (struct hpi_adapter_obj*,int ,int ,int ) ;
 int FUNC_1 (struct hpi_adapter_obj*) ;
 int FUNC_2 (struct hpi_adapter_obj*) ;
 scalar_t__ FUNC_3 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_4(struct hpi_adapter_obj *VAR_4, struct hpi_message *VAR_5,
 struct hpi_response *VAR_6)
{

 u16 VAR_7 = 0;

 FUNC_1(VAR_4);

 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6);


 if (VAR_7) {

  if (VAR_7 >= VAR_2) {
   VAR_6->error = VAR_3;
   VAR_6->specific_error = VAR_7;
  } else {
   VAR_6->error = VAR_7;
  }

  VAR_4->dsp_crashed++;


  VAR_6->size = sizeof(struct hpi_response_header);
  goto err;
 } else
  VAR_4->dsp_crashed = 0;

 if (VAR_6->error != 0)
  goto err;

 switch (VAR_5->function) {
 case 128:
 case 131:
  VAR_7 = FUNC_0(VAR_4, VAR_5->u.d.u.data.pb_data,
   VAR_5->u.d.u.data.data_size, VAR_1);
  break;

 case 130:
 case 129:
  VAR_7 = FUNC_0(VAR_4, VAR_5->u.d.u.data.pb_data,
   VAR_5->u.d.u.data.data_size, VAR_0);
  break;

 }
 VAR_6->error = VAR_7;

err:
 FUNC_2(VAR_4);

 return;
}
