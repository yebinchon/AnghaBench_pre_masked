
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct LSAPI_key_value_pair {char* pKey; int valLen; scalar_t__ pValue; } ;
struct TYPE_8__ {int m_fdListen; TYPE_1__* m_pHeader; struct LSAPI_key_value_pair* m_pSpecialEnvList; } ;
struct TYPE_7__ {int m_cntSpecialEnv; } ;
typedef TYPE_2__ LSAPI_Request ;


 char* FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int,int,char const*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7( LSAPI_Request * VAR_3 )
{
    int VAR_4 = VAR_1;
    int VAR_5 = VAR_0;
    const char *VAR_6;
    const char *VAR_7 = ((void*)0);
    struct LSAPI_key_value_pair * VAR_8;
    struct LSAPI_key_value_pair * VAR_9;
    int VAR_10;
    if ( VAR_2 )
        return 0;





    VAR_10 = VAR_3->m_pHeader->m_cntSpecialEnv - 1;
    if ( VAR_10 >= 0 )
    {
        VAR_8 = VAR_3->m_pSpecialEnvList + VAR_10;
        if (( *VAR_8->pKey == '\000' )&&
            ( FUNC_6( VAR_8->pKey+1, "SUEXEC_AUTH" ) == 0 ))
        {
            --VAR_3->m_pHeader->m_cntSpecialEnv;
            VAR_9 = VAR_8--;
            if (( *VAR_8->pKey == '\000' )&&
                ( FUNC_6( VAR_8->pKey+1, "SUEXEC_UGID" ) == 0 ))
            {
                --VAR_3->m_pHeader->m_cntSpecialEnv;
                VAR_4 = *(uint32_t *)VAR_8->pValue;
                VAR_5 = *(((uint32_t *)VAR_8->pValue) + 1 );

            }
            else
            {
                FUNC_2("LSAPI: missing SUEXEC_UGID env, use default user!\n" );
                VAR_8 = ((void*)0);
            }
            if ( VAR_8&& FUNC_4( VAR_3, VAR_9->pValue, VAR_9->valLen, VAR_8->pValue, VAR_8->valLen ) == 0 )
            {


            }
            else
            {

                FUNC_2("LSAPI: SUEXEC_AUTH authentication failed, use default user!\n" );
                VAR_4 = 0;
            }
        }
        else
        {

        }
    }


    if ( !VAR_4 )
    {
        VAR_4 = VAR_1;
        VAR_5 = VAR_0;
    }


    if ( FUNC_5( VAR_3, VAR_4, VAR_5, VAR_7 ) == -1 )
    {
        return -1;
    }

    VAR_2 = VAR_4;

    if ( VAR_3->m_fdListen != -1 )
    {
        FUNC_1( VAR_3->m_fdListen );
        VAR_3->m_fdListen = -1;
    }

    VAR_6 = FUNC_0( VAR_3, "LSAPI_STDERR_LOG");
    if (VAR_6)
        FUNC_3(VAR_6);

    return 0;

}
