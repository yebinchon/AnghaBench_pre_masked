
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int management_flags; int mode; int writepid; } ;
struct context {int first_time; scalar_t__ signal_received; int net_ctx; int gc; TYPE_1__ options; int es; struct context* sig; int did_we_daemonize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct context) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct context*) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct context*) ;
 int FUNC_6 (struct context*) ;
 int FUNC_7 (struct context*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (struct context*) ;
 int FUNC_20 (struct context*) ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 (struct context*,int ) ;
 int FUNC_23 (int ,char*,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct context*,int *) ;
 int FUNC_26 (struct context*) ;
 int FUNC_27 (struct context*,int,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*,int,char**,int ,int ,int *,int ) ;
 int FUNC_31 (TYPE_1__*) ;
 int FUNC_32 () ;
 int FUNC_33 (TYPE_1__*) ;
 scalar_t__ FUNC_34 (TYPE_1__*) ;
 int FUNC_35 (struct context*,int *,int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ,TYPE_1__*) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (TYPE_1__*) ;
 int FUNC_40 (int ) ;
 struct context VAR_10 ;
 int FUNC_41 (struct context*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_42 (struct context*) ;
 int FUNC_43 (struct context*) ;
 int FUNC_44 (TYPE_1__*) ;
 int FUNC_45 () ;
 int FUNC_46 (int ) ;

__attribute__((used)) static
int
FUNC_47(int VAR_13, char *VAR_14[])
{
    struct context VAR_15;
    FUNC_1(VAR_15);



    VAR_15.first_time = 1;


    if (FUNC_21())
    {




        do
        {

            FUNC_32();


            FUNC_5(&VAR_15);


            FUNC_1(VAR_10);
            VAR_15.sig = &VAR_10;


            FUNC_14(&VAR_15.gc);


            VAR_15.es = FUNC_11(((void*)0));
            FUNC_17(&VAR_15.options, 1);


            FUNC_30(&VAR_15.options, VAR_13, VAR_14, VAR_4, VAR_7, ((void*)0), VAR_15.es);
            FUNC_25(&VAR_15, &VAR_15.net_ctx);


            FUNC_22(&VAR_15, VAR_1);


            FUNC_18(&VAR_15.options);


            if (FUNC_34(&VAR_15.options))
            {
                break;
            }


            if (FUNC_8(&VAR_15.options))
            {
                break;
            }


            if (FUNC_9(&VAR_15.options, &VAR_15.net_ctx))
            {
                break;
            }


            FUNC_29(&VAR_15.options);


            FUNC_39(&VAR_15.options);


            FUNC_23(VAR_3, "%s", VAR_12);



            FUNC_38(VAR_3);


            FUNC_33(&VAR_15.options);


            if (FUNC_10(&VAR_15.options))
            {
                break;
            }






            FUNC_20(&VAR_15);


            if (VAR_15.first_time)
            {
                VAR_15.did_we_daemonize = FUNC_31(&VAR_15.options);
                FUNC_46(VAR_15.options.writepid);
            }
            FUNC_37(VAR_15.es, &VAR_15.options);


            FUNC_7(&VAR_15);

            do
            {

                switch (VAR_15.options.mode)
                {
                    case 129:
                        FUNC_42(&VAR_15);
                        break;







                    default:
                        FUNC_0(0);
                }


                VAR_15.first_time = 0;


                if (FUNC_2(&VAR_15))
                {
                    FUNC_35(VAR_15.sig, ((void*)0), VAR_3);
                }


                FUNC_41(VAR_15.sig);
            }
            while (VAR_15.sig->signal_received == VAR_9);

            FUNC_12(VAR_15.es);
            FUNC_44(&VAR_15.options);
            FUNC_15(&VAR_15.gc);
            FUNC_24(&VAR_15.net_ctx);
        }
        while (VAR_15.sig->signal_received == VAR_8);
    }

    FUNC_6(&VAR_15);







    FUNC_45();

    FUNC_28(VAR_5);
    return 0;
}
