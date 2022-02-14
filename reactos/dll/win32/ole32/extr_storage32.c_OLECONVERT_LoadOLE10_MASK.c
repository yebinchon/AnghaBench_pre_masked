
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* lpstbl; } ;
struct TYPE_18__ {void* pstrOleObjFileName; scalar_t__ dwOleID; scalar_t__ dwTypeID; int dwOleTypeNameLength; void* strOleTypeName; int dwOleObjFileNameLength; int dwDataLength; void* strUnknown; int * pData; int dwMetaFileHeight; int dwMetaFileWidth; } ;
struct TYPE_17__ {int (* Get ) (TYPE_3__*,void*,int) ;} ;
typedef TYPE_2__ OLECONVERT_OLESTREAM_DATA ;
typedef TYPE_3__* LPOLESTREAM ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*,void*,int) ;
 int FUNC_3 (TYPE_3__*,void*,int) ;
 int FUNC_4 (TYPE_3__*,void*,int) ;
 int FUNC_5 (TYPE_3__*,void*,int) ;
 int FUNC_6 (TYPE_3__*,void*,int) ;
 int FUNC_7 (TYPE_3__*,void*,int) ;
 int FUNC_8 (TYPE_3__*,void*,int) ;
 int FUNC_9 (TYPE_3__*,void*,int) ;
 int FUNC_10 (TYPE_3__*,void*,int) ;
 int FUNC_11 (TYPE_3__*,void*,int) ;
 int FUNC_12 (TYPE_3__*,void*,int) ;

__attribute__((used)) static HRESULT FUNC_13(LPOLESTREAM VAR_4, OLECONVERT_OLESTREAM_DATA *VAR_5, BOOL VAR_6)
{
 DWORD VAR_7;
 HRESULT VAR_8 = VAR_3;
 int VAR_9=0;
 int VAR_10 = 6;

 VAR_5->pData = ((void*)0);
 VAR_5->pstrOleObjFileName = ((void*)0);

 for( VAR_9=0;VAR_9 < VAR_10; VAR_9++)
 {

 VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *)&(VAR_5->dwOleID), sizeof(VAR_5->dwOleID));
 if(VAR_7 != sizeof(VAR_5->dwOleID))
 {
  VAR_8 = VAR_1;
 }
 else if(VAR_5->dwOleID != VAR_2)
 {
  VAR_8 = VAR_0;
 }
  else
  {
   VAR_8 = VAR_3;
   break;
  }
 }

 if(VAR_8 == VAR_3)
 {

  VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *)&(VAR_5->dwTypeID), sizeof(VAR_5->dwTypeID));
  if(VAR_7 != sizeof(VAR_5->dwTypeID))
  {
   VAR_8 = VAR_1;
  }
 }
 if(VAR_8 == VAR_3)
 {
  if(VAR_5->dwTypeID != 0)
  {

   VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *) &(VAR_5->dwOleTypeNameLength), sizeof(VAR_5->dwOleTypeNameLength));
   if(VAR_7 != sizeof(VAR_5->dwOleTypeNameLength))
   {
    VAR_8 = VAR_1;
   }

   if(VAR_8 == VAR_3)
   {
    if(VAR_5->dwOleTypeNameLength > 0)
    {

     VAR_7 = VAR_4->lpstbl->Get(VAR_4, VAR_5->strOleTypeName, VAR_5->dwOleTypeNameLength);
     if(VAR_7 != VAR_5->dwOleTypeNameLength)
     {
      VAR_8 = VAR_1;
     }
    }
   }
   if(VAR_6)
   {
    VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *)&(VAR_5->dwOleObjFileNameLength), sizeof(VAR_5->dwOleObjFileNameLength));
    if(VAR_7 != sizeof(VAR_5->dwOleObjFileNameLength))
    {
     VAR_8 = VAR_1;
    }
   if(VAR_8 == VAR_3)
   {
     if(VAR_5->dwOleObjFileNameLength < 1)
      VAR_5->dwOleObjFileNameLength = sizeof(VAR_5->dwOleObjFileNameLength);
     VAR_5->pstrOleObjFileName = FUNC_1(FUNC_0(), 0, VAR_5->dwOleObjFileNameLength);
     if(VAR_5->pstrOleObjFileName)
     {
      VAR_7 = VAR_4->lpstbl->Get(VAR_4, VAR_5->pstrOleObjFileName, VAR_5->dwOleObjFileNameLength);
      if(VAR_7 != VAR_5->dwOleObjFileNameLength)
      {
       VAR_8 = VAR_1;
      }
     }
     else
      VAR_8 = VAR_1;
    }
   }
   else
   {

    VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *)&(VAR_5->dwMetaFileWidth), sizeof(VAR_5->dwMetaFileWidth));
    if(VAR_7 != sizeof(VAR_5->dwMetaFileWidth))
    {
     VAR_8 = VAR_1;
    }
   if(VAR_8 == VAR_3)
   {

    VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *)&(VAR_5->dwMetaFileHeight), sizeof(VAR_5->dwMetaFileHeight));
    if(VAR_7 != sizeof(VAR_5->dwMetaFileHeight))
    {
     VAR_8 = VAR_1;
    }
   }
   }
   if(VAR_8 == VAR_3)
   {

    VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *)&(VAR_5->dwDataLength), sizeof(VAR_5->dwDataLength));
    if(VAR_7 != sizeof(VAR_5->dwDataLength))
    {
     VAR_8 = VAR_1;
    }
   }

   if(VAR_8 == VAR_3)
   {
    if(!VAR_6)
    {
     VAR_5->dwDataLength -= 8;
     VAR_7 = VAR_4->lpstbl->Get(VAR_4, VAR_5->strUnknown, sizeof(VAR_5->strUnknown));
     if(VAR_7 != sizeof(VAR_5->strUnknown))
     {
      VAR_8 = VAR_1;
     }
    }
   }
   if(VAR_8 == VAR_3)
   {
    if(VAR_5->dwDataLength > 0)
    {
     VAR_5->pData = FUNC_1(FUNC_0(),0,VAR_5->dwDataLength);


     if(VAR_5->pData)
     {
      VAR_7 = VAR_4->lpstbl->Get(VAR_4, (void *)VAR_5->pData, VAR_5->dwDataLength);
      if(VAR_7 != VAR_5->dwDataLength)
      {
       VAR_8 = VAR_1;
      }
     }
     else
     {
      VAR_8 = VAR_1;
     }
    }
   }
  }
 }
 return VAR_8;
}
