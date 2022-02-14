
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_iLen; } ;
struct lsapi_packet_header {char m_type; TYPE_1__ m_packetLen; int m_flag; int m_versionB1; int m_versionB0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0( struct lsapi_packet_header * VAR_3,
                                char VAR_4, int VAR_5 )
{
    VAR_3->m_versionB0 = VAR_1;
    VAR_3->m_versionB1 = VAR_2;
    VAR_3->m_type = VAR_4;
    VAR_3->m_flag = VAR_0;
    VAR_3->m_packetLen.m_iLen = VAR_5;
}
