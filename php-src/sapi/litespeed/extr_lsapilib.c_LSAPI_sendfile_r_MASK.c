
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lsapi_packet_header {int dummy; } ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_5__ {int m_fd; int m_reqState; struct lsapi_packet_header* m_respPktHeader; } ;
typedef TYPE_1__ LSAPI_Request ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int,int *,size_t) ;
 int FUNC_3 (struct lsapi_packet_header*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int,char const*,scalar_t__) ;

ssize_t FUNC_5( LSAPI_Request * VAR_4, int VAR_5, off_t* VAR_6, size_t VAR_7 )
{
    struct lsapi_packet_header * VAR_8 = VAR_4->m_respPktHeader;
    if ( !VAR_4 || (VAR_4->m_fd == -1) || VAR_5 == -1 )
        return -1;
    if ( VAR_4->m_reqState & VAR_3 )
    {
        FUNC_0( VAR_4 );
    }
    VAR_4->m_reqState |= VAR_2;

    FUNC_1(VAR_4);

    FUNC_3( VAR_8, VAR_1,
                            VAR_7 + VAR_0 );


    if (FUNC_4(VAR_4->m_fd, (const char *) VAR_8, VAR_0 ) != VAR_0)
        return -1;

    return FUNC_2( VAR_4->m_fd, VAR_5, VAR_6, VAR_7 );
}
