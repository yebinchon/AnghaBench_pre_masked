
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_vertex_buffer {int dynamic; int num; struct gs_vb_data* data; int * device; } ;
struct gs_vb_data {int num; } ;
typedef struct gs_vertex_buffer gs_vertbuffer_t ;
typedef int gs_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct gs_vertex_buffer* FUNC_1 (int) ;
 int FUNC_2 (struct gs_vertex_buffer*) ;
 int FUNC_3 (struct gs_vertex_buffer*) ;

gs_vertbuffer_t *FUNC_4(gs_device_t *VAR_2,
         struct gs_vb_data *VAR_3,
         uint32_t VAR_4)
{
 struct gs_vertex_buffer *VAR_5 = FUNC_1(sizeof(struct gs_vertex_buffer));
 VAR_5->device = VAR_2;
 VAR_5->data = VAR_3;
 VAR_5->num = VAR_3->num;
 VAR_5->dynamic = VAR_4 & VAR_0;

 if (!FUNC_2(VAR_5)) {
  FUNC_0(VAR_1, "device_vertexbuffer_create (GL) failed");
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
