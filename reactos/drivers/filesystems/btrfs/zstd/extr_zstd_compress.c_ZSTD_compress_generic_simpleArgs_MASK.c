
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* member_0; size_t member_1; size_t member_2; size_t pos; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {void const* member_0; size_t member_1; size_t member_2; size_t pos; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_EndDirective ;
typedef int ZSTD_CCtx ;


 size_t FUNC_0 (int *,TYPE_1__*,TYPE_2__*,int ) ;

size_t FUNC_1 (
                            ZSTD_CCtx* VAR_0,
                            void* VAR_1, size_t VAR_2, size_t* VAR_3,
                      const void* VAR_4, size_t VAR_5, size_t* VAR_6,
                            ZSTD_EndDirective VAR_7)
{
    ZSTD_outBuffer VAR_8 = { VAR_1, VAR_2, *VAR_3 };
    ZSTD_inBuffer VAR_9 = { VAR_4, VAR_5, *VAR_6 };

    size_t const VAR_10 = FUNC_0(VAR_0, &VAR_8, &VAR_9, VAR_7);
    *VAR_3 = VAR_8.pos;
    *VAR_6 = VAR_9.pos;
    return VAR_10;
}
