
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int szPath ;
typedef int WCHAR ;
struct TYPE_4__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int VAR_3 ;

__attribute__((used)) static BOOLEAN FUNC_7(BOOLEAN VAR_4)
{
    WCHAR VAR_5[VAR_2];
    UNICODE_STRING VAR_6;
    BOOLEAN VAR_7;
    NTSTATUS VAR_8;
    FUNC_2(((void*)0), VAR_5, sizeof(VAR_5) / sizeof(VAR_5[0]));
    VAR_7 = FUNC_4(VAR_5, &VAR_6, ((void*)0), ((void*)0));
    if (!VAR_7)
    {
        FUNC_1("RegisterInShimCache: RtlDosPathNameToNtPathName_U failed\n");
        return VAR_1;
    }

    VAR_8 = FUNC_0(&VAR_6, VAR_4, VAR_0);
    if (!FUNC_3(VAR_8))
    {
        FUNC_1("RegisterInShimCache: CallCacheControl failed\n");
        FUNC_5(FUNC_6(), 0, VAR_6.Buffer);
        return VAR_1;
    }
    FUNC_5(FUNC_6(), 0, VAR_6.Buffer);
    return VAR_3;
}
