
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* result; char* Buffer; int MaximumLength; int base; int value; } ;
typedef TYPE_1__ int2str_t ;
typedef char* NTSTATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int,char*,int,int ,int ,int ,char*,char*) ;
 char* FUNC_3 (int ,int ,int ,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_1, const int2str_t *VAR_2)
{
    NTSTATUS VAR_3;
    char VAR_4[VAR_0 + 1];

    FUNC_1(VAR_4, '-', VAR_0);
    VAR_4[VAR_0] = '\0';
    VAR_3 = FUNC_3(VAR_2->value, VAR_2->base, VAR_2->MaximumLength, VAR_4);
    FUNC_2(VAR_3 == VAR_2->result,
       "(test %d): RtlIntegerToChar(%u, %d, %d, [out]) has result %x, expected: %x\n",
       VAR_1, VAR_2->value, VAR_2->base, VAR_2->MaximumLength, VAR_3, VAR_2->result);
    FUNC_2(FUNC_0(VAR_4, VAR_2->Buffer, VAR_0) == 0,
       "(test %d): RtlIntegerToChar(%u, %d, %d, [out]) assigns string \"%s\", expected: \"%s\"\n",
       VAR_1, VAR_2->value, VAR_2->base, VAR_2->MaximumLength, VAR_4, VAR_2->Buffer);
}
