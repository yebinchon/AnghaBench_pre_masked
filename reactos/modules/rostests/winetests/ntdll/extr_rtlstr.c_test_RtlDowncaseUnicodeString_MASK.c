
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
    WCHAR VAR_3[1025];
    WCHAR VAR_4[1025];
    WCHAR VAR_5[1025];
    UNICODE_STRING VAR_6;
    UNICODE_STRING VAR_7;
    UNICODE_STRING VAR_8;

    for (VAR_0 = 0; VAR_0 < 1024; VAR_0++) {
 VAR_1 = (WCHAR) VAR_0;
 if (VAR_1 >= 'A' && VAR_1 <= 'Z') {
     VAR_2 = VAR_1 - 'A' + 'a';
 } else if (VAR_1 >= 0xc0 && VAR_1 <= 0xde && VAR_1 != 0xd7) {
     VAR_2 = VAR_1 + 0x20;
 } else if (VAR_1 >= 0x391 && VAR_1 <= 0x3ab && VAR_1 != 0x3a2) {
     VAR_2 = VAR_1 + 0x20;
 } else {
     switch (VAR_1) {
  case 0x178: VAR_2 = 0xff; break;
  case 0x181: VAR_2 = 0x253; break;
  case 0x186: VAR_2 = 0x254; break;
  case 0x189: VAR_2 = 0x256; break;
  case 0x18a: VAR_2 = 0x257; break;
  case 0x18e: VAR_2 = 0x1dd; break;
  case 0x18f: VAR_2 = 0x259; break;
  case 0x190: VAR_2 = 0x25b; break;
  case 0x193: VAR_2 = 0x260; break;
  case 0x194: VAR_2 = 0x263; break;
  case 0x196: VAR_2 = 0x269; break;
  case 0x197: VAR_2 = 0x268; break;
  case 0x19c: VAR_2 = 0x26f; break;
  case 0x19d: VAR_2 = 0x272; break;
  case 0x19f: VAR_2 = 0x275; break;
  case 0x1a9: VAR_2 = 0x283; break;
  case 0x1ae: VAR_2 = 0x288; break;
  case 0x1b1: VAR_2 = 0x28a; break;
  case 0x1b2: VAR_2 = 0x28b; break;
  case 0x1b7: VAR_2 = 0x292; break;
  case 0x1c4: VAR_2 = 0x1c6; break;
  case 0x1c7: VAR_2 = 0x1c9; break;
  case 0x1ca: VAR_2 = 0x1cc; break;
  case 0x1f1: VAR_2 = 0x1f3; break;
  case 0x386: VAR_2 = 0x3ac; break;
  case 0x388: VAR_2 = 0x3ad; break;
  case 0x389: VAR_2 = 0x3ae; break;
  case 0x38a: VAR_2 = 0x3af; break;
  case 0x38c: VAR_2 = 0x3cc; break;
  case 0x38e: VAR_2 = 0x3cd; break;
  case 0x38f: VAR_2 = 0x3ce; break;
  default: VAR_2 = VAR_1; break;
     }
 }
 VAR_3[VAR_0] = VAR_1;
 VAR_4[VAR_0] = '\0';
 VAR_5[VAR_0] = VAR_2;
    }
    VAR_3[VAR_0] = '\0';
    VAR_4[VAR_0] = '\0';
    VAR_5[VAR_0] = '\0';
    VAR_6.Length = 2048;
    VAR_6.MaximumLength = 2048;
    VAR_6.Buffer = VAR_3;
    VAR_7.Length = 2048;
    VAR_7.MaximumLength = 2048;
    VAR_7.Buffer = VAR_4;
    VAR_8.Length = 2048;
    VAR_8.MaximumLength = 2048;
    VAR_8.Buffer = VAR_5;

    FUNC_1(&VAR_7, &VAR_6, 0);
    for (VAR_0 = 0; VAR_0 <= 1024; VAR_0++) {
 FUNC_0(VAR_7.Buffer[VAR_0] == VAR_8.Buffer[VAR_0] || VAR_7.Buffer[VAR_0] == VAR_6.Buffer[VAR_0] + 1,
    "RtlDowncaseUnicodeString works wrong: '%c'[=0x%x] is converted to '%c'[=0x%x], expected: '%c'[=0x%x]\n",
    VAR_6.Buffer[VAR_0], VAR_6.Buffer[VAR_0],
    VAR_7.Buffer[VAR_0], VAR_7.Buffer[VAR_0],
    VAR_8.Buffer[VAR_0], VAR_8.Buffer[VAR_0]);
    }
}
