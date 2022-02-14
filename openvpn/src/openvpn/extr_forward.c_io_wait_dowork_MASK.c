
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct event_set_return {int rwflags; scalar_t__ arg; } ;
struct TYPE_8__ {int event_set_status; int timeval; int event_set; int link_socket; int inotify_fd; int shaper; } ;
struct TYPE_6__ {scalar_t__ mode; scalar_t__ shaper; } ;
struct TYPE_5__ {int tuntap; } ;
struct context {TYPE_4__ c2; TYPE_3__* sig; TYPE_2__ options; TYPE_1__ c1; } ;
struct TYPE_7__ {int signal_received; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int const VAR_5 ;
 unsigned int const VAR_6 ;
 unsigned int const VAR_7 ;
 unsigned int const VAR_8 ;
 unsigned int const VAR_9 ;
 unsigned int const VAR_10 ;
 unsigned int const VAR_11 ;
 unsigned int const VAR_12 ;
 unsigned int const VAR_13 ;
 unsigned int const VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct event_set_return*) ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct context*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int *,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,unsigned int,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,struct event_set_return*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (scalar_t__,int ,void*,int *) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct context*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,unsigned int,void*,int *) ;
 int FUNC_16 (int ,int ,unsigned int,void*,int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,void*) ;

void
FUNC_19(struct context *VAR_18, const unsigned int VAR_19)
{
    unsigned int VAR_20 = 0;
    unsigned int VAR_21 = 0;
    struct event_set_return VAR_22[4];


    static int VAR_23 = 0;
    static int VAR_24 = 2;
    static int VAR_25 = 4;
    FUNC_6(VAR_18->c2.event_set);





    if (VAR_19 & VAR_14)
    {
        FUNC_18(VAR_18->c2.event_set, (void *)&VAR_25);
    }






    if (VAR_19 & VAR_12)
    {
        if (VAR_19 & VAR_11)
        {
            VAR_20 |= VAR_4;

        }
        else
        {
            VAR_20 |= VAR_4;
        }
    }
    else if (!((VAR_19 & VAR_6) && FUNC_1(VAR_18)))
    {
        if (VAR_19 & VAR_9)
        {
            VAR_21 |= VAR_3;
        }
    }





    if (VAR_19 & VAR_13)
    {
        VAR_21 |= VAR_4;
    }
    else
    {
        if (VAR_19 & VAR_8)
        {
            VAR_20 |= VAR_3;
        }
    }




    if (VAR_19 & VAR_7)
    {
        VAR_20 |= VAR_4;
    }




    if (VAR_19 & VAR_10)
    {
        VAR_21 |= VAR_3;
    }




    FUNC_15(VAR_18->c2.link_socket, VAR_18->c2.event_set, VAR_20, (void *)&VAR_23, ((void*)0));
    FUNC_16(VAR_18->c1.tuntap, VAR_18->c2.event_set, VAR_21, (void *)&VAR_24, ((void*)0));
    VAR_18->c2.event_set_status = VAR_1;

    if (!VAR_18->sig->signal_received)
    {
        if (!(VAR_19 & VAR_5) || !FUNC_14(VAR_18->c2.link_socket))
        {
            int VAR_26;
            VAR_26 = FUNC_7(VAR_18->c2.event_set, &VAR_18->c2.timeval, VAR_22, FUNC_0(VAR_22));

            FUNC_3(VAR_26, "event_wait", ((void*)0), ((void*)0));

            if (VAR_26 > 0)
            {
                int VAR_27;
                VAR_18->c2.event_set_status = 0;
                for (VAR_27 = 0; VAR_27 < VAR_26; ++VAR_27)
                {
                    const struct event_set_return *VAR_28 = &VAR_22[VAR_27];
                    VAR_18->c2.event_set_status |= ((VAR_28->rwflags & 3) << *((int *)VAR_28->arg));
                }
            }
            else if (VAR_26 == 0)
            {
                VAR_18->c2.event_set_status = VAR_2;
            }
        }
        else
        {
            VAR_18->c2.event_set_status = VAR_16;
        }
    }


    FUNC_17();


    if (VAR_18->c2.event_set_status & VAR_1)
    {
        FUNC_8(&VAR_18->sig->signal_received);
    }

    FUNC_4(VAR_0, "I/O WAIT status=0x%04x", VAR_18->c2.event_set_status);
}
