
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
typedef int CRYPT_DER_BLOB ;
typedef TYPE_1__ CDecodeMsg ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_3(CDecodeMsg *VAR_2, CRYPT_DER_BLOB *VAR_3)
{
    BOOL VAR_4 = VAR_0;

    switch (VAR_2->type)
    {
    case 129:
        VAR_4 = FUNC_1(VAR_2, VAR_3);
        break;
    case 130:
        VAR_4 = FUNC_0(VAR_2, VAR_3);
        break;
    case 128:
        VAR_4 = FUNC_2(VAR_2, VAR_3);
        break;
    default:
        VAR_4 = VAR_1;
    }
    return VAR_4;
}
