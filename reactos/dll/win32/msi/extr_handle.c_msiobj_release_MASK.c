
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ magic; int (* destructor ) (TYPE_1__*) ;int refcount; } ;
typedef TYPE_1__ MSIOBJECTHDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5( MSIOBJECTHDR *VAR_1 )
{
    int VAR_2;

    if( !VAR_1 )
        return -1;

    if( VAR_1->magic != VAR_0 )
    {
        FUNC_0("Invalid handle!\n");
        return -1;
    }

    VAR_2 = FUNC_1( &VAR_1->refcount );
    if( VAR_2==0 )
    {
        if( VAR_1->destructor )
            VAR_1->destructor( VAR_1 );
        FUNC_3( VAR_1 );
        FUNC_2("object %p destroyed\n", VAR_1);
    }

    return VAR_2;
}
