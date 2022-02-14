
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {TYPE_1__* pCHMInfo; } ;
struct TYPE_4__ {char const* compiledFile; int * pStorage; } ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef TYPE_2__ HHInfo ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static WCHAR *FUNC_9(HHInfo *VAR_1, const WCHAR *VAR_2)
{
    static const WCHAR VAR_3[] = {'.',0};
    IStorage *VAR_4 = VAR_1->pCHMInfo->pStorage;
    IStream *VAR_5;
    WCHAR *VAR_6;
    HRESULT VAR_7;

    VAR_6 = FUNC_3( (FUNC_7(VAR_1->pCHMInfo->compiledFile)
                            + FUNC_7(VAR_3) + FUNC_7(VAR_2) + 1) * sizeof(WCHAR) );
    FUNC_6(VAR_6, VAR_1->pCHMInfo->compiledFile);
    FUNC_5(VAR_6, VAR_3);
    FUNC_5(VAR_6, VAR_2);
    VAR_7 = FUNC_1(VAR_4, VAR_6, ((void*)0), VAR_0, 0, &VAR_5);
    if (FUNC_0(VAR_7))
    {
        FUNC_4(VAR_6);
        return FUNC_8("");
    }
    FUNC_2(VAR_5);
    return VAR_6;
}
