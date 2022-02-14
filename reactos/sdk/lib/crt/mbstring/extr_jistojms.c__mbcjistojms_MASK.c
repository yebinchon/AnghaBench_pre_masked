
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mbcodepage; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 () ;

unsigned int FUNC_3(unsigned int VAR_0)
{


  if(FUNC_2()->mbcodepage == 932)
  {
    if(FUNC_0(VAR_0) >= 0x21 && FUNC_0(VAR_0) <= 0x7e &&
       FUNC_1(VAR_0) >= 0x21 && FUNC_1(VAR_0) <= 0x7e)
    {
      if(FUNC_0(VAR_0) % 2)
        VAR_0 += 0x1f;
      else
        VAR_0 += 0x7d;

      if(FUNC_1(VAR_0) >= 0x7F)
        VAR_0 += 0x1;

      VAR_0 = (((FUNC_0(VAR_0) - 0x21)/2 + 0x81) << 8) | FUNC_1(VAR_0);

      if(FUNC_0(VAR_0) > 0x9f)
        VAR_0 += 0x4000;
    }
    else
      return 0;
  }

  return VAR_0;
}
