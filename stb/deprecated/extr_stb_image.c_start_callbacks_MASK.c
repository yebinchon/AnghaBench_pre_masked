
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi_io_callbacks ;
struct TYPE_4__ {int buflen; int read_from_callbacks; int buffer_start; int img_buffer_original; void* io_user_data; int io; } ;
typedef TYPE_1__ stbi ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(stbi *VAR_0, stbi_io_callbacks *VAR_1, void *VAR_2)
{
   VAR_0->io = *VAR_1;
   VAR_0->io_user_data = VAR_2;
   VAR_0->buflen = sizeof(VAR_0->buffer_start);
   VAR_0->read_from_callbacks = 1;
   VAR_0->img_buffer_original = VAR_0->buffer_start;
   FUNC_0(VAR_0);
}
