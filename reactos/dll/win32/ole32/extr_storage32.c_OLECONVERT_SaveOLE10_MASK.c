
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* lpstbl; } ;
struct TYPE_15__ {scalar_t__ dwOleID; scalar_t__ dwTypeID; int dwOleTypeNameLength; void* strOleTypeName; int dwDataLength; scalar_t__ pData; int dwMetaFileHeight; int dwMetaFileWidth; } ;
struct TYPE_14__ {int (* Put ) (TYPE_3__*,void*,int) ;} ;
typedef TYPE_2__ OLECONVERT_OLESTREAM_DATA ;
typedef TYPE_3__* LPOLESTREAM ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,void*,int) ;
 int FUNC_1 (TYPE_3__*,void*,int) ;
 int FUNC_2 (TYPE_3__*,void*,int) ;
 int FUNC_3 (TYPE_3__*,void*,int) ;
 int FUNC_4 (TYPE_3__*,void*,int) ;
 int FUNC_5 (TYPE_3__*,void*,int) ;
 int FUNC_6 (TYPE_3__*,void*,int) ;
 int FUNC_7 (TYPE_3__*,void*,int) ;

__attribute__((used)) static HRESULT FUNC_8(OLECONVERT_OLESTREAM_DATA *VAR_3, LPOLESTREAM VAR_4)
{
    DWORD VAR_5;
    HRESULT VAR_6 = VAR_2;



    VAR_5 = VAR_4->lpstbl->Put(VAR_4, (void *)&(VAR_3->dwOleID), sizeof(VAR_3->dwOleID));
    if(VAR_5 != sizeof(VAR_3->dwOleID))
    {
        VAR_6 = VAR_0;
    }

    if(VAR_6 == VAR_2)
    {

        VAR_5 = VAR_4->lpstbl->Put(VAR_4, (void *)&(VAR_3->dwTypeID), sizeof(VAR_3->dwTypeID));
        if(VAR_5 != sizeof(VAR_3->dwTypeID))
        {
            VAR_6 = VAR_0;
        }
    }

    if(VAR_3->dwOleID == VAR_1 && VAR_3->dwTypeID != 0 && VAR_6 == VAR_2)
    {

        VAR_5 = VAR_4->lpstbl->Put(VAR_4, (void *)&(VAR_3->dwOleTypeNameLength), sizeof(VAR_3->dwOleTypeNameLength));
        if(VAR_5 != sizeof(VAR_3->dwOleTypeNameLength))
        {
            VAR_6 = VAR_0;
        }

        if(VAR_6 == VAR_2)
        {
            if(VAR_3->dwOleTypeNameLength > 0)
            {

                VAR_5 = VAR_4->lpstbl->Put(VAR_4, VAR_3->strOleTypeName, VAR_3->dwOleTypeNameLength);
                if(VAR_5 != VAR_3->dwOleTypeNameLength)
                {
                    VAR_6 = VAR_0;
                }
            }
        }

        if(VAR_6 == VAR_2)
        {

            VAR_5 = VAR_4->lpstbl->Put(VAR_4, (void *)&(VAR_3->dwMetaFileWidth), sizeof(VAR_3->dwMetaFileWidth));
            if(VAR_5 != sizeof(VAR_3->dwMetaFileWidth))
            {
                VAR_6 = VAR_0;
            }
        }

        if(VAR_6 == VAR_2)
        {

            VAR_5 = VAR_4->lpstbl->Put(VAR_4, (void *)&(VAR_3->dwMetaFileHeight), sizeof(VAR_3->dwMetaFileHeight));
            if(VAR_5 != sizeof(VAR_3->dwMetaFileHeight))
            {
                VAR_6 = VAR_0;
            }
        }

        if(VAR_6 == VAR_2)
        {

            VAR_5 = VAR_4->lpstbl->Put(VAR_4, (void *)&(VAR_3->dwDataLength), sizeof(VAR_3->dwDataLength));
            if(VAR_5 != sizeof(VAR_3->dwDataLength))
            {
                VAR_6 = VAR_0;
            }
        }

        if(VAR_6 == VAR_2)
        {
            if(VAR_3->dwDataLength > 0)
            {

                VAR_5 = VAR_4->lpstbl->Put(VAR_4, (void *) VAR_3->pData, VAR_3->dwDataLength);
                if(VAR_5 != VAR_3->dwDataLength)
                {
                    VAR_6 = VAR_0;
                }
            }
        }
    }
    return VAR_6;
}
