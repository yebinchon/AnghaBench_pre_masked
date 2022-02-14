
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; scalar_t__ lpfnHook; } ;
typedef TYPE_1__ CHOOSECOLORW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_0( const CHOOSECOLORW *VAR_3 )
{
 if (VAR_3)
  if(VAR_3->Flags & VAR_0)
   if (VAR_3->lpfnHook)
    return VAR_2;
 return VAR_1;
}
