
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ USHORT ;
struct TYPE_5__ {int Length; int MaximumLength; int * Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_6__ {scalar_t__ result; scalar_t__ pos; int * search_chars; int * main_str; int flags; } ;
typedef scalar_t__ NTSTATUS ;


 unsigned int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int,char*,unsigned int,int ,int *,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    WCHAR VAR_2[257];
    WCHAR VAR_3[257];
    UNICODE_STRING VAR_4;
    UNICODE_STRING VAR_5;
    USHORT VAR_6;
    NTSTATUS VAR_7;
    unsigned int VAR_8;
    unsigned int VAR_9;

    if (!&FUNC_1)
    {
        FUNC_3("RtlFindCharInUnicodeString is not available\n");
        return;
    }

    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
 if (VAR_1[VAR_9].main_str != ((void*)0)) {
     VAR_4.Length = FUNC_2(VAR_1[VAR_9].main_str) * sizeof(WCHAR);
     VAR_4.MaximumLength = VAR_4.Length + sizeof(WCHAR);
     for (VAR_8 = 0; VAR_8 < VAR_4.Length / sizeof(WCHAR); VAR_8++) {
  VAR_2[VAR_8] = VAR_1[VAR_9].main_str[VAR_8];
     }
     VAR_4.Buffer = VAR_2;
 } else {
     VAR_4.Length = 0;
     VAR_4.MaximumLength = 0;
     VAR_4.Buffer = ((void*)0);
 }
 if (VAR_1[VAR_9].search_chars != ((void*)0)) {
     VAR_5.Length = FUNC_2(VAR_1[VAR_9].search_chars) * sizeof(WCHAR);
     VAR_5.MaximumLength = VAR_5.Length + sizeof(WCHAR);
     for (VAR_8 = 0; VAR_8 < VAR_5.Length / sizeof(WCHAR); VAR_8++) {
  VAR_3[VAR_8] = VAR_1[VAR_9].search_chars[VAR_8];
     }
     VAR_5.Buffer = VAR_3;
 } else {
     VAR_5.Length = 0;
     VAR_5.MaximumLength = 0;
     VAR_5.Buffer = ((void*)0);
 }
 VAR_6 = 12345;
        VAR_7 = FUNC_1(VAR_1[VAR_9].flags, &VAR_4, &VAR_5, &VAR_6);
        FUNC_0(VAR_7 == VAR_1[VAR_9].result,
           "(test %d): RtlFindCharInUnicodeString(%d, %s, %s, [out]) has result %x, expected %x\n",
           VAR_9, VAR_1[VAR_9].flags,
           VAR_1[VAR_9].main_str, VAR_1[VAR_9].search_chars,
           VAR_7, VAR_1[VAR_9].result);
        FUNC_0(VAR_6 == VAR_1[VAR_9].pos,
           "(test %d): RtlFindCharInUnicodeString(%d, %s, %s, [out]) assigns %d to pos, expected %d\n",
           VAR_9, VAR_1[VAR_9].flags,
           VAR_1[VAR_9].main_str, VAR_1[VAR_9].search_chars,
           VAR_6, VAR_1[VAR_9].pos);
    }
}
