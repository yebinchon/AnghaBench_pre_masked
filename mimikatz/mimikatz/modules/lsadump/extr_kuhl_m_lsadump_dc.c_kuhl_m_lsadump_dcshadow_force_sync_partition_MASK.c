
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ pVal; int member_0; } ;
struct TYPE_11__ {scalar_t__ pszDsaSrc; int * pNC; void* ulOptions; } ;
struct TYPE_15__ {TYPE_1__ V1; int member_0; } ;
struct TYPE_12__ {void* ulOptions; scalar_t__ pszDsaSrc; int * pNC; } ;
struct TYPE_14__ {TYPE_2__ V1; int member_0; } ;
struct TYPE_13__ {int szFakeFQDN; } ;
typedef int PWSTR ;
typedef scalar_t__ PSTR ;
typedef TYPE_3__* PDCSHADOW_DOMAIN_INFO ;
typedef int NTSTATUS ;
typedef int DSNAME ;
typedef TYPE_4__ DRS_MSG_REPDEL ;
typedef TYPE_5__ DRS_MSG_REPADD ;
typedef int DRS_HANDLE ;
typedef TYPE_6__ ATTRVAL ;


 void* VAR_0 ;
 int FUNC_0 (int ,int,TYPE_5__*) ;
 int FUNC_1 (int ,int,TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_8 (int ) ;

NTSTATUS FUNC_9(PDCSHADOW_DOMAIN_INFO VAR_2, DRS_HANDLE VAR_3, PWSTR VAR_4)
{
 NTSTATUS VAR_5 = VAR_1;
 ATTRVAL VAR_6 = {0};
 DRS_MSG_REPADD VAR_7 = {0};
 DRS_MSG_REPDEL VAR_8 = {0};
 PSTR VAR_9 = FUNC_8(VAR_2->szFakeFQDN);

 if(VAR_9)
 {
  if(FUNC_7(&VAR_6, VAR_4))
  {
   VAR_7.V1.pNC = (DSNAME*) VAR_6.pVal;
   VAR_7.V1.pszDsaSrc = VAR_9;
   VAR_7.V1.ulOptions = VAR_0;
   FUNC_6(L"Syncing %s\n", VAR_4);
   VAR_5 = FUNC_0(VAR_3, 1, &VAR_7);
   if(!FUNC_4(VAR_5))
    FUNC_5(L"IDL_DRSReplicaAdd %s 0x%x (%u)\n", VAR_4, VAR_5, VAR_5);
   VAR_8.V1.pNC = VAR_7.V1.pNC;
   VAR_8.V1.pszDsaSrc = VAR_7.V1.pszDsaSrc;
   VAR_8.V1.ulOptions = VAR_0;
   VAR_5 = FUNC_1(VAR_3, 1, &VAR_8);
   if(!FUNC_4(VAR_5))
    FUNC_5(L"IDL_DRSReplicaDel %s 0x%x (%u)\n", VAR_4, VAR_5, VAR_5);
   FUNC_6(L"Sync Done\n\n");
   FUNC_2(VAR_9);
   FUNC_3(VAR_6.pVal);
  }
 }
 return VAR_5;
}
