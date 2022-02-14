
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {struct hpi_hostbuffer_status* p_status; int * p_buffer; } ;
struct TYPE_6__ {TYPE_1__ hostbuffer_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_response {TYPE_4__ u; int error; } ;
struct hpi_message {size_t obj_index; } ;
struct hpi_hw_obj {int * instream_host_buffers; struct bus_master_interface* p_interface_buffer; } ;
struct hpi_hostbuffer_status {int dummy; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct bus_master_interface {struct hpi_hostbuffer_status* instream_host_buffer_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpi_response*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hpi_adapter_obj *VAR_3,
 struct hpi_message *VAR_4, struct hpi_response *VAR_5)
{
 struct hpi_hw_obj *VAR_6 = VAR_3->priv;
 struct bus_master_interface *VAR_7 = VAR_6->p_interface_buffer;
 struct hpi_hostbuffer_status *VAR_8;
 u8 *VAR_9;

 if (FUNC_2(&VAR_6->instream_host_buffers[VAR_4->
    obj_index])) {
  if (FUNC_1(&VAR_6->
    instream_host_buffers[VAR_4->obj_index],
    (void *)&VAR_9)) {
   VAR_5->error = VAR_0;
   return;
  }
  VAR_8 = &VAR_7->instream_host_buffer_status[VAR_4->
   obj_index];
  FUNC_0(VAR_5, VAR_2,
   VAR_1, 0);
  VAR_5->u.d.u.hostbuffer_info.p_buffer = VAR_9;
  VAR_5->u.d.u.hostbuffer_info.p_status = VAR_8;
 } else {
  FUNC_0(VAR_5, VAR_2,
   VAR_1,
   VAR_0);
 }
}
