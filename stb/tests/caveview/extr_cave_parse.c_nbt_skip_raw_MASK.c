
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* cur; scalar_t__ buffer_end; } ;
typedef TYPE_1__ nbt ;






 int VAR_0 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(nbt *VAR_1, unsigned char VAR_2)
{
   switch (VAR_2) {
      case 138 : VAR_1->cur += 1; break;
      case 129 : VAR_1->cur += 2; break;
      case 133 : VAR_1->cur += 4; break;
      case 130 : VAR_1->cur += 8; break;
      case 134 : VAR_1->cur += 4; break;
      case 135: VAR_1->cur += 8; break;
      case 137: VAR_1->cur += 4 + 1*FUNC_1(VAR_1->cur); break;
      case 132 : VAR_1->cur += 4 + 4*FUNC_1(VAR_1->cur); break;
      case 128 : VAR_1->cur += 2 + (VAR_1->cur[0]*256 + VAR_1->cur[1]); break;
      case 131 : {
         unsigned char VAR_3 = *VAR_1->cur++;
         unsigned int VAR_4 = FUNC_1(VAR_1->cur);
         unsigned int VAR_5;
         VAR_1->cur += 4;
         for (VAR_5=0; VAR_5 < VAR_4; ++VAR_5)
            FUNC_3(VAR_1, VAR_3);
         break;
      }
      case 136 : {
         while (*VAR_1->cur != VAR_0)
            FUNC_2(VAR_1);
         FUNC_2(VAR_1);
         break;
      }
   }
   FUNC_0(VAR_1->cur <= VAR_1->buffer_end);
}
