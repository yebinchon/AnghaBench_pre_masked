
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reg_name { ____Placeholder_reg_name } reg_name ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {scalar_t__ Thread; } ;
typedef int * PETHREAD ;
typedef int KDSTATUS ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int *,int,unsigned short*) ;
 int * FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,unsigned short) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (int *,int,unsigned short*) ;

KDSTATUS
FUNC_9(void)
{
    enum reg_name VAR_5;
    void *VAR_6;
    unsigned short VAR_7;


    VAR_5 = (FUNC_5(VAR_4[1]) << 4) | FUNC_5(VAR_4[2]);

    if (((VAR_2 == 0) && (VAR_3 == 0)) ||
            FUNC_4(VAR_3) == FUNC_1((PETHREAD)(ULONG_PTR)VAR_1.Thread))
    {

        VAR_6 = FUNC_2(&VAR_0, VAR_5, &VAR_7);
    }
    else
    {
        PETHREAD VAR_8;

        VAR_8 = FUNC_3(VAR_2, VAR_3);

        if (VAR_8 == ((void*)0))
        {

            return FUNC_7("E03");
        }

        VAR_6 = FUNC_8(VAR_8, VAR_5, &VAR_7);
    }

    if (!VAR_6)
    {

        return FUNC_7("xxxxxxxx");
    }
    else
    {
        FUNC_0("KDDBG : Sending registers as memory.\n");
        return FUNC_6(VAR_6, VAR_7);
    }
}
