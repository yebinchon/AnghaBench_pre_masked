
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct hpi_response {int error; } ;
struct TYPE_5__ {scalar_t__ data_size; scalar_t__ pb_data; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_message {size_t obj_index; TYPE_4__ u; int function; int object; } ;
struct hpi_hw_obj {int * instream_host_buffers; int * instream_host_buffer_size; struct bus_master_interface* p_interface_buffer; } ;
struct hpi_hostbuffer_status {int size_in_bytes; int host_index; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct bus_master_interface {struct hpi_hostbuffer_status* instream_host_buffer_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_response*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 scalar_t__ FUNC_4 (struct hpi_hostbuffer_status*) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct hpi_adapter_obj *VAR_2,
 struct hpi_message *VAR_3, struct hpi_response *VAR_4)
{
 struct hpi_hw_obj *VAR_5 = VAR_2->priv;
 struct bus_master_interface *VAR_6 = VAR_5->p_interface_buffer;
 struct hpi_hostbuffer_status *VAR_7;
 u32 VAR_8;
 u8 *VAR_9;
 u32 VAR_10;
 u8 *VAR_11 = (u8 *)VAR_3->u.d.u.data.pb_data;

 if (!VAR_5->instream_host_buffer_size[VAR_3->obj_index]) {
  FUNC_3(VAR_2, VAR_3, VAR_4);
  return;
 }
 FUNC_0(VAR_4, VAR_3->object, VAR_3->function, 0);

 VAR_7 = &VAR_6->instream_host_buffer_status[VAR_3->obj_index];
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 < VAR_3->u.d.u.data.data_size) {
  VAR_4->error = VAR_0;
  return;
 }

 if (FUNC_2(&VAR_5->instream_host_buffers[VAR_3->
    obj_index])) {
  if (FUNC_1(&VAR_5->
    instream_host_buffers[VAR_3->obj_index],
    (void *)&VAR_9)) {
   VAR_4->error = VAR_1;
   return;
  }



  VAR_10 =
   FUNC_6(VAR_3->u.d.u.data.data_size,
   VAR_7->size_in_bytes -
   (VAR_7->host_index & (VAR_7->size_in_bytes - 1)));

  FUNC_5(VAR_11,
   VAR_9 +
   (VAR_7->host_index & (VAR_7->size_in_bytes - 1)),
   VAR_10);

  FUNC_5(VAR_11 + VAR_10, VAR_9,
   VAR_3->u.d.u.data.data_size - VAR_10);
 }
 VAR_7->host_index += VAR_3->u.d.u.data.data_size;
}
