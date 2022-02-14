
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int m_status; } ;
struct TYPE_6__ {TYPE_1__ m_respInfo; } ;
struct TYPE_7__ {TYPE_2__ m_respHeader; } ;
typedef TYPE_3__ LSAPI_Request ;



__attribute__((used)) static inline int FUNC_0( LSAPI_Request * VAR_0, int VAR_1 )
{
    if ( !VAR_0 )
        return -1;
    VAR_0->m_respHeader.m_respInfo.m_status = VAR_1;
    return 0;
}
