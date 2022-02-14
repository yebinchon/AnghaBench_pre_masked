
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int dx; int y; } ;
typedef TYPE_1__ segment ;


 scalar_t__ FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(segment *VAR_0)
{
   int VAR_1, VAR_2;
   FUNC_0("   ");
   VAR_2 = 4;
   for (VAR_1=0; VAR_1 < FUNC_1(VAR_0); ++VAR_1) {

      unsigned char VAR_3 = VAR_0[VAR_1].len + VAR_0[VAR_1].dx*8 + VAR_0[VAR_1].y*16;
      VAR_2 += FUNC_0("%d,", VAR_3);
      if (VAR_2 > 72 && VAR_1+1 < FUNC_1(VAR_0)) {
         VAR_2 = 4;
         FUNC_0("\n    ");
      }
   }
   FUNC_0("\n");
}
