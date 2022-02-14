
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ proto; scalar_t__ fragment; } ;
struct options {scalar_t__ up_delay; TYPE_2__ ce; int comp; scalar_t__ mlock; scalar_t__ resolve_in_advance; } ;
struct env_set {int dummy; } ;
struct TYPE_6__ {int did_open_tun; int frame; int frame_initial; int comp_context; int fragment; int occ_op; int gc; } ;
struct context {scalar_t__ mode; TYPE_1__* sig; scalar_t__ first_time; TYPE_3__ c2; struct options options; } ;
struct TYPE_4__ {char* signal_text; int source; scalar_t__ signal_received; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct context*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (struct options const*) ;
 int FUNC_2 (struct options*) ;
 int VAR_17 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct context*,int,unsigned int const) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct context*) ;
 int FUNC_8 (struct context*,int) ;
 int FUNC_9 (struct context*,struct env_set const*) ;
 int FUNC_10 (struct context*) ;
 int FUNC_11 (struct context*,unsigned int) ;
 int FUNC_12 (struct context*) ;
 int FUNC_13 (struct context*) ;
 int FUNC_14 (struct context*) ;
 int FUNC_15 (struct context*) ;
 int FUNC_16 (struct context*) ;
 int FUNC_17 (struct context*,int) ;
 int FUNC_18 (struct context*) ;
 int FUNC_19 (struct context*,int) ;
 int FUNC_20 (struct context*) ;
 int FUNC_21 (struct context*) ;
 int FUNC_22 (struct context*) ;
 int FUNC_23 (struct context*) ;
 int FUNC_24 (struct context*) ;
 int FUNC_25 (struct context*) ;
 int FUNC_26 (struct context*) ;
 int FUNC_27 (struct context*) ;
 int FUNC_28 (struct context*) ;
 int FUNC_29 (struct context*) ;
 int FUNC_30 (struct context*) ;
 int FUNC_31 (struct context*,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *,struct options*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (struct context*) ;
 int FUNC_36 (struct context*) ;
 int FUNC_37 (struct context*) ;
 int FUNC_38 (struct context*) ;
 int FUNC_39 (struct context*,int ) ;
 int FUNC_40 (struct context*) ;
 int FUNC_41 () ;
 int FUNC_42 (struct context*,int,int ) ;
 int FUNC_43 (struct context*) ;
 int FUNC_44 (int) ;
 int FUNC_45 (int ) ;

void
FUNC_46(struct context *VAR_18, const struct env_set *VAR_19, const unsigned int VAR_20)
{
    const struct options *VAR_21 = &VAR_18->options;
    const bool VAR_22 = (VAR_18->mode == VAR_4 || VAR_18->mode == VAR_5);
    int VAR_23 = VAR_9;


    FUNC_34(&VAR_18->c2.gc);


    if (VAR_19)
    {
        FUNC_9(VAR_18, VAR_19);
    }


    VAR_18->sig->signal_received = 0;
    VAR_18->sig->signal_text = ((void*)0);
    VAR_18->sig->source = VAR_17;

    if (VAR_18->mode == VAR_6)
    {
        FUNC_35(VAR_18);
    }


    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7)
    {
        FUNC_30(VAR_18);
        if (FUNC_0(VAR_18))
        {
            goto sig;
        }
    }

    if (VAR_18->options.resolve_in_advance)
    {
        FUNC_26(VAR_18);
        if (FUNC_0(VAR_18))
        {
            goto sig;
        }
    }


    FUNC_40(VAR_18);




    if (VAR_18->options.ce.proto == VAR_16)
    {
        if (VAR_18->mode == VAR_7)
        {
            VAR_23 = VAR_11;
        }
        else if (VAR_18->mode == VAR_4)
        {
            VAR_23 = VAR_10;
        }
    }


    if (VAR_18->first_time && VAR_21->mlock)
    {
        FUNC_44(1);
    }
    FUNC_39(VAR_18, VAR_8);


    if (VAR_18->mode == VAR_6)
    {
        FUNC_45(VAR_15);
    }


    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7)
    {
        FUNC_25(VAR_18);
    }
    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7)
    {
        FUNC_28(VAR_18);
    }


    FUNC_29(VAR_18);


    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7)
    {
        FUNC_23(VAR_18);
    }


    if (VAR_18->mode == VAR_7)
    {
        FUNC_22(VAR_18);
    }
    if (VAR_18->mode == VAR_6)
    {
        FUNC_8(VAR_18, FUNC_2(&VAR_18->options));
    }
    else if (VAR_18->mode == VAR_4)
    {
        FUNC_8(VAR_18, 0);
    }


    FUNC_37(VAR_18);


    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7 || VAR_18->mode == VAR_4)
    {
        FUNC_21(VAR_18);
    }
    {
        unsigned int VAR_24 = 0;
        if (VAR_18->mode == VAR_7)
        {
            VAR_24 = VAR_1;
        }
        else if (VAR_18->mode == VAR_6)
        {
            VAR_24 = VAR_3 | VAR_2;
        }
        else if (VAR_22)
        {
            VAR_24 = VAR_2;
        }
        FUNC_11(VAR_18, VAR_24);
        if (FUNC_0(VAR_18) && !VAR_22)
        {
            goto sig;
        }
    }
    FUNC_14(VAR_18);


    FUNC_15(VAR_18);


    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_4)
    {
        FUNC_10(VAR_18);
    }
    FUNC_33(&VAR_18->c2.frame, &VAR_18->options);


    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7 || VAR_18->mode == VAR_4)
    {
        FUNC_17(VAR_18, VAR_23);
    }



    if (!(VAR_21->up_delay || FUNC_1(VAR_21)) && (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7))
    {
        VAR_18->c2.did_open_tun = FUNC_24(VAR_18);
    }

    VAR_18->c2.frame_initial = VAR_18->c2.frame;


    FUNC_27(VAR_18);
    if (VAR_18->mode == VAR_6)
    {
        FUNC_20(VAR_18);
    }


    FUNC_12(VAR_18);
    FUNC_16(VAR_18);


    if (VAR_18->mode == VAR_6 || VAR_18->mode == VAR_7 || VAR_18->mode == VAR_4)
    {
        FUNC_18(VAR_18);
    }





    FUNC_31(VAR_18, VAR_18->c2.did_open_tun);


    if (VAR_18->mode == VAR_6 || VAR_22)
    {
        FUNC_19(VAR_18, 0);
    }
    if (FUNC_0(VAR_18))
    {
        goto sig;
    }

    return;

sig:
    if (!VAR_18->sig->signal_text)
    {
        VAR_18->sig->signal_text = "init_instance";
    }
    FUNC_4(VAR_18, -1, VAR_20);
    return;
}
