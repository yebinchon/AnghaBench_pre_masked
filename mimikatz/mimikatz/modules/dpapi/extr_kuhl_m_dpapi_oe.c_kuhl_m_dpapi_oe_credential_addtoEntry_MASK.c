
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int flags; int sha1hashDerived; scalar_t__ sid; int * sha1hash; int md4hashDerived; int * md4hash; int guid; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LPCVOID ;
typedef scalar_t__ LPCGUID ;
typedef int GUID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int,int *,int) ;
 scalar_t__ FUNC_2 (int ,int *,int,scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

BOOL FUNC_4(PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_8, LPCGUID VAR_9, LPCVOID VAR_10, LPCVOID VAR_11, LPCVOID VAR_12, LPCWSTR VAR_13)
{
 DWORD VAR_14, VAR_15;
 if(VAR_8)
 {
  VAR_14 = (DWORD) FUNC_3(VAR_8->data.sid) * sizeof(wchar_t);
  if(!(VAR_8->data.flags & VAR_2) && VAR_9)
  {
   FUNC_0(&VAR_8->data.guid, VAR_9, sizeof(GUID));
   VAR_8->data.flags |= VAR_2;
  }
  if(VAR_13)
   VAR_15 = (DWORD) FUNC_3(VAR_13) * sizeof(wchar_t);

  if(!(VAR_8->data.flags & VAR_3) && (VAR_10 || VAR_13))
  {
   if(VAR_10)
    FUNC_0(VAR_8->data.md4hash, VAR_10, VAR_5);
   else
    FUNC_1(VAR_0, VAR_13, VAR_15, VAR_8->data.md4hash, VAR_5);

   if(FUNC_2(VAR_1, VAR_8->data.md4hash, VAR_5, VAR_8->data.sid, VAR_14 + sizeof(wchar_t), VAR_8->data.md4hashDerived, VAR_6))
    VAR_8->data.flags |= VAR_3;
  }
  if(!(VAR_8->data.flags & VAR_4) && (VAR_11 || VAR_13))
  {
   if(VAR_11)
    FUNC_0(VAR_8->data.sha1hash, VAR_11, VAR_6);
   else
    FUNC_1(VAR_1, VAR_13, VAR_15, VAR_8->data.sha1hash, VAR_6);

   FUNC_2(VAR_1, VAR_8->data.sha1hash, VAR_6, VAR_8->data.sid, VAR_14 + sizeof(wchar_t), VAR_8->data.sha1hashDerived, VAR_6);
   VAR_8->data.flags |= VAR_4;
  }
 }
 return VAR_7;
}
