
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef int LSAPI_Request ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int *) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__,scalar_t__,int,int,int *) ;

__attribute__((used)) static int FUNC_5( LSAPI_Request * VAR_1, uid_t VAR_2 )
{

    if ( VAR_0 && VAR_2 )
    {
        uint32_t VAR_3;
        int VAR_4 = -1;
        VAR_4 = FUNC_1)(VAR_0, VAR_2, -1, -1, &VAR_3);
        if ( VAR_4 < 0 )
        {
            FUNC_2("enter LVE (%d) : ressult: %d !\n", VAR_2, VAR_4 );
            FUNC_0(VAR_1, "LSAPI: lve_enter() failure, reached resource limit.", ((void*)0) );
            FUNC_3( VAR_1 );
            return -1;
        }
    }


    return 0;
}
