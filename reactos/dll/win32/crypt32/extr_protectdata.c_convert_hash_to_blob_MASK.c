
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbData; int * pbData; } ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef TYPE_1__ DATA_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *,int*,int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

__attribute__((used)) static
BOOL FUNC_5(HCRYPTHASH VAR_4, DATA_BLOB * VAR_5)
{
    DWORD VAR_6;

    FUNC_4("called\n");

    if (!VAR_5) return VAR_0;

    VAR_6=sizeof(DWORD);
    if (!FUNC_0(VAR_4, VAR_1, (BYTE*)&VAR_5->cbData,
                           &VAR_6, 0))
    {
        FUNC_3("failed to get hash size\n");
        return VAR_0;
    }

    if (!(VAR_5->pbData=FUNC_1(VAR_5->cbData)))
    {
        FUNC_3("failed to allocate blob memory\n");
        return VAR_0;
    }

    VAR_6=VAR_5->cbData;
    if (!FUNC_0(VAR_4, VAR_2, VAR_5->pbData, &VAR_6, 0))
    {
        FUNC_3("failed to get hash value\n");
        FUNC_2(VAR_5->pbData);
        VAR_5->pbData=((void*)0);
        VAR_5->cbData=0;
        return VAR_0;
    }

    return VAR_3;
}
