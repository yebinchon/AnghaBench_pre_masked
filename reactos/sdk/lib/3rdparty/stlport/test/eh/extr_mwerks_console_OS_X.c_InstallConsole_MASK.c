
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * WritePtr ;
struct TYPE_2__ {int isLoaded; int * theBundle; int * theWrite; int * theRead; } ;
typedef int * ReadPtr ;
typedef scalar_t__ OSErr ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int **) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

short FUNC_4(short VAR_2)
  {
#pragma unused (fd)
 OSErr VAR_3;
    short VAR_4;

    VAR_4 = -1;


    VAR_0.isLoaded = 0;
    VAR_0.theBundle = ((void*)0);
    VAR_0.theRead = ((void*)0);
    VAR_0.theWrite = ((void*)0);


    VAR_3 = FUNC_3(FUNC_2("System.framework"),
      &VAR_0.theBundle);

    if ((VAR_3 == VAR_1) && (VAR_0.theBundle != ((void*)0)))
    {
      VAR_4 = 0;

      VAR_0.isLoaded = FUNC_1(VAR_0.theBundle);

      if (VAR_0.isLoaded)
      {

        VAR_0.theRead = (ReadPtr)
          FUNC_0(VAR_0.theBundle, FUNC_2("read"));
        VAR_0.theWrite = (WritePtr)
          FUNC_0(VAR_0.theBundle, FUNC_2("write"));
      }
    }

    return VAR_4;
  }
