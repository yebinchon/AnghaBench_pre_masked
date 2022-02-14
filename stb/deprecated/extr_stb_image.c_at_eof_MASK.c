
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* eof ) (int ) ;scalar_t__ read; } ;
struct TYPE_5__ {scalar_t__ read_from_callbacks; scalar_t__ img_buffer; scalar_t__ img_buffer_end; int io_user_data; TYPE_1__ io; } ;
typedef TYPE_2__ stbi ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(stbi *VAR_0)
{
   if (VAR_0->io.read) {
      if (!(VAR_0->io.eof)(VAR_0->io_user_data)) return 0;


      if (VAR_0->read_from_callbacks == 0) return 1;
   }

   return VAR_0->img_buffer >= VAR_0->img_buffer_end;
}
