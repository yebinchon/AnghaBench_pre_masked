
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; int refcount; } ;
typedef TYPE_1__ MSIOBJECTHDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

void FUNC_2( MSIOBJECTHDR *VAR_1 )
{
    if( !VAR_1 )
        return;

    if( VAR_1->magic != VAR_0 )
    {
        FUNC_0("Invalid handle!\n");
        return;
    }

    FUNC_1(&VAR_1->refcount);
}
