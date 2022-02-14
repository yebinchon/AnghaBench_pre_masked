
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressor_data {size_t envelope_buf_len; size_t num_channels; void** sidechain_buf; void* envelope_buf; } ;


 void* FUNC_0 (void*,size_t) ;

__attribute__((used)) static void FUNC_1(struct compressor_data *VAR_0, size_t VAR_1)
{
 VAR_0->envelope_buf_len = VAR_1;
 VAR_0->envelope_buf = FUNC_0(VAR_0->envelope_buf, VAR_1 * sizeof(float));

 for (size_t VAR_2 = 0; VAR_2 < VAR_0->num_channels; VAR_2++)
  VAR_0->sidechain_buf[VAR_2] =
   FUNC_0(VAR_0->sidechain_buf[VAR_2], VAR_1 * sizeof(float));
}
