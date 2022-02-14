
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int entry; } ;
typedef TYPE_1__ warning_t ;
typedef int warning_list_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static warning_list_t *FUNC_3(warning_list_t *VAR_0, int VAR_1)
{
    warning_t *VAR_2;

    if(!VAR_0)
    {
        VAR_0 = FUNC_2( sizeof(*VAR_0) );
        FUNC_1( VAR_0 );
    }
    VAR_2 = FUNC_2( sizeof(*VAR_2) );
    VAR_2->num = VAR_1;
    FUNC_0( VAR_0, &VAR_2->entry );
    return VAR_0;
}
