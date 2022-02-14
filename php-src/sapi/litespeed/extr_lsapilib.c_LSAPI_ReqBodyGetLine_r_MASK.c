
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int m_fd; scalar_t__ m_bufRead; scalar_t__ m_bufProcessed; char* m_pReqBuf; scalar_t__ m_reqBodyRead; } ;
typedef TYPE_1__ LSAPI_Request ;


 char* FUNC_0 (char*,char,scalar_t__) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int FUNC_3( LSAPI_Request * VAR_0, char * VAR_1, size_t VAR_2, int *VAR_3 )
{
    ssize_t VAR_4;
    ssize_t VAR_5;
    char * VAR_6 = VAR_1 + VAR_2 - 1;
    char * VAR_7 = VAR_1;
    char * VAR_8;
    char * VAR_9;
    if (!VAR_0 || VAR_0->m_fd == -1 || !VAR_1 || !VAR_3)
        return -1;
    *VAR_3 = 0;
    while( (VAR_5 = VAR_6 - VAR_7 ) > 0 )
    {

        VAR_4 = VAR_0->m_bufRead - VAR_0->m_bufProcessed;
        if ( VAR_4 <= 0 )
        {
            if ( (VAR_4 = FUNC_2( VAR_0 )) <= 0 )
            {
                *VAR_3 = 1;
                break;
            }
        }
        if ( VAR_4 > VAR_5 )
            VAR_4 = VAR_5;
        VAR_8 = VAR_0->m_pReqBuf + VAR_0->m_bufProcessed;
        VAR_9 = FUNC_0( VAR_8, '\n', VAR_4 );
        if ( VAR_9 )
            VAR_4 = VAR_9 - VAR_8 + 1;
        FUNC_1( VAR_7, VAR_8, VAR_4 );
        VAR_7 += VAR_4;
        VAR_0->m_bufProcessed += VAR_4;

        VAR_0->m_reqBodyRead += VAR_4;

        if ( VAR_9 )
        {
            *VAR_3 = 1;
            break;
        }
    }
    *VAR_7 = 0;

    return VAR_7 - VAR_1;
}
