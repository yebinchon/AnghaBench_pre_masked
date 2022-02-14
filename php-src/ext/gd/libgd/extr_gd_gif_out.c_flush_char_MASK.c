
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ a_count; int g_outfile; int accum; } ;
typedef TYPE_1__ GifCtx ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(GifCtx *VAR_0)
{
        if( VAR_0->a_count > 0 ) {
                FUNC_1( VAR_0->a_count, VAR_0->g_outfile );
                FUNC_0( VAR_0->accum, VAR_0->a_count, VAR_0->g_outfile );
                VAR_0->a_count = 0;
        }
}
