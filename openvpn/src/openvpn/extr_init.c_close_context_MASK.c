
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int signal_received; scalar_t__ source; char* signal_text; struct context* sig; } ;


 int FUNC_0 (struct context*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct context*) ;
 int FUNC_2 (struct context*) ;

void
FUNC_3(struct context *VAR_7, int VAR_8, unsigned int VAR_9)
{
    FUNC_0(VAR_7);
    FUNC_0(VAR_7->sig);

    if (VAR_8 >= 0)
    {
        VAR_7->sig->signal_received = VAR_8;
    }

    if (VAR_7->sig->signal_received == VAR_5)
    {
        if ((VAR_9 & VAR_3)
            || (VAR_7->sig->source == VAR_6 && (VAR_9 & VAR_1)))
        {
            VAR_7->sig->signal_received = VAR_4;
            VAR_7->sig->signal_text = "close_context usr1 to hup";
        }
    }

    if (!(VAR_9 & VAR_2))
    {
        FUNC_1(VAR_7);
    }

    if (VAR_9 & VAR_0)
    {
        FUNC_2(VAR_7);
    }
}
