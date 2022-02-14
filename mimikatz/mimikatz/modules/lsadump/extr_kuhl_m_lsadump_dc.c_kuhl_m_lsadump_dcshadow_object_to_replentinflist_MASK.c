
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int WCHAR ;
struct TYPE_33__ {int attrCount; TYPE_15__* pAttr; } ;
struct TYPE_34__ {TYPE_8__ AttrBlock; int ulFlags; TYPE_14__* pName; } ;
struct TYPE_32__ {int timeChanged; int dwVersion; scalar_t__ usnOriginating; int uuidDsaOriginating; } ;
struct TYPE_30__ {int dwFlag; int curTimeChanged; int usnTimeChanged; scalar_t__ usnOriginating; int uidOriginatingDsa; int curRevision; } ;
struct TYPE_28__ {int valCount; int * pAVal; } ;
struct TYPE_31__ {TYPE_5__ MetaData; TYPE_3__ AttrVal; TYPE_1__* pAttribute; } ;
struct TYPE_29__ {int InstanceId; } ;
struct TYPE_27__ {int valCount; int * pAVal; } ;
struct TYPE_26__ {int Oid; } ;
struct TYPE_25__ {TYPE_2__ AttrVal; int attrTyp; } ;
struct TYPE_24__ {int structLen; int NameLen; int SidLen; int Guid; int Sid; int * StringName; } ;
struct TYPE_23__ {scalar_t__ maxDCUsn; TYPE_4__ realDc; int szDomainName; } ;
struct TYPE_22__ {int dwFlag; int cbAttributes; TYPE_6__* pAttributes; int ParentGuid; int * szObjectDN; int ObjectGUID; int pSid; } ;
struct TYPE_21__ {int cNumProps; TYPE_7__* rgMetaData; } ;
struct TYPE_20__ {int fIsNCPrefix; TYPE_11__* pMetaDataExt; TYPE_9__ Entinf; int * pParentGuid; int * pNextEntInf; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef TYPE_10__ REPLENTINFLIST ;
typedef int* PULONGLONG ;
typedef TYPE_11__ PROPERTY_META_DATA_EXT_VECTOR ;
typedef int PROPERTY_META_DATA_EXT ;
typedef scalar_t__ PFILETIME ;
typedef TYPE_12__* PDCSHADOW_PUSH_REQUEST_OBJECT ;
typedef TYPE_13__* PDCSHADOW_DOMAIN_INFO ;
typedef int GUID ;
typedef int DWORD ;
typedef int DSTIME ;
typedef TYPE_14__ DSNAME ;
typedef int BOOL ;
typedef TYPE_15__ ATTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_14__*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (int *) ;

BOOL FUNC_9(PDCSHADOW_DOMAIN_INFO VAR_8, REPLENTINFLIST ** VAR_9, PDCSHADOW_PUSH_REQUEST_OBJECT VAR_10, SCHEMA_PREFIX_TABLE *VAR_11, PFILETIME VAR_12)
{
 DWORD VAR_13, VAR_14;

 if((*VAR_9 = (REPLENTINFLIST *) FUNC_3(sizeof(REPLENTINFLIST))))
 {
  (*VAR_9)->pNextEntInf = ((void*)0);
  VAR_14 = FUNC_8(VAR_10->szObjectDN);
  if(((*VAR_9)->Entinf.pName = (DSNAME *) FUNC_3(sizeof(DSNAME) + VAR_14 * sizeof(WCHAR))))
  {
   FUNC_5((*VAR_9)->Entinf.pName, sizeof(DSNAME));
   (*VAR_9)->Entinf.pName->structLen = sizeof(DSNAME) + VAR_14 * sizeof(WCHAR);
   (*VAR_9)->Entinf.pName->NameLen = VAR_14;
   FUNC_4((*VAR_9)->Entinf.pName->StringName, VAR_10->szObjectDN, (VAR_14+1)*sizeof(WCHAR));
   if(FUNC_2(&VAR_10->pSid))
   {
    (*VAR_9)->Entinf.pName->SidLen = FUNC_0(&VAR_10->pSid);
    FUNC_4(&(*VAR_9)->Entinf.pName->Sid, &VAR_10->pSid, (*VAR_9)->Entinf.pName->SidLen);
   }
   FUNC_4(&(*VAR_9)->Entinf.pName->Guid, &VAR_10->ObjectGUID, sizeof(GUID));
  }
  (*VAR_9)->Entinf.ulFlags = VAR_1;
  if (VAR_3 & VAR_10->dwFlag)
   (*VAR_9)->Entinf.ulFlags |= VAR_0;
  (*VAR_9)->Entinf.AttrBlock.attrCount = VAR_10->cbAttributes;
  (*VAR_9)->fIsNCPrefix = (FUNC_6(VAR_8->szDomainName, VAR_10->szObjectDN) == 0);
  (*VAR_9)->pParentGuid = ((void*)0);
  if (!FUNC_1(&VAR_10->ParentGuid) && ((*VAR_9)->pParentGuid = (GUID*) FUNC_3(sizeof(GUID))) != ((void*)0))
  {
   FUNC_4((*VAR_9)->pParentGuid, &VAR_10->ParentGuid, sizeof(GUID));
  }
  if(((*VAR_9)->Entinf.AttrBlock.pAttr = (ATTR *) FUNC_3(sizeof(ATTR) * (*VAR_9)->Entinf.AttrBlock.attrCount)))
  {
   for(VAR_13 = 0; VAR_13 < (*VAR_9)->Entinf.AttrBlock.attrCount; VAR_13++)
   {
    FUNC_7(VAR_11, VAR_10->pAttributes[VAR_13].pAttribute->Oid, &(*VAR_9)->Entinf.AttrBlock.pAttr[VAR_13].attrTyp, VAR_7);

    (*VAR_9)->Entinf.AttrBlock.pAttr[VAR_13].AttrVal.pAVal = VAR_10->pAttributes[VAR_13].AttrVal.pAVal;
    VAR_10->pAttributes[VAR_13].AttrVal.pAVal = ((void*)0);
    (*VAR_9)->Entinf.AttrBlock.pAttr[VAR_13].AttrVal.valCount = VAR_10->pAttributes[VAR_13].AttrVal.valCount;
   }
  }
  else return VAR_2;
  if(((*VAR_9)->pMetaDataExt = (PROPERTY_META_DATA_EXT_VECTOR *) FUNC_3(sizeof(PROPERTY_META_DATA_EXT_VECTOR) + (((*VAR_9)->Entinf.AttrBlock.attrCount - 1 ) * sizeof(PROPERTY_META_DATA_EXT)))))
  {
   (*VAR_9)->pMetaDataExt->cNumProps = (*VAR_9)->Entinf.AttrBlock.attrCount;
   for(VAR_13 = 0; VAR_13 < (*VAR_9)->pMetaDataExt->cNumProps; VAR_13++)
   {
    (*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].dwVersion = VAR_10->pAttributes[VAR_13].MetaData.curRevision;
    if(VAR_10->pAttributes[VAR_13].MetaData.dwFlag & VAR_5)
     FUNC_4(&(*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].uuidDsaOriginating, &VAR_10->pAttributes[VAR_13].MetaData.uidOriginatingDsa, sizeof(GUID));
    else
     FUNC_4(&(*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].uuidDsaOriginating, &VAR_8->realDc.InstanceId, sizeof(GUID));
    if(VAR_10->pAttributes[VAR_13].MetaData.dwFlag & VAR_6)
     (*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].usnOriginating = VAR_10->pAttributes[VAR_13].MetaData.usnOriginating;
    else
     (*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].usnOriginating = ++VAR_8->maxDCUsn;
    if(VAR_10->pAttributes[VAR_13].MetaData.dwFlag & VAR_4)
     (*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].timeChanged = (*(PULONGLONG) &VAR_10->pAttributes[VAR_13].MetaData.usnTimeChanged) / 10000000;
    else
     (*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].timeChanged = (*(PULONGLONG) VAR_12) / 10000000;
    if (!(*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].dwVersion ||
     (*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].timeChanged <= (DSTIME) (*(PULONGLONG) &VAR_10->pAttributes[VAR_13].MetaData.curTimeChanged) / 10000000)
     (*VAR_9)->pMetaDataExt->rgMetaData[VAR_13].dwVersion++;
   }
  }
  else return VAR_2;
  return VAR_7;
 }
 return VAR_2;
}
