
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libcaption_stauts_t ;
struct TYPE_3__ {int back; int front; } ;
typedef TYPE_1__ caption_frame_t ;
typedef int caption_frame_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

libcaption_stauts_t FUNC_2(caption_frame_t* VAR_1)
{
    FUNC_1(&VAR_1->front, &VAR_1->back, sizeof(caption_frame_buffer_t));
    FUNC_0(&VAR_1->back);
    return VAR_0;
}
