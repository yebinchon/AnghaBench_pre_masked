
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_9__ {int member_0; int member_4; char* member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_3; int member_2; int member_1; } ;
struct TYPE_8__ {int cx; } ;
struct TYPE_7__ {int tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ SIZE ;
typedef int LONG ;
typedef TYPE_3__ LOGFONT ;
typedef int HFONT ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int*) ;
 int FUNC_5 (int ,char const*,int,TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,char*,int,int) ;

void FUNC_8()
{
 LOGFONT VAR_0 = {-11, 0, 0, 0, 400,
                     0, 0, 0, 0, 0, 0, 0, 0,
                     "MS Shell Dlg 2"};
 HFONT VAR_1, VAR_2;
 HDC VAR_3;
 LONG VAR_4, VAR_5, VAR_6;
 TEXTMETRICW VAR_7;
 SIZE VAR_8;
    static const WCHAR VAR_9[] = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
        'r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H',
        'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',0};

 VAR_1 = FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(((void*)0));
 VAR_2 = FUNC_6(VAR_3, VAR_1);

 VAR_4 = FUNC_4(VAR_3, &VAR_7, &VAR_5);
    FUNC_5(VAR_3, VAR_9, 52, &VAR_8);
    VAR_6 = (VAR_8.cx / 26 + 1) / 2;

    FUNC_7(VAR_4 == VAR_6, "x=%ld, x2=%ld\n", VAR_4, VAR_6);
 FUNC_7(VAR_5 == VAR_7.tmHeight, "y = %ld, tm.tmHeight = %ld\n", VAR_5, VAR_7.tmHeight);

 FUNC_6(VAR_3, VAR_2);
 FUNC_3(VAR_1);
 FUNC_2(VAR_3);
}
