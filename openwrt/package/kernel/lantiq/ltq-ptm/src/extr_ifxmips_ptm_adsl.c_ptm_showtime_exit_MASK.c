
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
    int VAR_2;

    if ( !VAR_1 )
        return -1;

    for ( VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++ )
        FUNC_1(VAR_0[VAR_2]);

    VAR_1 = 0;

    FUNC_2("leave showtime\n");

    return 0;
}
