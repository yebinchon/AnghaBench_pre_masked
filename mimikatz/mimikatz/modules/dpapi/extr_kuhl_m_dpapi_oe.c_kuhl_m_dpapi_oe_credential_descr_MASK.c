
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int md4protectedhash; int sha1hash; int md4hash; int guid; scalar_t__ sid; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_6)
{
 if(VAR_6)
 {
  if(VAR_6->data.sid)
   FUNC_0(L"SID:%s", VAR_6->data.sid);
  FUNC_0(L";");
  if(VAR_6->data.flags & VAR_0)
  {
   FUNC_0(L"GUID:");
   FUNC_1(&VAR_6->data.guid);
  }
  FUNC_0(L";");
  if(VAR_6->data.flags & VAR_1)
  {
   FUNC_0(L"MD4:");
   FUNC_2(VAR_6->data.md4hash, VAR_4, 0);
  }
  FUNC_0(L";");
  if(VAR_6->data.flags & VAR_3)
  {
   FUNC_0(L"SHA1:");
   FUNC_2(VAR_6->data.sha1hash, VAR_5, 0);
  }
  FUNC_0(L";");
  if(VAR_6->data.flags & VAR_2)
  {
   FUNC_0(L"MD4p:");
   FUNC_2(VAR_6->data.md4protectedhash, VAR_4, 0);
  }
  FUNC_0(L"\n");
 }
}
