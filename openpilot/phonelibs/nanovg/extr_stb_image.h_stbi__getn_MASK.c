
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_4__ {int (* read ) (int ,char*,int) ;} ;
struct TYPE_5__ {scalar_t__ img_buffer_end; scalar_t__ img_buffer; int io_user_data; TYPE_1__ io; } ;
typedef TYPE_2__ stbi__context ;


 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(stbi__context *VAR_0, stbi_uc *VAR_1, int VAR_2)
{
   if (VAR_0->io.read) {
      int VAR_3 = (int) (VAR_0->img_buffer_end - VAR_0->img_buffer);
      if (VAR_3 < VAR_2) {
         int VAR_4, VAR_5;

         FUNC_0(VAR_1, VAR_0->img_buffer, VAR_3);

         VAR_5 = (VAR_0->io.read)(VAR_0->io_user_data, (char*) VAR_1 + VAR_3, VAR_2 - VAR_3);
         VAR_4 = (VAR_5 == (VAR_2-VAR_3));
         VAR_0->img_buffer = VAR_0->img_buffer_end;
         return VAR_4;
      }
   }

   if (VAR_0->img_buffer+VAR_2 <= VAR_0->img_buffer_end) {
      FUNC_0(VAR_1, VAR_0->img_buffer, VAR_2);
      VAR_0->img_buffer += VAR_2;
      return 1;
   } else
      return 0;
}
