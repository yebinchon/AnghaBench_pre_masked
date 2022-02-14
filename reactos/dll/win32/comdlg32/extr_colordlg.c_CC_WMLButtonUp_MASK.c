
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ capturedGraph; } ;
typedef int LRESULT ;
typedef TYPE_1__ CCPRIV ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;

__attribute__((used)) static LRESULT FUNC_2( CCPRIV *VAR_0 )
{
   if (VAR_0->capturedGraph)
   {
       VAR_0->capturedGraph = 0;
       FUNC_1();
       FUNC_0(VAR_0);
       return 1;
   }
   return 0;
}
