
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_11__ {int data_available; int buffer_size; int auxiliary_data_available; } ;
struct TYPE_12__ {TYPE_2__ stream_info; } ;
struct TYPE_13__ {TYPE_3__ u; } ;
struct TYPE_14__ {TYPE_4__ d; } ;
struct hpi_response {void* error; TYPE_5__ u; } ;
struct TYPE_15__ {scalar_t__ command; int buffer_size; int pci_address; } ;
struct TYPE_16__ {TYPE_6__ buffer; } ;
struct TYPE_17__ {TYPE_7__ u; } ;
struct TYPE_18__ {TYPE_8__ d; } ;
struct hpi_message {size_t obj_index; TYPE_9__ u; int function; int object; } ;
struct hpi_hw_obj {int* outstream_host_buffer_size; int * outstream_host_buffers; struct bus_master_interface* p_interface_buffer; } ;
struct hpi_hostbuffer_status {int size_in_bytes; scalar_t__ auxiliary_data_available; scalar_t__ dsp_index; scalar_t__ host_index; int stream_state; scalar_t__ samples_processed; } ;
struct TYPE_10__ {int pci_dev; } ;
struct hpi_adapter_obj {TYPE_1__ pci; struct hpi_hw_obj* priv; } ;
struct bus_master_interface {struct hpi_hostbuffer_status* outstream_host_buffer_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hpi_response*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct hpi_adapter_obj *VAR_7,
 struct hpi_message *VAR_8, struct hpi_response *VAR_9)
{
 u16 VAR_10 = 0;
 u32 VAR_11 = VAR_8->u.d.u.buffer.command;
 struct hpi_hw_obj *VAR_12 = VAR_7->priv;
 struct bus_master_interface *VAR_13 = VAR_12->p_interface_buffer;

 FUNC_1(VAR_9, VAR_8->object, VAR_8->function, 0);

 if (VAR_11 == VAR_1
  || VAR_11 == VAR_2) {



  VAR_8->u.d.u.buffer.buffer_size =
   FUNC_7(VAR_8->u.d.u.buffer.buffer_size);


  VAR_9->u.d.u.stream_info.data_available =
   VAR_12->outstream_host_buffer_size[VAR_8->obj_index];
  VAR_9->u.d.u.stream_info.buffer_size =
   VAR_8->u.d.u.buffer.buffer_size;

  if (VAR_12->outstream_host_buffer_size[VAR_8->obj_index] ==
   VAR_8->u.d.u.buffer.buffer_size) {

   return;
  }

  if (FUNC_5(&VAR_12->outstream_host_buffers[VAR_8->
     obj_index]))
   FUNC_3(&VAR_12->outstream_host_buffers
    [VAR_8->obj_index]);

  VAR_10 = FUNC_2(&VAR_12->outstream_host_buffers
   [VAR_8->obj_index], VAR_8->u.d.u.buffer.buffer_size,
   VAR_7->pci.pci_dev);

  if (VAR_10) {
   VAR_9->error = VAR_4;
   VAR_12->outstream_host_buffer_size[VAR_8->obj_index] = 0;
   return;
  }

  VAR_10 = FUNC_4
   (&VAR_12->outstream_host_buffers[VAR_8->obj_index],
   &VAR_8->u.d.u.buffer.pci_address);




  VAR_9->u.d.u.stream_info.auxiliary_data_available =
   VAR_8->u.d.u.buffer.pci_address;

  if (VAR_10) {
   FUNC_3(&VAR_12->outstream_host_buffers
    [VAR_8->obj_index]);
   VAR_12->outstream_host_buffer_size[VAR_8->obj_index] = 0;
   VAR_9->error = VAR_5;
   return;
  }
 }

 if (VAR_11 == VAR_1
  || VAR_11 == VAR_3) {



  struct hpi_hostbuffer_status *VAR_14;

  if (VAR_8->u.d.u.buffer.buffer_size & (VAR_8->u.d.u.buffer.
    buffer_size - 1)) {
   FUNC_0(VAR_0,
    "Buffer size must be 2^N not %d\n",
    VAR_8->u.d.u.buffer.buffer_size);
   VAR_9->error = VAR_4;
   return;
  }
  VAR_12->outstream_host_buffer_size[VAR_8->obj_index] =
   VAR_8->u.d.u.buffer.buffer_size;
  VAR_14 = &VAR_13->outstream_host_buffer_status[VAR_8->
   obj_index];
  VAR_14->samples_processed = 0;
  VAR_14->stream_state = VAR_6;
  VAR_14->dsp_index = 0;
  VAR_14->host_index = VAR_14->dsp_index;
  VAR_14->size_in_bytes = VAR_8->u.d.u.buffer.buffer_size;
  VAR_14->auxiliary_data_available = 0;

  FUNC_6(VAR_7, VAR_8, VAR_9);

  if (VAR_9->error
   && FUNC_5(&VAR_12->
    outstream_host_buffers[VAR_8->obj_index])) {
   FUNC_3(&VAR_12->outstream_host_buffers
    [VAR_8->obj_index]);
   VAR_12->outstream_host_buffer_size[VAR_8->obj_index] = 0;
  }
 }
}
