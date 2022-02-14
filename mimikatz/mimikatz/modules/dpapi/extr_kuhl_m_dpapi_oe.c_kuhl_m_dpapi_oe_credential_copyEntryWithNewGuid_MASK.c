
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int * md4protectedhash; int * sha1hash; int * md4hash; int sid; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef scalar_t__ LPCGUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int *,int *,int *,int *) ;

BOOL FUNC_1(PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_5, LPCGUID VAR_6)
{
 BOOL VAR_7 = VAR_0;
 if(VAR_5 && VAR_6 && !(VAR_5->data.flags & VAR_1))
  VAR_7 = FUNC_0(VAR_5->data.sid, VAR_6, (VAR_5->data.flags & VAR_2) ? VAR_5->data.md4hash : ((void*)0), (VAR_5->data.flags & VAR_4) ? VAR_5->data.sha1hash : ((void*)0), (VAR_5->data.flags & VAR_3) ? VAR_5->data.md4protectedhash : ((void*)0), ((void*)0));
 return VAR_7;
}
