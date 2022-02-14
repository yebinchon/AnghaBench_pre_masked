
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int MaxX; int MinX; int MaxY; int MinY; } ;
struct TYPE_7__ {int X; int Y; } ;
struct TYPE_6__ {int X; int Y; } ;
typedef TYPE_1__* PCOORD ;
typedef int DWORD ;
typedef TYPE_2__ COORD ;


 TYPE_5__ VAR_0 ;
 TYPE_2__ FUNC_0 () ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static VOID FUNC_2(PCOORD VAR_1)
{
    COORD VAR_2 = FUNC_0();
    DWORD VAR_3 = VAR_0.MaxX - VAR_0.MinX + 1;
    DWORD VAR_4 = VAR_0.MaxY - VAR_0.MinY + 1;

    if (!FUNC_1(((void*)0), ((void*)0)))
    {
        VAR_2.X *= 8;
        VAR_2.Y *= 8;
    }

    VAR_1->X = VAR_0.MinX + ((VAR_1->X * VAR_3) / VAR_2.X);
    VAR_1->Y = VAR_0.MinY + ((VAR_1->Y * VAR_4) / VAR_2.Y);
}
