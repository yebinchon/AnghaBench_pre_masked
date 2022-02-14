
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; scalar_t__ status_broken; int * name; int format; } ;
typedef scalar_t__ DNS_STATUS ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_4( void )
{
    unsigned int VAR_3;
    DNS_STATUS VAR_4;

    VAR_4 = FUNC_1( ((void*)0), VAR_0 );
    FUNC_3( VAR_4 == VAR_1, "succeeded unexpectedly\n" );

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
    {
        VAR_4 = FUNC_1( VAR_2[VAR_3].name, VAR_2[VAR_3].format );
        FUNC_3( VAR_4 == VAR_2[VAR_3].status || FUNC_2(VAR_4 == VAR_2[VAR_3].status_broken),
            "%d: \'%s\': got %d, expected %d\n", VAR_3, VAR_2[VAR_3].name, VAR_4, VAR_2[VAR_3].status );
    }
}
