
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {char* m_body; scalar_t__ m_nBytesRead; } ;
typedef TYPE_1__ RTMPPacket ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int,scalar_t__) ;

int
FUNC_1(RTMPPacket *VAR_4, uint32_t VAR_5)
{
    char *VAR_6;





    VAR_6 = FUNC_0(1, VAR_5 + VAR_1);
    if (!VAR_6)
        return VAR_0;
    VAR_4->m_body = VAR_6 + VAR_1;
    VAR_4->m_nBytesRead = 0;
    return VAR_3;
}
