
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_reqBodyLen; } ;
typedef TYPE_1__ LSAPI_Request ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_2(LSAPI_Request * VAR_1)
{
    const char * VAR_2 = FUNC_0( VAR_1, VAR_0 );
    if ( VAR_2 )
        VAR_1->m_reqBodyLen = FUNC_1( VAR_2, ((void*)0), 10 );
    return 0;
}
