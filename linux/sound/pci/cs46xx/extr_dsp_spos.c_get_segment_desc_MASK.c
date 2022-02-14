
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsp_segment_desc {int segment_type; } ;
struct dsp_module_desc {int nsegments; struct dsp_segment_desc* segments; } ;



__attribute__((used)) static struct dsp_segment_desc * FUNC_0 (struct dsp_module_desc * VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0;VAR_2 < VAR_0->nsegments; ++VAR_2) {
  if (VAR_0->segments[VAR_2].segment_type == VAR_1) {
   return (VAR_0->segments + VAR_2);
  }
 }

 return ((void*)0);
}
