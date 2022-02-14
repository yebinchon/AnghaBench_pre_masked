
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int marker; int progressive; int s; } ;
typedef TYPE_1__ stbi__jpeg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(stbi__jpeg *VAR_2, int VAR_3)
{
   int VAR_4;
   VAR_2->marker = VAR_0;
   VAR_4 = FUNC_5(VAR_2);
   if (!FUNC_2(VAR_4)) return FUNC_4("no SOI","Corrupt JPEG");
   if (VAR_3 == VAR_1) return 1;
   VAR_4 = FUNC_5(VAR_2);
   while (!FUNC_0(VAR_4)) {
      if (!FUNC_7(VAR_2,VAR_4)) return 0;
      VAR_4 = FUNC_5(VAR_2);
      while (VAR_4 == VAR_0) {

         if (FUNC_3(VAR_2->s)) return FUNC_4("no SOF", "Corrupt JPEG");
         VAR_4 = FUNC_5(VAR_2);
      }
   }
   VAR_2->progressive = FUNC_1(VAR_4);
   if (!FUNC_6(VAR_2, VAR_3)) return 0;
   return 1;
}
