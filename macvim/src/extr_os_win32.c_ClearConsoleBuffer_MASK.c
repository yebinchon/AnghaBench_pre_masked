
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int X; int Y; } ;
struct TYPE_9__ {TYPE_1__ dwSize; } ;
struct TYPE_8__ {scalar_t__ Y; scalar_t__ X; } ;
typedef int DWORD ;
typedef TYPE_2__ COORD ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,TYPE_2__,int*) ;
 int FUNC_1 (int ,char,int,TYPE_2__,int*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_3(WORD VAR_3)
{
    CONSOLE_SCREEN_BUFFER_INFO VAR_4;
    COORD VAR_5;
    DWORD VAR_6, VAR_7;

    if (!FUNC_2(VAR_2, &VAR_4))
 return VAR_0;

    VAR_6 = VAR_4.dwSize.X * VAR_4.dwSize.Y;
    VAR_5.X = 0;
    VAR_5.Y = 0;
    if (!FUNC_1(VAR_2, ' ', VAR_6,
     VAR_5, &VAR_7))
    {
 return VAR_0;
    }
    if (!FUNC_0(VAR_2, VAR_3, VAR_6,
     VAR_5, &VAR_7))
    {
 return VAR_0;
    }

    return VAR_1;
}
