
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {TYPE_1__* applet; int id; } ;
struct TYPE_4__ {int cmd; } ;
typedef int HWND ;
typedef TYPE_2__ CPlItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,char*,int *,int ) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(HWND VAR_2, CPlItem *VAR_3)
{
    WCHAR VAR_4[] = {'c','p','l','o','p','e','n',0};
    WCHAR VAR_5[] = {'@','%','d',0};
    WCHAR VAR_6[VAR_0];


    if (VAR_3)
    {
        FUNC_1(VAR_6, VAR_5, VAR_3->id);
        FUNC_0(VAR_2, VAR_4, VAR_3->applet->cmd, VAR_6, ((void*)0), VAR_1);
    }
}
