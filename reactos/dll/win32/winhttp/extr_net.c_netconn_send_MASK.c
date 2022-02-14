
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cbMaximumMessage; } ;
struct TYPE_6__ {int socket; TYPE_1__ ssl_sizes; scalar_t__ secure; } ;
typedef TYPE_2__ netconn_t ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (TYPE_2__*,int const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void const*,size_t,int ) ;

BOOL FUNC_5( netconn_t *VAR_3, const void *VAR_4, size_t VAR_5, int *VAR_6 )
{
    if (VAR_3->secure)
    {
        const BYTE *VAR_7 = VAR_4;
        size_t VAR_8;

        *VAR_6 = 0;

        while(VAR_5) {
            VAR_8 = FUNC_0(VAR_5, VAR_3->ssl_sizes.cbMaximumMessage);
            if(!FUNC_1(VAR_3, VAR_7, VAR_8))
                return VAR_0;

            *VAR_6 += VAR_8;
            VAR_7 += VAR_8;
            VAR_5 -= VAR_8;
        }

        return VAR_1;
    }
    if ((*VAR_6 = FUNC_4( VAR_3->socket, VAR_4, VAR_5, 0 )) == -1)
    {
        FUNC_2( FUNC_3( VAR_2 ) );
        return VAR_0;
    }
    return VAR_1;
}
