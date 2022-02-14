
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int keepalive_ping; int keepalive_timeout; int ping_send_timeout; int ping_rec_timeout; scalar_t__ mode; int gc; void* ping_rec_timeout_action; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (struct options*,int ,int ) ;

void
FUNC_4(struct options *VAR_4)
{
    if (VAR_4->keepalive_ping || VAR_4->keepalive_timeout)
    {



        if (VAR_4->keepalive_ping <= 0 || VAR_4->keepalive_timeout <= 0)
        {
            FUNC_1(VAR_2, "--keepalive parameters must be > 0");
        }
        if (VAR_4->keepalive_ping * 2 > VAR_4->keepalive_timeout)
        {
            FUNC_1(VAR_2, "the second parameter to --keepalive (restart timeout=%d) must be at least twice the value of the first parameter (ping interval=%d).  A ratio of 1:5 or 1:6 would be even better.  Recommended setting is --keepalive 10 60.",
                VAR_4->keepalive_timeout,
                VAR_4->keepalive_ping);
        }
        if (VAR_4->ping_send_timeout || VAR_4->ping_rec_timeout)
        {
            FUNC_1(VAR_2, "--keepalive conflicts with --ping, --ping-exit, or --ping-restart.  If you use --keepalive, you don't need any of the other --ping directives.");
        }




        if (VAR_4->mode == VAR_0)
        {
            VAR_4->ping_rec_timeout_action = VAR_3;
            VAR_4->ping_send_timeout = VAR_4->keepalive_ping;
            VAR_4->ping_rec_timeout = VAR_4->keepalive_timeout;
        }
        else
        {
            FUNC_0(0);
        }
    }
}
