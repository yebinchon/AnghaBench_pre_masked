
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* Buffer; int base; int value; } ;
typedef TYPE_1__ ulonglong2str_t ;
typedef char WCHAR ;
struct TYPE_9__ {int Length; int MaximumLength; char* Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
struct TYPE_10__ {char* Buffer; } ;
typedef TYPE_3__ STRING ;
typedef char* LPWSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,int,int ,int ,char*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;
 char* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(int VAR_1, const ulonglong2str_t *VAR_2)
{
    int VAR_3;
    WCHAR VAR_4[VAR_0 + 1];
    WCHAR VAR_5[VAR_0 + 1];
    UNICODE_STRING VAR_6;
    STRING VAR_7;
    LPWSTR VAR_8;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 VAR_4[VAR_3] = VAR_2->Buffer[VAR_3];
    }
    VAR_4[VAR_0] = '\0';

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 VAR_5[VAR_3] = '-';
    }
    VAR_5[VAR_0] = '\0';
    VAR_6.Length = VAR_0 * sizeof(WCHAR);
    VAR_6.MaximumLength = VAR_6.Length + sizeof(WCHAR);
    VAR_6.Buffer = VAR_5;

    VAR_8 = FUNC_4(VAR_2->value, VAR_5, VAR_2->base);
    FUNC_3(&VAR_7, &VAR_6, 1);
    FUNC_1(VAR_8 == VAR_5,
       "(test %d): _ui64tow(0x%s, [out], %d) has result %p, expected: %p\n",
       VAR_1, FUNC_5(VAR_2->value),
       VAR_2->base, VAR_8, VAR_5);
    FUNC_1(FUNC_0(VAR_5, VAR_4, VAR_0 * sizeof(WCHAR)) == 0,
       "(test %d): _ui64tow(0x%s, [out], %d) assigns string \"%s\", expected: \"%s\"\n",
       VAR_1, FUNC_5(VAR_2->value),
       VAR_2->base, VAR_7.Buffer, VAR_2->Buffer);
    FUNC_2(&VAR_7);
}
