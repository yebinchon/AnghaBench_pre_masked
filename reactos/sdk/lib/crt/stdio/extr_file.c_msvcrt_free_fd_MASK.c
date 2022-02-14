
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wxflag; int handle; } ;
typedef TYPE_1__ ioinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(int VAR_5)
{
  ioinfo *VAR_6 = FUNC_2(VAR_5);

  if(VAR_6 != &VAR_4)
  {
    VAR_6->handle = VAR_0;
    VAR_6->wxflag = 0;
  }
  FUNC_1(":fd (%d) freed\n",VAR_5);

  if (VAR_5 < 3)
  {
    switch (VAR_5)
    {
    case 0:
        FUNC_0(VAR_2, 0);
        break;
    case 1:
        FUNC_0(VAR_3, 0);
        break;
    case 2:
        FUNC_0(VAR_1, 0);
        break;
    }
  }
  FUNC_3(VAR_6);
}
