
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {scalar_t__ ShowCount; int Position; } ;
struct TYPE_4__ {int X; int Y; } ;
typedef int * PCOORD ;
typedef TYPE_1__ COORD ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ FUNC_3 () ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static inline VOID FUNC_5(PCOORD VAR_1)
{
    COORD VAR_2 = FUNC_3();


    if (!FUNC_4(((void*)0), ((void*)0)))
    {
        VAR_2.X *= 8;
        VAR_2.Y *= 8;
    }

    if (VAR_0.ShowCount > 0) FUNC_1();
    VAR_0.Position = *VAR_1;
    if (VAR_0.ShowCount > 0) FUNC_2();


    FUNC_0(0x0001);
}
