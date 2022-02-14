
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_2__ {int * lpTable; } ;
typedef scalar_t__ LPCWSTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (size_t) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(UINT VAR_5)
{
    const BYTE* VAR_6;
    LPCWSTR VAR_7;
    DWORD VAR_8;
    WORD VAR_9;

    if (!FUNC_1(VAR_5)) {
 FUNC_0("Ooops: %d is not valid\n", VAR_5);
 return VAR_0;
    }

    VAR_6 = VAR_3[VAR_5].lpTable;
    do {
 do {
     VAR_7 = (LPCWSTR)VAR_6;
     VAR_6 += (FUNC_2(VAR_7) + 1) * sizeof(WCHAR);
     VAR_8 = *(const DWORD*)VAR_6;
     VAR_9 = *(const WORD*)(VAR_6 + sizeof(DWORD));

     VAR_6 += sizeof(DWORD) + sizeof(WORD);
 } while (VAR_9 != VAR_1 && VAR_9 != VAR_2);

    } while (VAR_9 != VAR_2);
    return VAR_4;
}
