
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int W32PF_flags; int peProcess; } ;
typedef TYPE_1__* PPROCESSINFO ;
typedef int HHOOK ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;

BOOL
FUNC_4(int VAR_7, HHOOK VAR_8, BOOL VAR_9)
{
   PPROCESSINFO VAR_10;
   BOOL VAR_11;

   VAR_10 = FUNC_0();

   FUNC_2("IntLoadHookModule. Client PID: %p\n", FUNC_1(VAR_10->peProcess));


    if(VAR_7 == VAR_4)
    {
        if(!VAR_9 && !(VAR_10->W32PF_flags & VAR_3))
        {




            VAR_10->W32PF_flags |= VAR_3;


            VAR_11 = FUNC_3(&VAR_6, &VAR_5, VAR_9, VAR_2);
            FUNC_2("co_IntClientLoadLibrary returned %d\n", VAR_11 );
            if (!VAR_11)
            {

                VAR_10->W32PF_flags &= ~VAR_3;
            }
            return VAR_11;
        }
        else if(VAR_9 && (VAR_10->W32PF_flags & VAR_3))
        {

            VAR_11 = FUNC_3(((void*)0), ((void*)0), VAR_9, VAR_2);
            if (VAR_11)
            {
                VAR_10->W32PF_flags &= ~VAR_3;
            }
            return VAR_11;
        }

        return VAR_2;
    }

    VAR_1;

    return VAR_0;
}
