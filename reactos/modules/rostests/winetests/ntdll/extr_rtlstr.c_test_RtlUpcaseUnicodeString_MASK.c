
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int Length; int MaximumLength; char* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;


 int FUNC_0 (int,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_0;
    WCHAR VAR_1;
    WCHAR VAR_2;
    WCHAR VAR_3[257];
    WCHAR VAR_4[257];
    WCHAR VAR_5[257];
    UNICODE_STRING VAR_6;
    UNICODE_STRING VAR_7;
    UNICODE_STRING VAR_8;

    for (VAR_0 = 0; VAR_0 <= 255; VAR_0++) {
 VAR_1 = (WCHAR) VAR_0;
 if (VAR_1 >= 'a' && VAR_1 <= 'z') {
     VAR_2 = VAR_1 - 'a' + 'A';
 } else if (VAR_1 >= 0xe0 && VAR_1 <= 0xfe && VAR_1 != 0xf7) {
     VAR_2 = VAR_1 - 0x20;
 } else if (VAR_1 == 0xff) {
     VAR_2 = 0x178;
 } else {
     VAR_2 = VAR_1;
 }
 VAR_3[VAR_0] = VAR_1;
 VAR_4[VAR_0] = '\0';
 VAR_5[VAR_0] = VAR_2;
    }
    VAR_3[VAR_0] = '\0';
    VAR_4[VAR_0] = '\0';
    VAR_5[VAR_0] = '\0';
    VAR_6.Length = 512;
    VAR_6.MaximumLength = 512;
    VAR_6.Buffer = VAR_3;
    VAR_7.Length = 512;
    VAR_7.MaximumLength = 512;
    VAR_7.Buffer = VAR_4;
    VAR_8.Length = 512;
    VAR_8.MaximumLength = 512;
    VAR_8.Buffer = VAR_5;

    FUNC_1(&VAR_7, &VAR_6, 0);
    for (VAR_0 = 0; VAR_0 <= 255; VAR_0++) {
 FUNC_0(VAR_7.Buffer[VAR_0] == VAR_8.Buffer[VAR_0],
    "RtlUpcaseUnicodeString works wrong: '%c'[=0x%x] is converted to '%c'[=0x%x], expected: '%c'[=0x%x]\n",
    VAR_6.Buffer[VAR_0], VAR_6.Buffer[VAR_0],
    VAR_7.Buffer[VAR_0], VAR_7.Buffer[VAR_0],
    VAR_8.Buffer[VAR_0], VAR_8.Buffer[VAR_0]);
    }
}
