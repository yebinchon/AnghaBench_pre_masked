
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int dwNumEntries; TYPE_1__* table; } ;
struct TYPE_6__ {scalar_t__ wType; int dwIndex; int dwAddr; } ;
typedef TYPE_2__* PMIB_IPADDRTABLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(void)
{
  if (&FUNC_5) {
    DWORD VAR_5;
    ULONG VAR_6 = 0;

    VAR_5 = FUNC_5(((void*)0), ((void*)0), VAR_3);
    if (VAR_5 == VAR_2) {
      FUNC_6("GetIpAddrTable is not supported\n");
      return;
    }
    FUNC_4(VAR_5 == VAR_1,
     "GetIpAddrTable(NULL, NULL, FALSE) returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_5);
    VAR_5 = FUNC_5(((void*)0), &VAR_6, VAR_3);
    FUNC_4(VAR_5 == VAR_0,
     "GetIpAddrTable(NULL, &dwSize, FALSE) returned %d, expected ERROR_INSUFFICIENT_BUFFER\n",
     VAR_5);
    if (VAR_5 == VAR_0) {
      PMIB_IPADDRTABLE VAR_7 = FUNC_1(FUNC_0(), 0, VAR_6);

      VAR_5 = FUNC_5(VAR_7, &VAR_6, VAR_3);
      FUNC_4(VAR_5 == VAR_4,
       "GetIpAddrTable(buf, &dwSize, FALSE) returned %d, expected NO_ERROR\n",
       VAR_5);
      if (VAR_5 == VAR_4 && VAR_7->dwNumEntries)
      {
        int VAR_8;
        FUNC_7(VAR_7->table[0].dwIndex);
        for (VAR_8 = 0; VAR_8 < VAR_7->dwNumEntries; VAR_8++)
        {
          FUNC_4 (VAR_7->table[VAR_8].wType != 0, "Test[%d]: expected wType > 0\n", VAR_8);
          FUNC_8("Entry[%d]: addr %s, dwIndex %u, wType 0x%x\n", VAR_8,
                FUNC_3(VAR_7->table[VAR_8].dwAddr), VAR_7->table[VAR_8].dwIndex, VAR_7->table[VAR_8].wType);
        }
      }
      FUNC_2(FUNC_0(), 0, VAR_7);
    }
  }
}
