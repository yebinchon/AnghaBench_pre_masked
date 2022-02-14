
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbData; scalar_t__* pbData; } ;
typedef TYPE_1__ CERT_NAME_BLOB ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const CERT_NAME_BLOB *VAR_2)
{
    BOOL VAR_3;

    if (!VAR_2->cbData)
        VAR_3 = VAR_1;
    else if (VAR_2->cbData == 2 && VAR_2->pbData[1] == 0)
    {

        VAR_3 = VAR_1;
    }
    else
        VAR_3 = VAR_0;
    return VAR_3;
}
