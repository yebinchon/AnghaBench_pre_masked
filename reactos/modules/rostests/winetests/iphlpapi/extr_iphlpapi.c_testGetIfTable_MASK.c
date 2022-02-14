
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {scalar_t__ dwPhysAddrLen; int* bPhysAddr; char* dwOutUcastPkts; int dwOutErrors; int dwOutDiscards; int dwOutNUcastPkts; int dwOutOctets; int dwInUnknownProtos; int dwInErrors; int dwInDiscards; int dwInNUcastPkts; int dwInUcastPkts; int dwInOctets; int dwSpeed; int dwMtu; int dwType; int dwIndex; int wszName; } ;
struct TYPE_6__ {scalar_t__ dwNumEntries; TYPE_2__* table; } ;
typedef TYPE_1__* PMIB_IFTABLE ;
typedef TYPE_2__ MIB_IFROW ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ,int ,int,char*,int,int *,int *) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,scalar_t__,...) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_9(void)
{
  if (&FUNC_5) {
    DWORD VAR_8;
    ULONG VAR_9 = 0;

    VAR_8 = FUNC_5(((void*)0), ((void*)0), VAR_4);
    if (VAR_8 == VAR_3) {
      FUNC_7("GetIfTable is not supported\n");
      return;
    }
    FUNC_4(VAR_8 == VAR_2,
     "GetIfTable(NULL, NULL, FALSE) returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_8);
    VAR_8 = FUNC_5(((void*)0), &VAR_9, VAR_4);
    FUNC_4(VAR_8 == VAR_1,
     "GetIfTable(NULL, &dwSize, FALSE) returned %d, expected ERROR_INSUFFICIENT_BUFFER\n",
     VAR_8);
    if (VAR_8 == VAR_1) {
      PMIB_IFTABLE VAR_10 = FUNC_1(FUNC_0(), 0, VAR_9);

      VAR_8 = FUNC_5(VAR_10, &VAR_9, VAR_4);
      FUNC_4(VAR_8 == VAR_6,
       "GetIfTable(buf, &dwSize, FALSE) returned %d, expected NO_ERROR\n\n",
       VAR_8);

      if (VAR_8 == VAR_6 && VAR_7 > 1)
      {
          DWORD VAR_11, VAR_12;
          char VAR_13[VAR_5];

          FUNC_8( "interface table: %u entries\n", VAR_10->dwNumEntries );
          for (VAR_11 = 0; VAR_11 < VAR_10->dwNumEntries; VAR_11++)
          {
              MIB_IFROW *VAR_14 = &VAR_10->table[VAR_11];
              FUNC_3( VAR_0, 0, VAR_14->wszName, -1, VAR_13, VAR_5, ((void*)0), ((void*)0) );
              FUNC_8( "%u: '%s' type %u mtu %u speed %u phys",
                     VAR_14->dwIndex, VAR_13, VAR_14->dwType, VAR_14->dwMtu, VAR_14->dwSpeed );
              for (VAR_12 = 0; VAR_12 < VAR_14->dwPhysAddrLen; VAR_12++)
                  FUNC_6( " %02x", VAR_14->bPhysAddr[VAR_12] );
              FUNC_6( "\n" );
              FUNC_8( "        in: bytes %u upkts %u nupkts %u disc %u err %u unk %u\n",
                     VAR_14->dwInOctets, VAR_14->dwInUcastPkts, VAR_14->dwInNUcastPkts,
                     VAR_14->dwInDiscards, VAR_14->dwInErrors, VAR_14->dwInUnknownProtos );
              FUNC_8( "        out: bytes %u upkts %u nupkts %u disc %u err %u\n",
                     VAR_14->dwOutOctets, VAR_14->dwOutUcastPkts, VAR_14->dwOutNUcastPkts,
                     VAR_14->dwOutDiscards, VAR_14->dwOutErrors );
          }
      }
      FUNC_2(FUNC_0(), 0, VAR_10);
    }
  }
}
