
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ peek_len; int socket; int * peek_msg; int * peek_msg_mem; scalar_t__ secure; } ;
typedef TYPE_1__ netconn_t ;
typedef size_t SIZE_T ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int *,int) ;
 int FUNC_4 (size_t,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,size_t,size_t*,scalar_t__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,void*,size_t,int) ;

BOOL FUNC_9( netconn_t *VAR_4, void *VAR_5, size_t VAR_6, int VAR_7, int *VAR_8 )
{
    *VAR_8 = 0;
    if (!VAR_6) return VAR_2;

    if (VAR_4->secure)
    {
        SIZE_T VAR_9, VAR_10;
        BOOL VAR_11, VAR_12;

        if (VAR_4->peek_msg)
        {
            *VAR_8 = FUNC_4( VAR_6, VAR_4->peek_len );
            FUNC_3( VAR_5, VAR_4->peek_msg, *VAR_8 );
            VAR_4->peek_len -= *VAR_8;
            VAR_4->peek_msg += *VAR_8;

            if (VAR_4->peek_len == 0)
            {
                FUNC_2( VAR_4->peek_msg_mem );
                VAR_4->peek_msg_mem = ((void*)0);
                VAR_4->peek_msg = ((void*)0);
            }

            if (!(VAR_7 & VAR_1) || *VAR_8 == VAR_6) return VAR_2;
        }
        VAR_9 = *VAR_8;

        do {
            VAR_11 = FUNC_5(VAR_4, (BYTE*)VAR_5+VAR_9, VAR_6-VAR_9, &VAR_10, &VAR_12);
            if(!VAR_11) {
                FUNC_1("read_ssl_chunk failed\n");
                if(!VAR_9)
                    return VAR_0;
                break;
            }

            if(VAR_12) {
                FUNC_0("EOF\n");
                break;
            }

            VAR_9 += VAR_10;
        }while(!VAR_9 || ((VAR_7 & VAR_1) && VAR_9 < VAR_6));

        FUNC_0("received %ld bytes\n", VAR_9);
        *VAR_8 = VAR_9;
        return VAR_2;
    }
    if ((*VAR_8 = FUNC_8( VAR_4->socket, VAR_5, VAR_6, VAR_7 )) == -1)
    {
        FUNC_6( FUNC_7( VAR_3 ) );
        return VAR_0;
    }
    return VAR_2;
}
