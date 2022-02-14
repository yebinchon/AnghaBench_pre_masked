
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_10__ {int chm_index; int chm_file; } ;
struct TYPE_9__ {TYPE_1__* pCHMInfo; } ;
struct TYPE_8__ {int szFile; } ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef TYPE_2__ HHInfo ;
typedef TYPE_3__ ChmPath ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (int ,char const*) ;

BOOL FUNC_8(HHInfo *VAR_1, LPCWSTR VAR_2)
{
    ChmPath VAR_3;
    BOOL VAR_4;
    HRESULT VAR_5;

    static const WCHAR VAR_6[] = {':', '/', '/', 0};

    FUNC_3("%s\n", FUNC_4(VAR_2));

    if (FUNC_7(VAR_2, VAR_6)) {
        VAR_5 = FUNC_6(VAR_1, VAR_2);
        if(FUNC_1(VAR_5))
            return VAR_0;
    }

    FUNC_2(&VAR_3, VAR_1->pCHMInfo->szFile, VAR_2);
    VAR_4 = FUNC_0(VAR_1, VAR_3.chm_file, VAR_3.chm_index);

    FUNC_5(VAR_3.chm_file);
    FUNC_5(VAR_3.chm_index);

    return VAR_4;
}
