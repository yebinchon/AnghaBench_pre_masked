
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int X; int Y; } ;
struct TYPE_9__ {TYPE_1__ dwSize; } ;
struct TYPE_8__ {int member_1; int member_0; } ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ COORD ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;


 int FUNC_0 (int ,int,int,TYPE_2__,int *) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_2__) ;

NTSTATUS FUNC_4(int VAR_2, wchar_t * VAR_3[])
{
 HANDLE VAR_4 = FUNC_2(VAR_1);
 COORD VAR_5 = {0, 0};
 DWORD VAR_6;
 CONSOLE_SCREEN_BUFFER_INFO VAR_7;

 FUNC_1(VAR_4, &VAR_7);
 FUNC_0(VAR_4, L' ', VAR_7.dwSize.X * VAR_7.dwSize.Y, VAR_5, &VAR_6);
 FUNC_3(VAR_4, VAR_5);
 return VAR_0;
}
