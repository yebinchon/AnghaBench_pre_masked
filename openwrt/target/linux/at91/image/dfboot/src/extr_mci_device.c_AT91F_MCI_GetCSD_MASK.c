
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* MCI_RSPR; } ;
typedef int AT91PS_MciDevice ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned int) ;

int FUNC_1 (AT91PS_MciDevice VAR_4, unsigned int VAR_5 , unsigned int * VAR_6)
{

  if(FUNC_0(VAR_4,
          VAR_3,
          (VAR_5 << 16)) != VAR_2)
  return VAR_1;

    VAR_6[0] = VAR_0->MCI_RSPR[0];
    VAR_6[1] = VAR_0->MCI_RSPR[1];
    VAR_6[2] = VAR_0->MCI_RSPR[2];
    VAR_6[3] = VAR_0->MCI_RSPR[3];

    return VAR_2;
}
