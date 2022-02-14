
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_index_buffer {int dynamic; size_t num; size_t width; size_t size; int type; int gl_type; void* data; int * device; } ;
typedef struct gs_index_buffer gs_indexbuffer_t ;
typedef int gs_device_t ;
typedef enum gs_index_type { ____Placeholder_gs_index_type } gs_index_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct gs_index_buffer* FUNC_1 (int) ;
 int FUNC_2 (struct gs_index_buffer*) ;
 int FUNC_3 (struct gs_index_buffer*) ;

gs_indexbuffer_t *FUNC_4(gs_device_t *VAR_5,
         enum gs_index_type VAR_6,
         void *VAR_7, size_t VAR_8,
         uint32_t VAR_9)
{
 struct gs_index_buffer *VAR_10 = FUNC_1(sizeof(struct gs_index_buffer));
 size_t VAR_11 = VAR_6 == VAR_3 ? 4 : 2;

 VAR_10->device = VAR_5;
 VAR_10->data = VAR_7;
 VAR_10->dynamic = VAR_9 & VAR_2;
 VAR_10->num = VAR_8;
 VAR_10->width = VAR_11;
 VAR_10->size = VAR_11 * VAR_8;
 VAR_10->type = VAR_6;
 VAR_10->gl_type = VAR_6 == VAR_3 ? VAR_0
            : VAR_1;

 if (!FUNC_3(VAR_10)) {
  FUNC_0(VAR_4, "device_indexbuffer_create (GL) failed");
  FUNC_2(VAR_10);
  return ((void*)0);
 }

 return VAR_10;
}
