
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* path; scalar_t__ magic; } ;


 int FUNC_0 (struct counter*) ;

__attribute__((used)) static void FUNC_1( struct counter *VAR_0 )
{
    VAR_0->magic = 0;
    FUNC_0( VAR_0->path );
    FUNC_0( VAR_0 );
}
