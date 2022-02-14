
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32b ;
struct TYPE_8__ {int siaddr; int lease; int mask; int router; int ip; } ;
struct TYPE_6__ {int lease; int siaddr; int mask; int router; int ip; } ;
struct TYPE_7__ {scalar_t__ xid; TYPE_1__ data; int ltime; int available; struct TYPE_7__* next; } ;
typedef TYPE_2__ DHCPLIST ;
typedef TYPE_3__ DHCPLEASE ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_0( DHCPLEASE *VAR_2, u32b VAR_3 )
{
  int VAR_4 = -1;
  DHCPLIST *VAR_5;

  for( VAR_5 = VAR_1; VAR_5; VAR_5=VAR_5->next )
    if( VAR_5->xid == VAR_3 )
      {
 VAR_2->ip = VAR_5->data.ip;
 VAR_2->router = VAR_5->data.router;
 VAR_2->mask = VAR_5->data.mask;
 VAR_2->lease = VAR_5->data.lease;
 VAR_2->siaddr = VAR_5->data.siaddr;
 VAR_5->available = VAR_0;
 VAR_5->ltime = VAR_5->data.lease;
 VAR_4 = 0;
 return VAR_4;
      }
  return VAR_4;
}
