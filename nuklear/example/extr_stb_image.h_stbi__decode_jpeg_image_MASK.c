
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ progressive; int s; void* marker; scalar_t__ restart_interval; TYPE_1__* img_comp; } ;
typedef TYPE_2__ stbi__jpeg ;
struct TYPE_10__ {int * raw_coeff; int * raw_data; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char*,char*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(stbi__jpeg *VAR_2)
{
   int VAR_3;
   for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
      VAR_2->img_comp[VAR_3].raw_data = ((void*)0);
      VAR_2->img_comp[VAR_3].raw_coeff = ((void*)0);
   }
   VAR_2->restart_interval = 0;
   if (!FUNC_3(VAR_2, VAR_1)) return 0;
   VAR_3 = FUNC_6(VAR_2);
   while (!FUNC_0(VAR_3)) {
      if (FUNC_1(VAR_3)) {
         if (!FUNC_10(VAR_2)) return 0;
         if (!FUNC_8(VAR_2)) return 0;
         if (VAR_2->marker == VAR_0 ) {

            while (!FUNC_2(VAR_2->s)) {
               int VAR_4 = FUNC_5(VAR_2->s);
               if (VAR_4 == 255) {
                  VAR_2->marker = FUNC_5(VAR_2->s);
                  break;
               } else if (VAR_4 != 0) {
                  return FUNC_4("junk before marker", "Corrupt JPEG");
               }
            }

         }
      } else {
         if (!FUNC_9(VAR_2, VAR_3)) return 0;
      }
      VAR_3 = FUNC_6(VAR_2);
   }
   if (VAR_2->progressive)
      FUNC_7(VAR_2);
   return 1;
}
