
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isLoaded; int * theBundle; int * theWrite; int * theRead; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(void)
{

  if (VAR_0.theBundle != ((void*)0))
  {
    if (VAR_0.isLoaded)
    {
      VAR_0.theRead = ((void*)0);
      VAR_0.theWrite = ((void*)0);

      FUNC_0(VAR_0.theBundle);
      VAR_0.isLoaded = 0;
    }

    FUNC_1(VAR_0.theBundle);
    VAR_0.theBundle = ((void*)0);
  }

}
