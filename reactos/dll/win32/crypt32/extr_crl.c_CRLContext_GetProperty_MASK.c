
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cbCrlEncoded; int pbCrlEncoded; } ;
struct TYPE_9__ {scalar_t__ properties; } ;
struct TYPE_11__ {TYPE_2__ ctx; TYPE_1__ base; } ;
typedef TYPE_3__ crl_t ;
struct TYPE_12__ {scalar_t__ cbData; int pbData; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ CRYPT_DATA_BLOB ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_3__*,scalar_t__,int ,int ,int ,void*,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_3__*,...) ;
 int FUNC_4 (void*,int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_5(crl_t *VAR_5, DWORD VAR_6,
                                   void *VAR_7, DWORD *VAR_8)
{
    BOOL VAR_9;
    CRYPT_DATA_BLOB VAR_10;

    FUNC_3("(%p, %d, %p, %p)\n", VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_5->base.properties)
        VAR_9 = FUNC_1(VAR_5->base.properties, VAR_6, &VAR_10);
    else
        VAR_9 = VAR_4;
    if (VAR_9)
    {
        if (!VAR_7)
            *VAR_8 = VAR_10.cbData;
        else if (*VAR_8 < VAR_10.cbData)
        {
            FUNC_2(VAR_3);
            *VAR_8 = VAR_10.cbData;
            VAR_9 = VAR_4;
        }
        else
        {
            FUNC_4(VAR_7, VAR_10.pbData, VAR_10.cbData);
            *VAR_8 = VAR_10.cbData;
        }
    }
    else
    {

        switch (VAR_6)
        {
        case 128:
            VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_1,
                                         VAR_5->ctx.pbCrlEncoded, VAR_5->ctx.cbCrlEncoded, VAR_7,
             VAR_8);
            break;
        case 129:
            VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_0,
                                         VAR_5->ctx.pbCrlEncoded, VAR_5->ctx.cbCrlEncoded, VAR_7,
             VAR_8);
            break;
        default:
            FUNC_2(VAR_2);
        }
    }
    FUNC_3("returning %d\n", VAR_9);
    return VAR_9;
}
