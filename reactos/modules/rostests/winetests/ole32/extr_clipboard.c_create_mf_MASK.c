
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_3; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int HMETAFILE ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,TYPE_1__*,char*,int ,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static HMETAFILE FUNC_4(void)
{
    RECT VAR_1 = {0, 0, 100, 100};
    HDC VAR_2 = FUNC_1(((void*)0));
    FUNC_2(VAR_2, 0, 0, VAR_0, &VAR_1, "Test String", FUNC_3("Test String"), ((void*)0));
    return FUNC_0(VAR_2);
}
