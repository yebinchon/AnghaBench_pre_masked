
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * inout_p; } ;
typedef TYPE_1__ NUMProc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(NUMProc *VAR_1, int VAR_2, int VAR_3)
{
 while (VAR_2-- > 0)
 {
  if (VAR_0)
   break;
  if (FUNC_1("0123456789.,+-", *VAR_1->inout_p) != ((void*)0))
   break;
  VAR_1->inout_p += FUNC_0(VAR_1->inout_p);
 }
}
