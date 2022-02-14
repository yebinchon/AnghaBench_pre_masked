
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_zstencil_buffer {int * device; int attachment; int format; } ;
typedef struct gs_zstencil_buffer gs_zstencil_t ;
typedef int gs_device_t ;
typedef enum gs_zstencil_format { ____Placeholder_gs_zstencil_format } gs_zstencil_format ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct gs_zstencil_buffer* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gs_zstencil_buffer*,int ,int ) ;
 int FUNC_5 (struct gs_zstencil_buffer*) ;

gs_zstencil_t *FUNC_6(gs_device_t *VAR_1, uint32_t VAR_2,
          uint32_t VAR_3,
          enum gs_zstencil_format VAR_4)
{
 struct gs_zstencil_buffer *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct gs_zstencil_buffer));
 VAR_5->format = FUNC_2(VAR_4);
 VAR_5->attachment = FUNC_3(VAR_4);
 VAR_5->device = VAR_1;

 if (!FUNC_4(VAR_5, VAR_2, VAR_3)) {
  FUNC_0(VAR_0, "device_zstencil_create (GL) failed");
  FUNC_5(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
