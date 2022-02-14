
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbData; scalar_t__ pbData; int * member_1; int member_0; } ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_1__ CERT_BLOB ;
typedef void* BOOL ;


 void* FUNC_0 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,void*) ;
 void* FUNC_4 (void*,scalar_t__,int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_5(HCERTSTORE VAR_2,
 DWORD VAR_3, void *VAR_4)
{
    CERT_BLOB VAR_5 = { 0, ((void*)0) };
    BOOL VAR_6;

    FUNC_3("(%p)\n", VAR_4);

    VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_5);
    if (VAR_6)
    {
        VAR_5.pbData = FUNC_1(VAR_5.cbData);
        if (VAR_5.pbData)
        {
            VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_5);
            if (VAR_6)
                VAR_6 = FUNC_4(VAR_4, VAR_5.pbData, VAR_5.cbData,
                 &VAR_5.cbData, ((void*)0));
        }
        else
        {
            FUNC_2(VAR_0);
            VAR_6 = VAR_1;
        }
    }
    FUNC_3("returning %d\n", VAR_6);
    return VAR_6;
}
