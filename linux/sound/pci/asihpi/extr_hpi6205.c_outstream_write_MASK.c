
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
typedef int u16 ;
struct hpi_response {scalar_t__ error; } ;
struct TYPE_5__ {scalar_t__ data_size; scalar_t__ pb_data; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_message {size_t obj_index; TYPE_4__ u; int function; int object; } ;
struct hpi_hw_obj {scalar_t__* flag_outstream_just_reset; int * outstream_host_buffers; int * outstream_host_buffer_size; struct bus_master_interface* p_interface_buffer; } ;
struct hpi_hostbuffer_status {int size_in_bytes; int host_index; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct bus_master_interface {struct hpi_hostbuffer_status* outstream_host_buffer_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpi_response*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct hpi_hostbuffer_status*) ;

__attribute__((used)) static void FUNC_7(struct hpi_adapter_obj *VAR_3,
 struct hpi_message *VAR_4, struct hpi_response *VAR_5)
{
 struct hpi_hw_obj *VAR_6 = VAR_3->priv;
 struct bus_master_interface *VAR_7 = VAR_6->p_interface_buffer;
 struct hpi_hostbuffer_status *VAR_8;
 u32 VAR_9;

 if (!VAR_6->outstream_host_buffer_size[VAR_4->obj_index]) {

  FUNC_3(VAR_3, VAR_4, VAR_5);
  return;
 }

 FUNC_0(VAR_5, VAR_4->object, VAR_4->function, 0);
 VAR_8 = &VAR_7->outstream_host_buffer_status[VAR_4->obj_index];

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 < VAR_4->u.d.u.data.data_size) {
  VAR_5->error = VAR_0;
  return;
 }



 if (VAR_4->u.d.u.data.pb_data
  && FUNC_2(&VAR_6->outstream_host_buffers[VAR_4->
    obj_index])) {
  u8 *VAR_10;
  u32 VAR_11;
  u8 *VAR_12 = (u8 *)VAR_4->u.d.u.data.pb_data;

  if (FUNC_1(&VAR_6->
    outstream_host_buffers[VAR_4->obj_index],
    (void *)&VAR_10)) {
   VAR_5->error = VAR_1;
   return;
  }



  VAR_11 =
   FUNC_5(VAR_4->u.d.u.data.data_size,
   VAR_8->size_in_bytes -
   (VAR_8->host_index & (VAR_8->size_in_bytes - 1)));

  FUNC_4(VAR_10 +
   (VAR_8->host_index & (VAR_8->size_in_bytes - 1)),
   VAR_12, VAR_11);

  FUNC_4(VAR_10, VAR_12 + VAR_11,
   VAR_4->u.d.u.data.data_size - VAR_11);
 }







 if (VAR_6->flag_outstream_just_reset[VAR_4->obj_index]) {

  u16 VAR_13 = VAR_4->function;
  VAR_6->flag_outstream_just_reset[VAR_4->obj_index] = 0;
  VAR_4->function = VAR_2;
  FUNC_3(VAR_3, VAR_4, VAR_5);
  VAR_4->function = VAR_13;
  if (VAR_5->error)
   return;
 }

 VAR_8->host_index += VAR_4->u.d.u.data.data_size;
}
