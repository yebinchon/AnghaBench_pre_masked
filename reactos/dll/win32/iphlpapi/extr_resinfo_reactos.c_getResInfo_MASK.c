
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int NumServers; int * pCurrent; } ;
struct TYPE_6__ {int riCount; int * DnsList; } ;
typedef TYPE_1__* PIPHLP_RES_INFO ;
typedef TYPE_2__ NAME_SERVER_LIST_PRIVATE ;
typedef scalar_t__ LSTATUS ;
typedef int IP_ADDR_STRING ;
typedef int IPHLP_RES_INFO ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;

PIPHLP_RES_INFO
FUNC_5()
{
    NAME_SERVER_LIST_PRIVATE VAR_2;
    PIPHLP_RES_INFO VAR_3;
    IP_ADDR_STRING * VAR_4 = ((void*)0);
    LSTATUS VAR_5;

    VAR_2.NumServers = 0;


    VAR_5 = FUNC_0(&VAR_2);

    if (VAR_5 != VAR_0)
    {

        return ((void*)0);
    }


    if (VAR_2.NumServers)
    {

        VAR_4 = FUNC_2(FUNC_1(), VAR_1, VAR_2.NumServers * sizeof(IP_ADDR_STRING));

        if (!VAR_4)
        {

            return ((void*)0);
        }
    }


    VAR_3 = (PIPHLP_RES_INFO)FUNC_2(FUNC_1(), VAR_1, sizeof(IPHLP_RES_INFO));

    if(!VAR_3)
    {

        if (VAR_4)
        {

            FUNC_3( FUNC_1(), 0, VAR_4);
        }
        return ((void*)0);
    }


    if (VAR_2.NumServers)
    {

        VAR_2.NumServers = 0;
        VAR_2.pCurrent = VAR_4;


        FUNC_4( &VAR_2 );


        VAR_3->DnsList = VAR_4;
        VAR_3->riCount = VAR_2.NumServers;
    }


    return VAR_3;
}
