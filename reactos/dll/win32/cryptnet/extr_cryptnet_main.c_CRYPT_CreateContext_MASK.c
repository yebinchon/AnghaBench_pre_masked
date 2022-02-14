
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cBlob; TYPE_1__* rgBlob; } ;
struct TYPE_7__ {int pbData; } ;
typedef void* HCERTSTORE ;
typedef size_t DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef TYPE_2__ CRYPT_BLOB_ARRAY ;
typedef scalar_t__ BOOL ;
typedef int (* AddContextToStore ) (void*,void const*,int ,int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,size_t,int ,int ,int *,int *,int *,int *,int *,void const**) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_5(const CRYPT_BLOB_ARRAY *VAR_9,
 DWORD VAR_10, AddContextToStore VAR_11, void **VAR_12)
{
    BOOL VAR_13 = VAR_8;
    CRYPT_DATA_BLOB VAR_14;

    if (!VAR_9->cBlob)
    {
        FUNC_3(VAR_6);
        *VAR_12 = ((void*)0);
        VAR_13 = VAR_7;
    }
    else if (VAR_9->cBlob == 1)
    {
        if (FUNC_4(&VAR_9->rgBlob[0], &VAR_14))
        {
            VAR_13 = FUNC_2(VAR_1, &VAR_14,
             VAR_10, VAR_0, 0,
             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), (const void **)VAR_12);
            FUNC_1(VAR_14.pbData);
        }
        else
        {
            VAR_13 = FUNC_2(VAR_1, &VAR_9->rgBlob[0],
             VAR_10, VAR_0, 0,
             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), (const void **)VAR_12);
        }
        if (!VAR_13)
        {
            FUNC_3(VAR_5);
            VAR_13 = VAR_7;
        }
    }
    else
    {
        HCERTSTORE VAR_15 = FUNC_0(VAR_4, 0, 0,
         VAR_3, ((void*)0));

        if (VAR_15)
        {
            DWORD VAR_16;
            const void *VAR_17;

            for (VAR_16 = 0; VAR_16 < VAR_9->cBlob; VAR_16++)
            {
                if (FUNC_4(&VAR_9->rgBlob[VAR_16], &VAR_14))
                {
                    VAR_13 = FUNC_2(VAR_1, &VAR_14,
                     VAR_10, VAR_0,
                     0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_17);
                    FUNC_1(VAR_14.pbData);
                }
                else
                {
                    VAR_13 = FUNC_2(VAR_1,
                     &VAR_9->rgBlob[VAR_16], VAR_10,
                     VAR_0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                     ((void*)0), &VAR_17);
                }
                if (VAR_13)
                {
                    if (!VAR_11(VAR_15, VAR_17, VAR_2, ((void*)0)))
                        VAR_13 = VAR_7;
                }
                else
                {
                    FUNC_3(VAR_5);
                    VAR_13 = VAR_7;
                }
            }
        }
        else
            VAR_13 = VAR_7;
        *VAR_12 = VAR_15;
    }
    return VAR_13;
}
