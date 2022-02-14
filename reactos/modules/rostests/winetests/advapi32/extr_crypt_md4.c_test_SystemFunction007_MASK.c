
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float WCHAR ;
struct TYPE_3__ {float* Buffer; int Length; int MaximumLength; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_2;
    UNICODE_STRING VAR_3;
    BYTE VAR_4[0x10];
    BYTE VAR_5[0x10] = { 0x24, 0x0a, 0xf0, 0x9d, 0x84, 0x1c, 0xda, 0xcf,
                            0x56, 0xeb, 0x6b, 0x96, 0x55, 0xec, 0xcf, 0x0a };
    WCHAR VAR_6[] = {'f','o','o',0 };

    if (0)
    {

    VAR_2 = FUNC_3(((void*)0), ((void*)0));
    FUNC_2( VAR_2 == VAR_1, "wrong error code\n");
    }

    VAR_3.Buffer = VAR_6;
    VAR_3.Length = 4*sizeof(WCHAR);
    VAR_3.MaximumLength = VAR_3.Length;

    FUNC_1(VAR_4, 0, sizeof VAR_4);
    VAR_2 = FUNC_3(&VAR_3, VAR_4);
    FUNC_2( VAR_2 == VAR_0, "wrong error code\n");

    FUNC_2(!FUNC_0(VAR_4, VAR_5, sizeof VAR_5), "response wrong\n");
}
