
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Right; scalar_t__ Bottom; } ;
struct TYPE_6__ {scalar_t__ X; scalar_t__ Y; } ;
typedef scalar_t__ SHORT ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef TYPE_1__ COORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int,TYPE_1__,int*) ;
 scalar_t__ FUNC_1 (int ,int ,int,TYPE_1__,int*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_3(
    LPCSTR VAR_5,
    DWORD VAR_6)
{
    COORD VAR_7 = VAR_2;
    DWORD VAR_8;

    FUNC_0(VAR_3, VAR_1, VAR_6,
    VAR_7, &VAR_8);


    if (FUNC_1(VAR_3, VAR_5, VAR_6,
    VAR_7, &VAR_8) == 0
     || VAR_8 == 0)
 VAR_8 = 1;

    VAR_2.X += (SHORT) VAR_8;

    while (VAR_2.X > VAR_4.Right)
    {
 VAR_2.X -= (SHORT) VAR_0;
 if (VAR_2.Y < VAR_4.Bottom)
     VAR_2.Y++;
    }

    FUNC_2(VAR_2.X + 1, VAR_2.Y + 1);

    return VAR_8;
}
