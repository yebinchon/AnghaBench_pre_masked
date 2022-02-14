
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pbData; scalar_t__ cbData; } ;
typedef int LPSTR ;
typedef int LPCSTR ;
typedef TYPE_1__ DATA_BLOB ;
typedef int BYTE ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
BYTE *FUNC_3(LPCSTR VAR_0, DATA_BLOB *VAR_1)
{
    if (!VAR_0 || !VAR_1) return ((void*)0);

    VAR_1->cbData=FUNC_2(VAR_0)+1;
    if (!(VAR_1->pbData=FUNC_0(VAR_1->cbData)))
    {
        VAR_1->cbData=0;
    }
    else {
        FUNC_1((LPSTR)VAR_1->pbData, VAR_0);
    }

    return VAR_1->pbData;
}
