
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int dwForwardIfIndex; int dwForwardNextHop; int dwForwardMask; int dwForwardDest; } ;
struct TYPE_8__ {int dwForwardType; } ;
struct TYPE_7__ {scalar_t__ dwNumEntries; TYPE_4__* table; } ;
typedef TYPE_1__* PMIB_IPFORWARDTABLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 TYPE_3__ FUNC_3 (TYPE_4__) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,scalar_t__,...) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(void)
{
  if (&FUNC_6) {
    DWORD VAR_6;
    ULONG VAR_7 = 0;

    VAR_6 = FUNC_6(((void*)0), ((void*)0), VAR_3);
    if (VAR_6 == VAR_2) {
      FUNC_7("GetIpForwardTable is not supported\n");
      return;
    }
    FUNC_5(VAR_6 == VAR_1,
     "GetIpForwardTable(NULL, NULL, FALSE) returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_6);
    VAR_6 = FUNC_6(((void*)0), &VAR_7, VAR_3);
    FUNC_5(VAR_6 == VAR_0,
     "GetIpForwardTable(NULL, &dwSize, FALSE) returned %d, expected ERROR_INSUFFICIENT_BUFFER\n",
     VAR_6);
    if (VAR_6 == VAR_0) {
      PMIB_IPFORWARDTABLE VAR_8 = FUNC_1(FUNC_0(), 0, VAR_7);

      VAR_6 = FUNC_6(VAR_8, &VAR_7, VAR_3);
      FUNC_5(VAR_6 == VAR_4,
       "GetIpForwardTable(buf, &dwSize, FALSE) returned %d, expected NO_ERROR\n",
       VAR_6);

      if (VAR_6 == VAR_4 && VAR_5 > 1)
      {
          DWORD VAR_9;

          FUNC_10( "IP forward table: %u entries\n", VAR_8->dwNumEntries );
          for (VAR_9 = 0; VAR_9 < VAR_8->dwNumEntries; VAR_9++)
          {
              char VAR_10[100];
              FUNC_8( VAR_10, "dest %s", FUNC_4( VAR_8->table[VAR_9].dwForwardDest ));
              FUNC_8( VAR_10 + FUNC_9(VAR_10), " mask %s", FUNC_4( VAR_8->table[VAR_9].dwForwardMask ));
              FUNC_10( "%u: %s gw %s if %u type %u\n", VAR_9, VAR_10,
                     FUNC_4( VAR_8->table[VAR_9].dwForwardNextHop ),
                     VAR_8->table[VAR_9].dwForwardIfIndex, FUNC_3(VAR_8->table[VAR_9]).dwForwardType );
          }
      }
      FUNC_2(FUNC_0(), 0, VAR_8);
    }
  }
}
