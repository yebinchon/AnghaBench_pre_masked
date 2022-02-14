
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct in_addr {int s_addr; } ;
struct TYPE_17__ {struct in_addr s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_8__ sin_addr; int sin_family; } ;
struct interface_info {TYPE_5__* client; int name; } ;
typedef int from ;
typedef int destination ;
struct TYPE_16__ {void* secs; } ;
struct TYPE_15__ {scalar_t__ NteContext; } ;
struct TYPE_11__ {int iabuf; } ;
struct TYPE_14__ {scalar_t__ first_sending; scalar_t__ state; int interval; int packet_length; TYPE_7__ packet; void* secs; TYPE_4__* active; TYPE_2__ destination; TYPE_1__* config; scalar_t__ medium; } ;
struct TYPE_12__ {int iabuf; } ;
struct TYPE_13__ {scalar_t__ expiry; scalar_t__ rebind; TYPE_3__ address; scalar_t__ medium; } ;
struct TYPE_10__ {int reboot_timeout; int initial_interval; int backoff_cutoff; } ;
typedef TYPE_6__* PDHCP_ADAPTER ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (struct interface_info*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 struct in_addr VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__,void (*) (void*),struct interface_info*) ;
 int FUNC_3 (void (*) (void*),struct interface_info*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_8__) ;
 int FUNC_6 (struct in_addr*,int ,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct interface_info*,TYPE_7__*,int ,struct in_addr,struct sockaddr_in*,int *) ;
 int FUNC_12 (struct interface_info*) ;
 int FUNC_13 (scalar_t__*) ;

void
FUNC_14(void *VAR_7)
{
 struct interface_info *VAR_8 = VAR_7;
 struct sockaddr_in VAR_9;
 struct in_addr VAR_10;
 int VAR_11;
        time_t VAR_12;

        FUNC_13(&VAR_12);


 VAR_11 = VAR_12 - VAR_8->client->first_sending;
 if ((VAR_8->client->state == VAR_5 ||
     VAR_8->client->state == VAR_6) &&
     VAR_11 > VAR_8->client->config->reboot_timeout) {
  VAR_8->client->state = VAR_4;
  FUNC_3(FUNC_14, VAR_8);
  FUNC_12(VAR_8);
  return;
 }



 if (VAR_8->client->state == VAR_5 &&
     !VAR_8->client->medium &&
     VAR_8->client->active->medium ) {




  VAR_8->client->medium = VAR_8->client->active->medium;
 }



 if (VAR_8->client->state != VAR_6 &&
     VAR_12 > VAR_8->client->active->expiry) {
            PDHCP_ADAPTER VAR_13 = FUNC_0( VAR_8 );





            if( VAR_13 )
            {
                FUNC_1( VAR_13->NteContext );
                VAR_13->NteContext = 0;
            }

            VAR_8->client->state = VAR_4;
            FUNC_12(VAR_8);
            return;
 }


 if (!VAR_8->client->interval)
  VAR_8->client->interval = VAR_8->client->config->initial_interval;
 else
  VAR_8->client->interval += ((FUNC_10() >> 2) %
      (2 * VAR_8->client->interval));


 if (VAR_8->client->interval >
     VAR_8->client->config->backoff_cutoff)
  VAR_8->client->interval =
      ((VAR_8->client->config->backoff_cutoff / 2) +
      ((FUNC_10() >> 2) % VAR_8->client->interval));



 if (VAR_8->client->state != VAR_6 &&
     VAR_12 + VAR_8->client->interval >
     VAR_8->client->active->expiry)
  VAR_8->client->interval =
      VAR_8->client->active->expiry - VAR_12 + 1;



 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_8->client->state == VAR_6 ||
     VAR_8->client->state == VAR_5 ||
     VAR_12 > VAR_8->client->active->rebind)
  VAR_9.sin_addr.s_addr = VAR_2;
 else
  FUNC_6(&VAR_9.sin_addr.s_addr,
      VAR_8->client->destination.iabuf,
      sizeof(VAR_9.sin_addr.s_addr));
 VAR_9.sin_port = FUNC_4(VAR_3);
 VAR_9.sin_family = VAR_0;


 if (VAR_8->client->state != VAR_6)
  FUNC_6(&VAR_10, VAR_8->client->active->address.iabuf,
      sizeof(VAR_10));
 else
  VAR_10.s_addr = VAR_1;


 if (VAR_8->client->state == VAR_6)
  VAR_8->client->packet.secs = VAR_8->client->secs;
 else {
  if (VAR_11 < 65536)
   VAR_8->client->packet.secs = FUNC_4(VAR_11);
  else
   VAR_8->client->packet.secs = FUNC_4(65535);
 }

 FUNC_8("DHCPREQUEST on %s to %s port %d", VAR_8->name,
     FUNC_5(VAR_9.sin_addr), FUNC_9(VAR_9.sin_port));


 (void) FUNC_11(VAR_8, &VAR_8->client->packet, VAR_8->client->packet_length,
     VAR_10, &VAR_9, ((void*)0));

 FUNC_2(VAR_12 + VAR_8->client->interval, FUNC_14, VAR_8);
}
