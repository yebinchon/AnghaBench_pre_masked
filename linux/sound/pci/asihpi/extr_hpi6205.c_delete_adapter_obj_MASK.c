
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_hw_obj {scalar_t__* outstream_host_buffer_size; int * outstream_host_buffers; scalar_t__* instream_host_buffer_size; int * instream_host_buffers; int * p_interface_buffer; int h_locked_mem; int p_cache; int h_control_cache; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct hpi_hw_obj*) ;

__attribute__((used)) static void FUNC_4(struct hpi_adapter_obj *VAR_1)
{
 struct hpi_hw_obj *VAR_2 = VAR_1->priv;
 int VAR_3;

 if (FUNC_2(&VAR_2->h_control_cache)) {
  FUNC_1(&VAR_2->h_control_cache);
  FUNC_0(VAR_2->p_cache);
 }

 if (FUNC_2(&VAR_2->h_locked_mem)) {
  FUNC_1(&VAR_2->h_locked_mem);
  VAR_2->p_interface_buffer = ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_2(&VAR_2->instream_host_buffers[VAR_3])) {
   FUNC_1(&VAR_2->instream_host_buffers[VAR_3]);

   VAR_2->instream_host_buffer_size[VAR_3] = 0;
  }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_2(&VAR_2->outstream_host_buffers[VAR_3])) {
   FUNC_1(&VAR_2->outstream_host_buffers
    [VAR_3]);
   VAR_2->outstream_host_buffer_size[VAR_3] = 0;
  }
 FUNC_3(VAR_2);
}
