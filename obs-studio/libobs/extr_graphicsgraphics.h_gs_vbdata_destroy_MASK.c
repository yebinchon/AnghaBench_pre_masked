
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct gs_vb_data {size_t num_tex; struct gs_vb_data* tvarray; struct gs_vb_data* array; struct gs_vb_data* colors; struct gs_vb_data* tangents; struct gs_vb_data* normals; struct gs_vb_data* points; } ;


 int FUNC_0 (struct gs_vb_data*) ;

__attribute__((used)) static inline void FUNC_1(struct gs_vb_data *VAR_0)
{
 uint32_t VAR_1;
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->points);
 FUNC_0(VAR_0->normals);
 FUNC_0(VAR_0->tangents);
 FUNC_0(VAR_0->colors);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_tex; VAR_1++)
  FUNC_0(VAR_0->tvarray[VAR_1].array);
 FUNC_0(VAR_0->tvarray);
 FUNC_0(VAR_0);
}
