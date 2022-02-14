
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tv ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int socket; } ;
typedef TYPE_1__ netconn_t ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,void*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

DWORD FUNC_4( netconn_t *VAR_5, BOOL VAR_6, int VAR_7 )
{
    struct timeval VAR_8;


    VAR_8.tv_sec = VAR_7 / 1000;
    VAR_8.tv_usec = (VAR_7 % 1000) * 1000;

    if (FUNC_1( VAR_5->socket, VAR_1, VAR_6 ? VAR_3 : VAR_2, (void*)&VAR_8, sizeof(VAR_8) ) == -1)
    {
        FUNC_0("setsockopt failed (%s)\n", FUNC_3( VAR_4 ));
        return FUNC_2( VAR_4 );
    }
    return VAR_0;
}
