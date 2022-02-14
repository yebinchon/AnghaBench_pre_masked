
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* m_bytes; int m_iLen; } ;
struct lsapi_packet_header {scalar_t__ m_versionB0; scalar_t__ m_versionB1; char m_type; int m_flag; TYPE_1__ m_packetLen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int FUNC_0( struct lsapi_packet_header * VAR_4, char VAR_5 )
{
    if (( VAR_2 != VAR_4->m_versionB0 )||
        ( VAR_3 != VAR_4->m_versionB1 )||
        ( VAR_5 != VAR_4->m_type ))
        return -1;
    if ( VAR_0 != (VAR_4->m_flag & VAR_1 ))
    {
        register char VAR_6;
        VAR_6 = VAR_4->m_packetLen.m_bytes[0];
        VAR_4->m_packetLen.m_bytes[0] = VAR_4->m_packetLen.m_bytes[3];
        VAR_4->m_packetLen.m_bytes[3] = VAR_6;
        VAR_6 = VAR_4->m_packetLen.m_bytes[1];
        VAR_4->m_packetLen.m_bytes[1] = VAR_4->m_packetLen.m_bytes[2];
        VAR_4->m_packetLen.m_bytes[2] = VAR_6;
    }
    return VAR_4->m_packetLen.m_iLen;
}
