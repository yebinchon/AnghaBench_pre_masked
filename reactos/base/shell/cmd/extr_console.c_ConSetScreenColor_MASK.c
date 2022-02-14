
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int X; int Y; } ;
struct TYPE_8__ {TYPE_1__ dwSize; } ;
struct TYPE_7__ {scalar_t__ Y; scalar_t__ X; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ COORD ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int,TYPE_2__,int *) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_1 ;

BOOL FUNC_3(HANDLE VAR_2, WORD VAR_3, BOOL VAR_4)
{
    DWORD VAR_5;
    CONSOLE_SCREEN_BUFFER_INFO VAR_6;
    COORD VAR_7;


    if ((VAR_3 & 0x0F) == (VAR_3 & 0xF0) >> 4)
        return VAR_0;


    if (VAR_4)
    {
        FUNC_1(VAR_2, &VAR_6);

        VAR_7.X = 0;
        VAR_7.Y = 0;
        FUNC_0(VAR_2,
                                   VAR_3 & 0x00FF,
                                   VAR_6.dwSize.X * VAR_6.dwSize.Y,
                                   VAR_7,
                                   &VAR_5);
    }


    FUNC_2(VAR_2, VAR_3 & 0x00FF);
    return VAR_1;
}
