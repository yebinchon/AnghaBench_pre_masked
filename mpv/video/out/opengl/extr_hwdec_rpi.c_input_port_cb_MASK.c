
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_image {int dummy; } ;
struct TYPE_3__ {struct mp_image* user_data; } ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (struct mp_image*) ;

__attribute__((used)) static void FUNC_1(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
    struct mp_image *VAR_2 = VAR_1->user_data;
    FUNC_0(VAR_2);
}
