
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_header {int wait; int cancel; scalar_t__ sink; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct async_header*) ;

__attribute__((used)) static void FUNC_3( struct async_header *VAR_0 )
{
    if (VAR_0->sink) FUNC_1( VAR_0->sink );
    FUNC_0( VAR_0->cancel );
    FUNC_0( VAR_0->wait );
    FUNC_2( VAR_0 );
}
