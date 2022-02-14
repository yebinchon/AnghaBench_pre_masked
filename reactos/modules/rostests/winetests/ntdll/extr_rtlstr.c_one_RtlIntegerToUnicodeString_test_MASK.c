
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* Buffer; int Length; int MaximumLength; scalar_t__ result; int base; int value; } ;
typedef TYPE_1__ int2str_t ;
typedef char WCHAR ;
struct TYPE_10__ {int Length; int MaximumLength; char* Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
struct TYPE_11__ {scalar_t__ Buffer; } ;
typedef TYPE_3__ STRING ;
typedef scalar_t__ NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,int,int ,int ,scalar_t__,...) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_3, const int2str_t *VAR_4)
{
    int VAR_5;
    WCHAR VAR_6[VAR_2 + 1];
    UNICODE_STRING VAR_7;
    STRING VAR_8;
    WCHAR VAR_9[VAR_2 + 1];
    UNICODE_STRING VAR_10;
    STRING VAR_11;
    NTSTATUS VAR_12;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
 VAR_6[VAR_5] = VAR_4->Buffer[VAR_5];
    }
    VAR_7.Length = VAR_4->Length * sizeof(WCHAR);
    VAR_7.MaximumLength = VAR_4->MaximumLength * sizeof(WCHAR);
    VAR_7.Buffer = VAR_6;
    FUNC_4(&VAR_8, &VAR_7, 1);

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
 VAR_9[VAR_5] = '-';
    }
    VAR_10.Length = 0;
    VAR_10.MaximumLength = VAR_4->MaximumLength * sizeof(WCHAR);
    VAR_10.Buffer = VAR_9;

    VAR_12 = FUNC_3(VAR_4->value, VAR_4->base, &VAR_10);
    FUNC_4(&VAR_11, &VAR_10, 1);
    if (VAR_12 == VAR_0) {

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
     VAR_6[VAR_5] = '-';
 }





 if (VAR_7.Length > 32 && VAR_10.Length == 0) {

     VAR_7.Length = 0;
 }
    } else {
 FUNC_1(VAR_12 == VAR_4->result,
           "(test %d): RtlIntegerToUnicodeString(%u, %d, [out]) has result %x, expected: %x\n",
    VAR_3, VAR_4->value, VAR_4->base, VAR_12, VAR_4->result);
 if (VAR_12 == VAR_1) {
     FUNC_1(VAR_10.Buffer[VAR_10.Length/sizeof(WCHAR)] == '\0',
               "(test %d): RtlIntegerToUnicodeString(%u, %d, [out]) string \"%s\" is not NULL terminated\n",
        VAR_3, VAR_4->value, VAR_4->base, VAR_11.Buffer);
 }
    }
    FUNC_1(FUNC_0(VAR_10.Buffer, VAR_7.Buffer, VAR_2 * sizeof(WCHAR)) == 0,
       "(test %d): RtlIntegerToUnicodeString(%u, %d, [out]) assigns string \"%s\", expected: \"%s\"\n",
       VAR_3, VAR_4->value, VAR_4->base, VAR_11.Buffer, VAR_8.Buffer);
    FUNC_1(VAR_10.Length == VAR_7.Length,
       "(test %d): RtlIntegerToUnicodeString(%u, %d, [out]) string has Length %d, expected: %d\n",
       VAR_3, VAR_4->value, VAR_4->base, VAR_10.Length, VAR_7.Length);
    FUNC_1(VAR_10.MaximumLength == VAR_7.MaximumLength,
       "(test %d): RtlIntegerToUnicodeString(%u, %d, [out]) string has MaximumLength %d, expected: %d\n",
       VAR_3, VAR_4->value, VAR_4->base, VAR_10.MaximumLength, VAR_7.MaximumLength);
    FUNC_2(&VAR_8);
    FUNC_2(&VAR_11);
}
