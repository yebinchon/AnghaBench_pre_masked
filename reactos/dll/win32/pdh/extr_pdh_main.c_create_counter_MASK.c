
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int magic; } ;


 int VAR_0 ;
 struct counter* FUNC_0 (int) ;

__attribute__((used)) static struct counter *FUNC_1( void )
{
    struct counter *VAR_1;

    if ((VAR_1 = FUNC_0( sizeof(struct counter) )))
    {
        VAR_1->magic = VAR_0;
        return VAR_1;
    }
    return ((void*)0);
}
