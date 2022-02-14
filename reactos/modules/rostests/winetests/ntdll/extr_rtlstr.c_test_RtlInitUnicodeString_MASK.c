
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int teststring ;
typedef int WCHAR ;
struct TYPE_3__ {int Length; int MaximumLength; int const* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

__attribute__((used)) static void FUNC_3(void)
{

    static const WCHAR VAR_1[] = {'S','o','m','e',' ','W','i','l','d',' ','S','t','r','i','n','g',0};
    static const WCHAR VAR_2[] = {'S','o','m','e',' ','W','i','l','d',' ','S','t','r','i','n','g',0};

    UNICODE_STRING VAR_3;

    VAR_3.Length = 0;
    VAR_3.MaximumLength = 0;
    VAR_3.Buffer = (void *)0xdeadbeef;
    FUNC_2(&VAR_3, VAR_1);
    FUNC_1(VAR_3.Length == sizeof(VAR_1) - sizeof(WCHAR), "Length uninitialized\n");
    FUNC_1(VAR_3.MaximumLength == sizeof(VAR_1), "MaximumLength uninitialized\n");
    FUNC_1(VAR_3.Buffer == VAR_1, "Buffer not equal to teststring\n");
    FUNC_1(FUNC_0(VAR_3.Buffer, VAR_2) == 0, "Buffer written to\n");
    FUNC_2(&VAR_3, ((void*)0));
    FUNC_1(VAR_3.Length == 0, "Length uninitialized\n");
    FUNC_1(VAR_3.MaximumLength == 0, "MaximumLength uninitialized\n");
    FUNC_1(VAR_3.Buffer == ((void*)0), "Buffer not equal to NULL\n");

}
