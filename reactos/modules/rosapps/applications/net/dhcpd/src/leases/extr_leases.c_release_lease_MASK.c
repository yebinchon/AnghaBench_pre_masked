
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8b ;
typedef int u32b ;
struct TYPE_3__ {int* chaddr; scalar_t__ xid; int available; struct TYPE_3__* next; } ;
typedef TYPE_1__ DHCPLIST ;
typedef int DHCPLEASE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int*,scalar_t__*) ;
 int VAR_2 ;

int FUNC_2( DHCPLEASE *VAR_3, u32b VAR_4, u8b VAR_5[16] )
{
  int VAR_6 = -1, VAR_7;
  DHCPLIST *VAR_8;
  u8b VAR_9[16];

  for( VAR_7 = 0; VAR_7 < 16; VAR_7++ )
    VAR_9[VAR_7] = 0;

  if( !VAR_3 )
    return -1;

  for( VAR_8 = VAR_1; VAR_8; VAR_8=VAR_8->next )
    if( !FUNC_1( VAR_8->chaddr, VAR_5 ) )
      {

 VAR_6 = 0;
 FUNC_0( VAR_2, "Deleting %X::%X::%X::%X::%X::%X \n", VAR_8->chaddr[0], VAR_8->chaddr[1], VAR_8->chaddr[2], VAR_8->chaddr[3], VAR_8->chaddr[4], VAR_8->chaddr[5] );
 VAR_8->available = VAR_0;
 VAR_8->xid = 0;

      } else {

 VAR_6 = -1;
      }

  return VAR_6;
}
