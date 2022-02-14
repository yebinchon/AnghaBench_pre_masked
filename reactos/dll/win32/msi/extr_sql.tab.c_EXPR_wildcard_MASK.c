
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int type; } ;


 int VAR_0 ;
 struct expr* FUNC_0 (void*,int) ;

__attribute__((used)) static struct expr * FUNC_1( void *VAR_1 )
{
    struct expr *VAR_2 = FUNC_0( VAR_1, sizeof *VAR_2 );
    if( VAR_2 )
    {
        VAR_2->type = VAR_0;
    }
    return VAR_2;
}
