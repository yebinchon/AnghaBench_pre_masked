
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_9__ {scalar_t__ mmaped_size; int * mmaped; int extra; } ;
typedef TYPE_3__ ngx_rtmp_mp4_ctx_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_file_t ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_5, ngx_file_t *VAR_6)
{
    ngx_rtmp_mp4_ctx_t *VAR_7;

    VAR_7 = FUNC_1(VAR_5, VAR_4);

    if (VAR_7 == ((void*)0) || VAR_7->mmaped == ((void*)0)) {
        return VAR_2;
    }

    if (FUNC_2(VAR_7->mmaped, VAR_7->mmaped_size, &VAR_7->extra)
        != VAR_2)
    {
        FUNC_0(VAR_1, VAR_5->connection->log, VAR_3,
                      "mp4: munmap failed");
        return VAR_0;
    }

    VAR_7->mmaped = ((void*)0);
    VAR_7->mmaped_size = 0;

    return VAR_2;
}
