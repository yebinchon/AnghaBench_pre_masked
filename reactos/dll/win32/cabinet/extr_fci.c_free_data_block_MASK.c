
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct data_block {int entry; } ;
struct TYPE_3__ {int (* free ) (struct data_block*) ;} ;
typedef TYPE_1__ FCI_Int ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct data_block*) ;

__attribute__((used)) static void FUNC_2( FCI_Int *VAR_0, struct data_block *VAR_1 )
{
    FUNC_0( &VAR_1->entry );
    VAR_0->free( VAR_1 );
}
