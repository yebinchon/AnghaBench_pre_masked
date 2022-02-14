
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct interface_info {TYPE_1__* client; } ;
struct client_lease {scalar_t__ renewal; int address; int medium; } ;
struct TYPE_2__ {int state; struct client_lease* active; struct client_lease* new; int medium; } ;
typedef scalar_t__ PDHCP_ADAPTER ;


 scalar_t__ FUNC_0 (struct interface_info*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,struct interface_info*) ;
 int FUNC_2 (struct client_lease*) ;
 int FUNC_3 (char*,int ,long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,struct client_lease*) ;
 int FUNC_6 (scalar_t__,struct client_lease*) ;
 int FUNC_7 (scalar_t__,struct client_lease*) ;
 int VAR_1 ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (char*,struct interface_info*) ;

void
FUNC_10(struct interface_info *VAR_2)
{
    PDHCP_ADAPTER VAR_3;
    struct client_lease *VAR_4 = VAR_2->client->new;
    time_t VAR_5;

    FUNC_8(&VAR_5);


    VAR_2->client->new->medium = VAR_2->client->medium;


    if (VAR_2->client->active)
        FUNC_2(VAR_2->client->active);
    VAR_2->client->active = VAR_2->client->new;
    VAR_2->client->new = ((void*)0);





    if( VAR_2->client->active->renewal - VAR_5 )
        FUNC_1(VAR_2->client->active->renewal, VAR_1, VAR_2);

    FUNC_3("bound to %s -- renewal in %ld seconds.",
         FUNC_4(VAR_2->client->active->address),
         (long int)(VAR_2->client->active->renewal - VAR_5));

    VAR_2->client->state = VAR_0;

    VAR_3 = FUNC_0( VAR_2 );

    if( VAR_3 ) FUNC_7( VAR_3, VAR_4 );
    else {
        FUNC_9("Could not find adapter for info %p\n", VAR_2);
        return;
    }
    FUNC_6( VAR_3, VAR_4 );
    FUNC_5( VAR_3, VAR_4 );
}
