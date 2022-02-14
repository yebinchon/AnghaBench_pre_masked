
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi_uc ;
typedef scalar_t__ stbi__uint32 ;
struct TYPE_4__ {int* out; TYPE_2__* s; } ;
typedef TYPE_1__ stbi__png ;
struct TYPE_5__ {scalar_t__ img_x; scalar_t__ img_y; int img_out_n; } ;
typedef TYPE_2__ stbi__context ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(stbi__png *VAR_1)
{
   stbi__context *VAR_2 = VAR_1->s;
   stbi__uint32 VAR_3, VAR_4 = VAR_2->img_x * VAR_2->img_y;
   stbi_uc *VAR_5 = VAR_1->out;

   if (VAR_2->img_out_n == 3) {
      for (VAR_3=0; VAR_3 < VAR_4; ++VAR_3) {
         stbi_uc VAR_6 = VAR_5[0];
         VAR_5[0] = VAR_5[2];
         VAR_5[2] = VAR_6;
         VAR_5 += 3;
      }
   } else {
      FUNC_0(VAR_2->img_out_n == 4);
      if (VAR_0) {

         for (VAR_3=0; VAR_3 < VAR_4; ++VAR_3) {
            stbi_uc VAR_7 = VAR_5[3];
            stbi_uc VAR_8 = VAR_5[0];
            if (VAR_7) {
               VAR_5[0] = VAR_5[2] * 255 / VAR_7;
               VAR_5[1] = VAR_5[1] * 255 / VAR_7;
               VAR_5[2] = VAR_8 * 255 / VAR_7;
            } else {
               VAR_5[0] = VAR_5[2];
               VAR_5[2] = VAR_8;
            }
            VAR_5 += 4;
         }
      } else {

         for (VAR_3=0; VAR_3 < VAR_4; ++VAR_3) {
            stbi_uc VAR_9 = VAR_5[0];
            VAR_5[0] = VAR_5[2];
            VAR_5[2] = VAR_9;
            VAR_5 += 4;
         }
      }
   }
}
