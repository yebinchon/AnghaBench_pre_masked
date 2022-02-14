
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* Buffer; int Length; int MaximumLength; } ;
typedef TYPE_1__ STRING ;


 int FUNC_0 (char*,int,char*,TYPE_1__*,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,TYPE_1__*) ;

void
FUNC_4()
{
    char VAR_0[128];
    STRING VAR_1;
    int VAR_2;

    VAR_1.Buffer = "Test\0Hallo";
    VAR_1.Length = 4;
    VAR_1.MaximumLength = 5;

    FUNC_3(VAR_0, "%Z", &VAR_1);
    FUNC_2(VAR_0, "Test");

    VAR_1.Length = 8;
    FUNC_3(VAR_0, "%Z", &VAR_1);
    FUNC_2(VAR_0, "Test");

    VAR_1.Length = 3;
    FUNC_3(VAR_0, "%Z", &VAR_1);
    FUNC_2(VAR_0, "Tes");

    VAR_1.Buffer = 0;
    FUNC_3(VAR_0, "%Z", &VAR_1);
    FUNC_2(VAR_0, "(null)");

    FUNC_3(VAR_0, "%Z", 0);
    FUNC_2(VAR_0, "(null)");

    VAR_1.Buffer = (char*)L"Test\0Hallo";
    VAR_1.Length = 8;
    VAR_1.MaximumLength = 10;


    VAR_1.Buffer = (char*)L"test";
    VAR_1.Length = 12;
    VAR_1.MaximumLength = 15;
    VAR_2 = FUNC_0(VAR_0, 127, "%Z %u%c", &VAR_1, 1, 0);
    FUNC_1(VAR_2, 15);

}
