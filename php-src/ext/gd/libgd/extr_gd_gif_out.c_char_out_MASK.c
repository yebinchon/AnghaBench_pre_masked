
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* accum; int a_count; } ;
typedef TYPE_1__ GifCtx ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, GifCtx *VAR_1)
{
        VAR_1->accum[ VAR_1->a_count++ ] = VAR_0;
        if( VAR_1->a_count >= 254 )
                FUNC_0(VAR_1);
}
