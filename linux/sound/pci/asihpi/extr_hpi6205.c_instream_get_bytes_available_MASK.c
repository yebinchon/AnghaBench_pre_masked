
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hpi_hostbuffer_status {scalar_t__ host_index; scalar_t__ dsp_index; } ;



__attribute__((used)) static u32 FUNC_0(struct hpi_hostbuffer_status *VAR_0)
{
 return VAR_0->dsp_index - VAR_0->host_index;
}
