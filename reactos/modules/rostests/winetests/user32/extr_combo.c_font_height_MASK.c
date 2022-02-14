
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tmHeight; } ;
typedef TYPE_1__ TEXTMETRICA ;
typedef int HFONT ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(HFONT VAR_0)
{
    TEXTMETRICA VAR_1;
    HFONT VAR_2;
    HDC VAR_3;

    VAR_3 = FUNC_0(((void*)0));
    VAR_2 = FUNC_3(VAR_3, VAR_0);
    FUNC_2(VAR_3, &VAR_1);
    FUNC_3(VAR_3, VAR_2);
    FUNC_1(VAR_3);

    return VAR_1.tmHeight;
}
