
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*,int ) ;
 int * VAR_2 ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(int VAR_4, char **VAR_5)
{
    HANDLE VAR_6;

    if (VAR_4 == 2)
    {
        if (FUNC_4(VAR_5[1],"-dump")==0)
        {
            VAR_1 = VAR_0;
        }

        if ( (FUNC_4(VAR_5[1],"-help")==0) ||
             (FUNC_4(VAR_5[1],"-?")==0) ||
             (FUNC_4(VAR_5[1],"/help")==0) ||
             (FUNC_4(VAR_5[1],"/?")==0) )
        {
            FUNC_3("the %s support follow param \n",VAR_5[0]);
            FUNC_3("-dump              : It dump all data it resvie to screen \n");
            FUNC_3("-dumpfile filename : It dump all data it resvie to file \n");
            FUNC_3("\nrember u can only use one of them at time \n");
            FUNC_0(1);
        }
    }

    if (VAR_4 == 3)
    {
        if (FUNC_4(VAR_5[1],"-dumpfile")==0)
        {

            if ( (VAR_2 = FUNC_2(VAR_5[2], "wb", VAR_3)) != ((void*)0))
            {
                VAR_1 = VAR_0;
            }
        }
    }

    VAR_6 = FUNC_6();

    FUNC_9(VAR_6);

    FUNC_8(VAR_6);

    FUNC_10(VAR_6);

    FUNC_5(VAR_6);

    FUNC_7(VAR_6);

    if (VAR_2 != ((void*)0))
    {
        FUNC_1(VAR_2);
    }
    return 0;
}
