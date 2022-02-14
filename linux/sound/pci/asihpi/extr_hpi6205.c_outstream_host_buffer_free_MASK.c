
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hpi_response {int dummy; } ;
struct TYPE_8__ {scalar_t__ command; } ;
struct TYPE_5__ {TYPE_4__ buffer; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ d; } ;
struct hpi_message {size_t obj_index; TYPE_3__ u; } ;
struct hpi_hw_obj {int * outstream_host_buffers; scalar_t__* outstream_host_buffer_size; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hpi_response*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_3(struct hpi_adapter_obj *VAR_5,
 struct hpi_message *VAR_6, struct hpi_response *VAR_7)
{
 struct hpi_hw_obj *VAR_8 = VAR_5->priv;
 u32 VAR_9 = VAR_6->u.d.u.buffer.command;

 if (VAR_8->outstream_host_buffer_size[VAR_6->obj_index]) {
  if (VAR_9 == VAR_0
   || VAR_9 == VAR_2) {
   VAR_8->outstream_host_buffer_size[VAR_6->obj_index] = 0;
   FUNC_2(VAR_5, VAR_6, VAR_7);

  }
  if (VAR_9 == VAR_0
   || VAR_9 == VAR_1)
   FUNC_1(&VAR_8->outstream_host_buffers
    [VAR_6->obj_index]);
 }


 else
  FUNC_0(VAR_7, VAR_3,
   VAR_4, 0);

}
