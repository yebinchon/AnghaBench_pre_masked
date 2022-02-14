
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* skip ) (int ,int) ;scalar_t__ read; } ;
struct TYPE_5__ {scalar_t__ img_buffer; int io_user_data; TYPE_1__ io; scalar_t__ img_buffer_end; } ;
typedef TYPE_2__ stbi__context ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(stbi__context *VAR_0, int VAR_1)
{
   if (VAR_1 < 0) {
      VAR_0->img_buffer = VAR_0->img_buffer_end;
      return;
   }
   if (VAR_0->io.read) {
      int VAR_2 = (int) (VAR_0->img_buffer_end - VAR_0->img_buffer);
      if (VAR_2 < VAR_1) {
         VAR_0->img_buffer = VAR_0->img_buffer_end;
         (VAR_0->io.skip)(VAR_0->io_user_data, VAR_1 - VAR_2);
         return;
      }
   }
   VAR_0->img_buffer += VAR_1;
}
