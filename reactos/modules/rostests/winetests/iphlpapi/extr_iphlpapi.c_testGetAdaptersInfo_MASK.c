
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int * String; } ;
struct TYPE_8__ {int * String; } ;
struct TYPE_10__ {TYPE_2__ IpMask; TYPE_1__ IpAddress; } ;
struct TYPE_11__ {struct TYPE_11__* Next; TYPE_3__ IpAddressList; int AdapterName; } ;
typedef TYPE_4__* PIP_ADAPTER_INFO ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
  if (&FUNC_4) {
    DWORD VAR_5;
    ULONG VAR_6 = 0;

    VAR_5 = FUNC_4(((void*)0), ((void*)0));
    if (VAR_5 == VAR_2) {
      FUNC_5("GetAdaptersInfo is not supported\n");
      return;
    }
    FUNC_3(VAR_5 == VAR_1,
     "GetAdaptersInfo returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_5);
    VAR_5 = FUNC_4(((void*)0), &VAR_6);
    FUNC_3(VAR_5 == VAR_3 || VAR_5 == VAR_0,
     "GetAdaptersInfo returned %d, expected ERROR_NO_DATA or ERROR_BUFFER_OVERFLOW\n",
     VAR_5);
    if (VAR_5 == VAR_3)
      ;
    else if (VAR_5 == VAR_0) {
      PIP_ADAPTER_INFO VAR_7, VAR_8 = FUNC_1(FUNC_0(), 0, VAR_6);

      VAR_5 = FUNC_4(VAR_8, &VAR_6);
      FUNC_3(VAR_5 == VAR_4,
       "GetAdaptersInfo(buf, &dwSize) returned %d, expected NO_ERROR\n",
       VAR_5);
      VAR_7 = VAR_8;
      while (VAR_7) {
        FUNC_3(VAR_7->IpAddressList.IpAddress.String[0], "A valid IP must be present\n");
        FUNC_3(VAR_7->IpAddressList.IpMask.String[0], "A valid mask must be present\n");
        FUNC_6("Adapter '%s', IP %s, Mask %s\n", VAR_7->AdapterName,
              VAR_7->IpAddressList.IpAddress.String, VAR_7->IpAddressList.IpMask.String);
        VAR_7 = VAR_7->Next;
      }
      FUNC_2(FUNC_0(), 0, VAR_8);
    }
  }
}
