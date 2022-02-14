
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {scalar_t__ stream; } ;
struct TYPE_4__ {size_t num_streams; TYPE_2__* streams; } ;
typedef TYPE_1__ MSIDATABASE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( MSIDATABASE *VAR_0 )
{
    UINT VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++)
    {
        if (VAR_0->streams[VAR_1].stream) FUNC_0( VAR_0->streams[VAR_1].stream );
    }
    FUNC_1( VAR_0->streams );
}
