
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* read ) (int ,char*,int ) ;} ;
struct TYPE_5__ {scalar_t__* buffer_start; scalar_t__* img_buffer_end; scalar_t__* img_buffer; scalar_t__ read_from_callbacks; int buflen; int io_user_data; TYPE_1__ io; } ;
typedef TYPE_2__ stbi__context ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(stbi__context *VAR_0)
{
   int VAR_1 = (VAR_0->io.read)(VAR_0->io_user_data,(char*)VAR_0->buffer_start,VAR_0->buflen);
   if (VAR_1 == 0) {


      VAR_0->read_from_callbacks = 0;
      VAR_0->img_buffer = VAR_0->buffer_start;
      VAR_0->img_buffer_end = VAR_0->buffer_start+1;
      *VAR_0->img_buffer = 0;
   } else {
      VAR_0->img_buffer = VAR_0->buffer_start;
      VAR_0->img_buffer_end = VAR_0->buffer_start + VAR_1;
   }
}
