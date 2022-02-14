
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_5__ {int MaximumLength; scalar_t__ Length; int Buffer; } ;
struct TYPE_6__ {TYPE_1__ Str; } ;
typedef TYPE_2__* PSDB_TMP_STR ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(PSDB_TMP_STR VAR_0, WORD VAR_1)
{
    if (VAR_1 > VAR_0->Str.MaximumLength)
    {
        FUNC_1(VAR_0);
        VAR_0->Str.MaximumLength = VAR_1 * sizeof(WCHAR);
        VAR_0->Str.Buffer = FUNC_0(VAR_0->Str.MaximumLength);
        VAR_0->Str.Length = 0;
    }
}
