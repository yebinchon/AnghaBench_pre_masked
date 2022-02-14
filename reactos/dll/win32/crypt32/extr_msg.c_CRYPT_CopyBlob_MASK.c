
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cbData; int pbData; } ;
typedef int LPBYTE ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(CRYPT_DATA_BLOB *VAR_0,
 const CRYPT_DATA_BLOB *VAR_1, LPBYTE *VAR_2)
{
    VAR_0->cbData = VAR_1->cbData;
    if (VAR_1->cbData)
    {
        VAR_0->pbData = *VAR_2;
        FUNC_0(VAR_0->pbData, VAR_1->pbData, VAR_1->cbData);
        *VAR_2 += VAR_1->cbData;
    }
}
