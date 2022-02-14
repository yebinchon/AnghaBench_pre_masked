
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protocol {void* local; struct protocol* next; } ;
struct interface_info {int dummy; } ;


 struct protocol* VAR_0 ;

struct protocol *
FUNC_0(struct interface_info *VAR_1)
{
    struct protocol *VAR_2;

    for( VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next ) {
        if( VAR_2->local == (void *)VAR_1 ) return VAR_2;
    }

    return ((void*)0);
}
