
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int m_reqBodyLen; } ;
typedef TYPE_1__ LSAPI_Request ;



__attribute__((used)) static inline off_t FUNC_0( LSAPI_Request * VAR_0 )
{
    if ( VAR_0 )
        return VAR_0->m_reqBodyLen;
    return -1;
}
