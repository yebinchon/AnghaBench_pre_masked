
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {int count; int * ptr; } ;
typedef int UINT8 ;
typedef int UINT ;
typedef int PSID ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct array*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static struct array *FUNC_3( PSID VAR_0, UINT VAR_1 )
{
    struct array *VAR_2 = FUNC_0( sizeof(struct array) );
    if (VAR_2)
    {
        UINT8 *VAR_3 = FUNC_0( VAR_1 );
        if (VAR_3)
        {
            FUNC_2( VAR_3, VAR_0, VAR_1 );
            VAR_2->count = VAR_1;
            VAR_2->ptr = VAR_3;
            return VAR_2;
        }
        FUNC_1( VAR_2 );
    }
    return ((void*)0);
}
