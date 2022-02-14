
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query {int counters; int magic; } ;


 int VAR_0 ;
 struct query* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct query *FUNC_2( void )
{
    struct query *VAR_1;

    if ((VAR_1 = FUNC_0( sizeof(struct query) )))
    {
        VAR_1->magic = VAR_0;
        FUNC_1( &VAR_1->counters );
        return VAR_1;
    }
    return ((void*)0);
}
