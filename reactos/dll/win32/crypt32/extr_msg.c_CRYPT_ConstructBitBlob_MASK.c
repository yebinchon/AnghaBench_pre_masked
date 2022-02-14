
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pbData; scalar_t__ cbData; int cUnusedBits; } ;
typedef TYPE_1__ CRYPT_BIT_BLOB ;
typedef int BOOL ;


 int * FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2(CRYPT_BIT_BLOB *VAR_2, const CRYPT_BIT_BLOB *VAR_3)
{
    VAR_2->cbData = VAR_3->cbData;
    VAR_2->cUnusedBits = VAR_3->cUnusedBits;
    if (VAR_2->cbData)
    {
        VAR_2->pbData = FUNC_0(VAR_2->cbData);
        if (VAR_2->pbData)
            FUNC_1(VAR_2->pbData, VAR_3->pbData, VAR_2->cbData);
        else
            return VAR_0;
    }
    else
        VAR_2->pbData = ((void*)0);
    return VAR_1;
}
