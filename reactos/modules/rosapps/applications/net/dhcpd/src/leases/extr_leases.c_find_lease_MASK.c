
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8b ;
typedef void* u32b ;
struct TYPE_9__ {int siaddr; int lease; int mask; int router; int ip; } ;
struct TYPE_7__ {int siaddr; int lease; int mask; int router; int ip; } ;
struct TYPE_8__ {scalar_t__ type; int available; int chaddr; void* ltime; void* xid; TYPE_1__ data; struct TYPE_8__* next; } ;
typedef TYPE_2__ DHCPLIST ;
typedef TYPE_3__ DHCPLEASE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*,void*,int *) ;
 int VAR_6 ;

int FUNC_4( DHCPLEASE *VAR_7, u32b VAR_8, u8b VAR_9[] )
{
  int VAR_10 = -2;
  DHCPLIST *VAR_11;

  if( !VAR_7 )
    return -1;

  for( VAR_11 = VAR_5; VAR_11; VAR_11=VAR_11->next )
    if( !FUNC_1( VAR_11->chaddr, VAR_9 ) )
      FUNC_3( VAR_7, VAR_8, VAR_9);

  for( VAR_11 = VAR_5; VAR_11; VAR_11=VAR_11->next )
    if( ( !FUNC_1( VAR_11->chaddr, VAR_9 )) && ( VAR_11->type == VAR_4 ))
      {
 VAR_7->ip = VAR_11->data.ip;
 VAR_7->router = VAR_11->data.router;
 VAR_7->mask = VAR_11->data.mask;
 VAR_7->lease = VAR_11->data.lease;
 VAR_7->siaddr = VAR_11->data.siaddr;
 FUNC_0( VAR_6, "Assigning Static IP! \n");
 VAR_11->available = VAR_3;
 VAR_11->xid = VAR_8;
 VAR_11->ltime = VAR_2;
 FUNC_2( VAR_11->chaddr, VAR_9);
 VAR_10 = 0;
 return VAR_10;
      }
    else if( ( VAR_11->available & VAR_1 ) && ( VAR_11->type == VAR_0 ))
      {
 VAR_7->ip = VAR_11->data.ip;
 VAR_7->router = VAR_11->data.router;
 VAR_7->mask = VAR_11->data.mask;
 VAR_7->lease = VAR_11->data.lease;
 VAR_7->siaddr = VAR_11->data.siaddr;
 FUNC_0( VAR_6, "Assigning Dynamic IP! \n");
 VAR_11->available = VAR_3;
 VAR_11->xid = VAR_8;
 VAR_11->ltime = VAR_2;
 FUNC_2( VAR_11->chaddr, VAR_9);
 VAR_10 = 0;
 return VAR_10;
      }
  return VAR_10;
}
