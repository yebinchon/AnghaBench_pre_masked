
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ marker; int s; scalar_t__ restart_interval; } ;
typedef TYPE_1__ jpeg ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(jpeg *VAR_2)
{
   int VAR_3;
   VAR_2->restart_interval = 0;
   if (!FUNC_3(VAR_2, VAR_1)) return 0;
   VAR_3 = FUNC_6(VAR_2);
   while (!FUNC_0(VAR_3)) {
      if (FUNC_1(VAR_3)) {
         if (!FUNC_9(VAR_2)) return 0;
         if (!FUNC_7(VAR_2)) return 0;
         if (VAR_2->marker == VAR_0 ) {

            while (!FUNC_2(VAR_2->s)) {
               int VAR_4 = FUNC_4(VAR_2->s);
               if (VAR_4 == 255) {
                  VAR_2->marker = FUNC_5(VAR_2->s);
                  break;
               } else if (VAR_4 != 0) {
                  return 0;
               }
            }

         }
      } else {
         if (!FUNC_8(VAR_2, VAR_3)) return 0;
      }
      VAR_3 = FUNC_6(VAR_2);
   }
   return 1;
}
