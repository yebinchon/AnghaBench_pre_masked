
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int teststring ;
struct TYPE_3__ {int Length; int MaximumLength; char const* Buffer; } ;
typedef TYPE_1__ STRING ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const char VAR_0[] = "Some Wild String";
    STRING VAR_1;

    VAR_1.Length = 0;
    VAR_1.MaximumLength = 0;
    VAR_1.Buffer = (void *)0xdeadbeef;
    FUNC_1(&VAR_1, VAR_0);
    FUNC_0(VAR_1.Length == sizeof(VAR_0) - sizeof(char), "Length uninitialized\n");
    FUNC_0(VAR_1.MaximumLength == sizeof(VAR_0), "MaximumLength uninitialized\n");
    FUNC_0(VAR_1.Buffer == VAR_0, "Buffer not equal to teststring\n");
    FUNC_0(FUNC_2(VAR_1.Buffer, "Some Wild String") == 0, "Buffer written to\n");
    FUNC_1(&VAR_1, ((void*)0));
    FUNC_0(VAR_1.Length == 0, "Length uninitialized\n");
    FUNC_0(VAR_1.MaximumLength == 0, "MaximumLength uninitialized\n");
    FUNC_0(VAR_1.Buffer == ((void*)0), "Buffer not equal to NULL\n");

}
