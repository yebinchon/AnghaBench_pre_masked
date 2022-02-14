
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_3__ {int base; int MaximumLength; int value; } ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int,char*,int ,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int,int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    NTSTATUS VAR_5;
    int VAR_6;
    ULONGLONG VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
 FUNC_1(VAR_6, &VAR_4[VAR_6]);
    }

    VAR_7 = VAR_4[0].value;
    VAR_5 = FUNC_2(&VAR_7, 20, VAR_4[0].MaximumLength, ((void*)0));
    FUNC_0(VAR_5 == VAR_3,
       "(test a): RtlLargeIntegerToChar(0x%s, %d, %d, NULL) has result %x, expected: %x\n",
       FUNC_3(VAR_4[0].value), 20,
       VAR_4[0].MaximumLength, VAR_5, VAR_3);

    VAR_5 = FUNC_2(&VAR_7, 20, 0, ((void*)0));
    FUNC_0(VAR_5 == VAR_3,
       "(test b): RtlLargeIntegerToChar(0x%s, %d, %d, NULL) has result %x, expected: %x\n",
       FUNC_3(VAR_4[0].value), 20,
       VAR_4[0].MaximumLength, VAR_5, VAR_3);

    VAR_5 = FUNC_2(&VAR_7, VAR_4[0].base, 0, ((void*)0));
    FUNC_0(VAR_5 == VAR_2,
       "(test c): RtlLargeIntegerToChar(0x%s, %d, %d, NULL) has result %x, expected: %x\n",
       FUNC_3(VAR_4[0].value), VAR_4[0].base, 0, VAR_5, VAR_2);

    VAR_5 = FUNC_2(&VAR_7, VAR_4[0].base, VAR_4[0].MaximumLength, ((void*)0));
    FUNC_0(VAR_5 == VAR_1,
       "(test d): RtlLargeIntegerToChar(0x%s, %d, %d, NULL) has result %x, expected: %x\n",
       FUNC_3(VAR_4[0].value),
       VAR_4[0].base, VAR_4[0].MaximumLength, VAR_5, VAR_1);
}
