
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ in_chunk_size_changing; int * in_old_pool; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_rtmp_session_t *VAR_1)
{
    if (VAR_1->in_chunk_size_changing && VAR_1->in_old_pool) {
        FUNC_0(VAR_1->in_old_pool);
        VAR_1->in_old_pool = ((void*)0);
        VAR_1->in_chunk_size_changing = 0;
    }
    return VAR_0;
}
