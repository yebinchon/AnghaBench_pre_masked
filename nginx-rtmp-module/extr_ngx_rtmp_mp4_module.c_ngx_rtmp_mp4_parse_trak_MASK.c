
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_11__ {int ntracks; scalar_t__ aindex; scalar_t__ vindex; TYPE_8__* track; scalar_t__ vtracks; scalar_t__ atracks; TYPE_8__* tracks; } ;
typedef TYPE_3__ ngx_rtmp_mp4_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {size_t id; scalar_t__ type; } ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_8__*,int) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_5, u_char *VAR_6, u_char *VAR_7)
{
    ngx_rtmp_mp4_ctx_t *VAR_8;

    VAR_8 = FUNC_3(VAR_5, VAR_4);

    if (VAR_8->track) {
        return VAR_2;
    }

    VAR_8->track = (VAR_8->ntracks == sizeof(VAR_8->tracks) / sizeof(VAR_8->tracks[0]))
                 ? ((void*)0) : &VAR_8->tracks[VAR_8->ntracks];

    if (VAR_8->track) {
        FUNC_2(VAR_8->track, sizeof(*VAR_8->track));
        VAR_8->track->id = VAR_8->ntracks;

        FUNC_0(VAR_1, VAR_5->connection->log, 0,
                       "mp4: trying track %ui", VAR_8->ntracks);
    }

    if (FUNC_4(VAR_5, VAR_6, VAR_7) != VAR_2) {
        return VAR_0;
    }

    if (VAR_8->track && VAR_8->track->type &&
        (VAR_8->ntracks == 0 ||
         VAR_8->tracks[0].type != VAR_8->tracks[VAR_8->ntracks].type))
    {
        FUNC_0(VAR_1, VAR_5->connection->log, 0,
                       "mp4: adding track %ui", VAR_8->ntracks);

        if (VAR_8->track->type == VAR_3) {
            if (VAR_8->atracks++ != VAR_8->aindex) {
                FUNC_1(VAR_1, VAR_5->connection->log, 0,
                               "mp4: skipping audio track %ui!=%ui",
                               VAR_8->atracks - 1, VAR_8->aindex);
                VAR_8->track = ((void*)0);
                return VAR_2;
            }

        } else {
            if (VAR_8->vtracks++ != VAR_8->vindex) {
                FUNC_1(VAR_1, VAR_5->connection->log, 0,
                               "mp4: skipping video track %i!=%i",
                               VAR_8->vtracks - 1, VAR_8->vindex);
                VAR_8->track = ((void*)0);
                return VAR_2;
            }
        }

        ++VAR_8->ntracks;

    } else {
        FUNC_0(VAR_1, VAR_5->connection->log, 0,
                       "mp4: ignoring track %ui", VAR_8->ntracks);
    }

    VAR_8->track = ((void*)0);

    return VAR_2;
}
