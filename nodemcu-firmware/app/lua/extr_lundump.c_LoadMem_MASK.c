
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ swap; } ;
typedef TYPE_1__ LoadState ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,void*,int) ;

__attribute__((used)) static void FUNC_2 (LoadState* VAR_0, void* VAR_1, int VAR_2, size_t VAR_3)
{
  FUNC_1(VAR_0,VAR_1,VAR_2*VAR_3);
  if (VAR_0->swap && VAR_1)
  {
    char* VAR_4=(char*) VAR_1;
    char VAR_5;
    switch (VAR_3)
    {
      case 1:
        break;
      case 2:
       while (VAR_2--)
       {
         VAR_5=VAR_4[0]; VAR_4[0]=VAR_4[1]; VAR_4[1]=VAR_5;
         VAR_4+=2;
       }
       break;
      case 4:
       while (VAR_2--)
       {
         VAR_5=VAR_4[0]; VAR_4[0]=VAR_4[3]; VAR_4[3]=VAR_5;
         VAR_5=VAR_4[1]; VAR_4[1]=VAR_4[2]; VAR_4[2]=VAR_5;
         VAR_4+=4;
       }
       break;
      case 8:
       while (VAR_2--)
       {
          VAR_5=VAR_4[0]; VAR_4[0]=VAR_4[7]; VAR_4[7]=VAR_5;
          VAR_5=VAR_4[1]; VAR_4[1]=VAR_4[6]; VAR_4[6]=VAR_5;
          VAR_5=VAR_4[2]; VAR_4[2]=VAR_4[5]; VAR_4[5]=VAR_5;
          VAR_5=VAR_4[3]; VAR_4[3]=VAR_4[4]; VAR_4[4]=VAR_5;
          VAR_4+=8;
        }
       break;
      default:
        FUNC_0(1, "bad size");
       break;
    }
  }
}
