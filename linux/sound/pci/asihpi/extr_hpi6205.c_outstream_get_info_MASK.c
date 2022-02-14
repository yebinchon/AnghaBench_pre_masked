
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {int auxiliary_data_available; scalar_t__ data_available; scalar_t__ buffer_size; int samples_transferred; scalar_t__ state; } ;
struct TYPE_6__ {TYPE_1__ stream_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_response {TYPE_4__ u; } ;
struct hpi_message {size_t obj_index; int function; int object; } ;
struct hpi_hw_obj {int * outstream_host_buffer_size; struct bus_master_interface* p_interface_buffer; } ;
struct hpi_hostbuffer_status {int auxiliary_data_available; scalar_t__ size_in_bytes; int samples_processed; scalar_t__ stream_state; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct bus_master_interface {struct hpi_hostbuffer_status* outstream_host_buffer_status; } ;


 int FUNC_0 (struct hpi_response*,int ,int ,int ) ;
 int FUNC_1 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 scalar_t__ FUNC_2 (struct hpi_hostbuffer_status*) ;

__attribute__((used)) static void FUNC_3(struct hpi_adapter_obj *VAR_0,
 struct hpi_message *VAR_1, struct hpi_response *VAR_2)
{
 struct hpi_hw_obj *VAR_3 = VAR_0->priv;
 struct bus_master_interface *VAR_4 = VAR_3->p_interface_buffer;
 struct hpi_hostbuffer_status *VAR_5;

 if (!VAR_3->outstream_host_buffer_size[VAR_1->obj_index]) {
  FUNC_1(VAR_0, VAR_1, VAR_2);
  return;
 }

 FUNC_0(VAR_2, VAR_1->object, VAR_1->function, 0);

 VAR_5 = &VAR_4->outstream_host_buffer_status[VAR_1->obj_index];

 VAR_2->u.d.u.stream_info.state = (u16)VAR_5->stream_state;
 VAR_2->u.d.u.stream_info.samples_transferred =
  VAR_5->samples_processed;
 VAR_2->u.d.u.stream_info.buffer_size = VAR_5->size_in_bytes;
 VAR_2->u.d.u.stream_info.data_available =
  VAR_5->size_in_bytes - FUNC_2(VAR_5);
 VAR_2->u.d.u.stream_info.auxiliary_data_available =
  VAR_5->auxiliary_data_available;
}
