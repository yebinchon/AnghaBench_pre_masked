
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zsock_t ;
typedef void* uint32_t ;
struct TYPE_8__ {scalar_t__ frame_width; int frame_height; int frame_stride; } ;
struct TYPE_7__ {int camera_num; int camera_id; int frame_size; unsigned int max_gain; unsigned int fps; int frame_info_lock; int camera_tb; int ops_sock; void* line_length_pclk; void* pixel_clock; TYPE_4__ ci; } ;
typedef TYPE_1__ CameraState ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,char*,int ,TYPE_1__*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(CameraState *VAR_3, int VAR_4, int VAR_5,
                        uint32_t VAR_6, uint32_t VAR_7,
                        unsigned int VAR_8, unsigned int VAR_9) {
  FUNC_2(VAR_3, 0, sizeof(*VAR_3));

  VAR_3->camera_num = VAR_5;
  VAR_3->camera_id = VAR_4;

  FUNC_1(VAR_4 < FUNC_0(VAR_2));
  VAR_3->ci = VAR_2[VAR_4];
  FUNC_1(VAR_3->ci.frame_width != 0);
  VAR_3->frame_size = VAR_3->ci.frame_height * VAR_3->ci.frame_stride;

  VAR_3->pixel_clock = VAR_6;
  VAR_3->line_length_pclk = VAR_7;
  VAR_3->max_gain = VAR_8;
  VAR_3->fps = VAR_9;

  zsock_t *VAR_10 = FUNC_5(">inproc://cameraops");
  FUNC_1(*VAR_10);
  VAR_3->ops_sock = FUNC_6(VAR_10);

  FUNC_4(&VAR_3->camera_tb, VAR_0, "frame",
    VAR_1, VAR_3);

  FUNC_3(&VAR_3->frame_info_lock, ((void*)0));
}
