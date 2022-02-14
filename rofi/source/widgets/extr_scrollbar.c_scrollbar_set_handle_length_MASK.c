
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int pos_length; } ;
typedef TYPE_1__ scrollbar ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2 ( scrollbar *VAR_0, unsigned int VAR_1 )
{
    if ( VAR_0 != ((void*)0) ) {
        VAR_0->pos_length = FUNC_1 ( VAR_0->length, FUNC_0 ( 1u, VAR_1 ) );
    }
}
