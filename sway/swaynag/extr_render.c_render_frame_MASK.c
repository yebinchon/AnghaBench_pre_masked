
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct swaynag {int height; int width; int scale; int display; int surface; TYPE_1__* current_buffer; int buffers; int shm; int layer_surface; int run_display; } ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_2__ {int buffer; int * cairo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,double,double) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int *,struct swaynag*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ,int,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int ,int) ;

void FUNC_19(struct swaynag *VAR_3) {
 if (!VAR_3->run_display) {
  return;
 }

 cairo_surface_t *VAR_4 = FUNC_3(
   VAR_0, ((void*)0));
 cairo_t *VAR_5 = FUNC_0(VAR_4);
 FUNC_5(VAR_5);
 FUNC_6(VAR_5, VAR_1);
 FUNC_2(VAR_5);
 FUNC_4(VAR_5);
 uint32_t VAR_6 = FUNC_10(VAR_5, VAR_3);
 if (VAR_6 != VAR_3->height) {
  FUNC_18(VAR_3->layer_surface, 0, VAR_6);
  FUNC_17(VAR_3->layer_surface,
    VAR_6);
  FUNC_14(VAR_3->surface);
  FUNC_12(VAR_3->display);
 } else {
  VAR_3->current_buffer = FUNC_9(VAR_3->shm,
    VAR_3->buffers,
    VAR_3->width * VAR_3->scale,
    VAR_3->height * VAR_3->scale);
  if (!VAR_3->current_buffer) {
   FUNC_11(VAR_2, "Failed to get buffer. Skipping frame.");
   goto cleanup;
  }

  cairo_t *VAR_7 = VAR_3->current_buffer->cairo;
  FUNC_5(VAR_7);
  FUNC_6(VAR_7, VAR_1);
  FUNC_2(VAR_7);
  FUNC_4(VAR_7);
  FUNC_7(VAR_7, VAR_4, 0.0, 0.0);
  FUNC_2(VAR_7);

  FUNC_16(VAR_3->surface, VAR_3->scale);
  FUNC_13(VAR_3->surface,
    VAR_3->current_buffer->buffer, 0, 0);
  FUNC_15(VAR_3->surface, 0, 0,
    VAR_3->width, VAR_3->height);
  FUNC_14(VAR_3->surface);
  FUNC_12(VAR_3->display);
 }

cleanup:
 FUNC_8(VAR_4);
 FUNC_1(VAR_5);
}
