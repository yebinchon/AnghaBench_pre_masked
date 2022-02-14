
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CommandLineOptions {scalar_t__ shutdown_delay; scalar_t__ restart; int reason; int force; int message; int * remote_system; scalar_t__ shutdown; scalar_t__ logoff; scalar_t__ show_gui; scalar_t__ hibernate; scalar_t__ abort; } ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *,int ,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_10 (struct CommandLineOptions*,int,int **) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct CommandLineOptions) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_13(int VAR_20, WCHAR *VAR_21[])
{
    DWORD VAR_22 = VAR_0;
    struct CommandLineOptions VAR_23;


    FUNC_1();

    if (VAR_20 == 1)
    {
        FUNC_3(VAR_18, VAR_13);
        return VAR_3;
    }

    VAR_22 = FUNC_10(&VAR_23, VAR_20, VAR_21);
    if (VAR_22 != VAR_0)
    {
        FUNC_4(VAR_22);
        return VAR_2;
    }


    if (VAR_23.abort)
    {


        if (VAR_23.remote_system == ((void*)0))
            FUNC_5(VAR_16, VAR_19);
        else
            FUNC_5(VAR_15, VAR_19);


        if (!FUNC_0(VAR_23.remote_system))
        {
            FUNC_3(VAR_17, VAR_5);
            FUNC_4(FUNC_7());
            return VAR_2;
        }
        else
        {
            return VAR_3;
        }
    }






    if (VAR_23.hibernate)
    {
        if (FUNC_9())
        {
            FUNC_5(VAR_16, VAR_19);


            if (VAR_23.remote_system != ((void*)0))
            {
                return VAR_2;
            }

            if (!FUNC_11(VAR_19, VAR_4, VAR_4))
            {
                FUNC_3(VAR_17, VAR_6);
                FUNC_4(FUNC_7());
                return VAR_2;
            }
            else
            {
                FUNC_3(VAR_18, VAR_7);
                return VAR_3;
            }
        }
        else
        {
            return VAR_2;
        }
    }


    if (VAR_23.shutdown && VAR_23.restart)
    {
        FUNC_3(VAR_17, VAR_11);
        return VAR_2;
    }


    if (VAR_23.shutdown_delay > VAR_14)
    {
        FUNC_2(VAR_17, VAR_12, VAR_23.shutdown_delay);
        return VAR_2;
    }


    if (VAR_23.show_gui)
    {
        if (FUNC_12(VAR_23))
            return VAR_3;
        else
            return VAR_2;
    }

    if (VAR_23.logoff && (VAR_23.remote_system == ((void*)0)))
    {






        if (!VAR_23.shutdown && !VAR_23.restart)
        {
            FUNC_5(VAR_16, VAR_19);

            if (FUNC_6(VAR_1, VAR_23.reason))
            {
                return VAR_3;
            }
            else
            {
                FUNC_3(VAR_17, VAR_8);
                FUNC_4(FUNC_7());
                return VAR_2;
            }
        }
    }





    if (VAR_23.shutdown || VAR_23.restart)
    {




        if (VAR_23.remote_system == ((void*)0))
        {
            FUNC_5(VAR_16, VAR_19);
        }
        else
        {


            return VAR_3;
        }


        if (!FUNC_8(VAR_23.remote_system,
                                       VAR_23.message,
                                       VAR_23.shutdown_delay,
                                       VAR_23.force,
                                       VAR_23.restart,
                                       VAR_23.reason))
        {




            if (VAR_23.restart)
                FUNC_3(VAR_17, VAR_9);
            else
                FUNC_3(VAR_17, VAR_10);

            FUNC_4(FUNC_7());
            return VAR_2;
        }
        else
        {
            return VAR_3;
        }
    }

    return VAR_3;
}
