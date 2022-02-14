
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {int String; } ;
struct TYPE_8__ {TYPE_1__ IpAddress; struct TYPE_8__* Next; } ;
struct TYPE_9__ {TYPE_2__* CurrentDnsServer; TYPE_2__ DnsServerList; } ;
typedef TYPE_2__* PIP_ADDR_STRING ;
typedef TYPE_3__* PFIXED_INFO ;


 int FUNC_0 (TYPE_3__*,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char,...) ;

int FUNC_4( int VAR_0, char **VAR_1 ) {
  ULONG VAR_2 = 0;
  PFIXED_INFO VAR_3;
  PIP_ADDR_STRING VAR_4;

  FUNC_0(((void*)0), &VAR_2);
  VAR_3 = FUNC_2(VAR_2);
  if (!VAR_3) {
    FUNC_3( "Failed to alloc %d bytes.\n", (int)VAR_2 );
    return 1;
  }

  FUNC_3( "%d Bytes allocated\n", (int)VAR_2 );

  FUNC_0(VAR_3,&VAR_2);

  for( VAR_4 = &VAR_3->DnsServerList;
       VAR_4;
       VAR_4 = VAR_4->Next ) {
    FUNC_3( "%c%s\n",
     VAR_4 == VAR_3->CurrentDnsServer ? '*' : ' ',
     VAR_4->IpAddress.String );
  }

  FUNC_1( VAR_3 );
  return 0;
}
