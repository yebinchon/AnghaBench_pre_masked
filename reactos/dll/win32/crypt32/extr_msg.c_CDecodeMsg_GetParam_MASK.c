
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int* pbData; int cbData; } ;
struct TYPE_9__ {int type; int properties; } ;
typedef TYPE_1__* HCRYPTMSG ;
typedef int DWORD ;
typedef TYPE_2__ CRYPT_DATA_BLOB ;
typedef TYPE_1__ CDecodeMsg ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int ,int ,void*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ,void*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,void*,int *) ;




 int FUNC_3 (void*,int *,int*,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static BOOL FUNC_6(HCRYPTMSG VAR_2, DWORD VAR_3,
 DWORD VAR_4, void *VAR_5, DWORD *VAR_6)
{
    CDecodeMsg *VAR_7 = VAR_2;
    BOOL VAR_8 = VAR_1;

    switch (VAR_7->type)
    {
    case 130:
        VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5,
         VAR_6);
        break;
    case 131:
        VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5,
         VAR_6);
        break;
    case 129:
        VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5,
         VAR_6);
        break;
    default:
        switch (VAR_3)
        {
        case 128:
            VAR_8 = FUNC_3(VAR_5, VAR_6, &VAR_7->type,
             sizeof(VAR_7->type));
            break;
        default:
        {
            CRYPT_DATA_BLOB VAR_9;

            VAR_8 = FUNC_4(VAR_7->properties, VAR_3,
             &VAR_9);
            if (VAR_8)
                VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_9.pbData,
                 VAR_9.cbData);
            else
                FUNC_5(VAR_0);
        }
        }
    }
    return VAR_8;
}
