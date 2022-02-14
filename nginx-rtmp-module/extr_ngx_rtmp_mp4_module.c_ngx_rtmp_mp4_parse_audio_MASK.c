
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_12__ {int nchannels; int sample_size; int sample_rate; TYPE_2__* track; } ;
typedef TYPE_4__ ngx_rtmp_mp4_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int codec; int fhdr; } ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,scalar_t__,int,int,int) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int*,int*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_4, u_char *VAR_5, u_char *VAR_6,
                         ngx_int_t VAR_7)
{
    ngx_rtmp_mp4_ctx_t *VAR_8;
    u_char *VAR_9;
    ngx_uint_t VAR_10;

    VAR_8 = FUNC_1(VAR_4, VAR_3);

    if (VAR_8->track == ((void*)0)) {
        return VAR_2;
    }

    VAR_8->track->codec = VAR_7;

    if (VAR_5 + 28 > VAR_6) {
        return VAR_0;
    }

    VAR_5 += 8;

    VAR_10 = FUNC_3(*(uint16_t *) VAR_5);

    VAR_5 += 8;

    VAR_8->nchannels = FUNC_3(*(uint16_t *) VAR_5);

    VAR_5 += 2;

    VAR_8->sample_size = FUNC_3(*(uint16_t *) VAR_5);

    VAR_5 += 6;

    VAR_8->sample_rate = FUNC_3(*(uint16_t *) VAR_5);

    VAR_5 += 4;

    VAR_9 = &VAR_8->track->fhdr;

    *VAR_9 = 0;

    if (VAR_8->nchannels == 2) {
        *VAR_9 |= 0x01;
    }

    if (VAR_8->sample_size == 16) {
        *VAR_9 |= 0x02;
    }

    switch (VAR_8->sample_rate) {
        case 5512:
            break;

        case 11025:
            *VAR_9 |= 0x04;
            break;

        case 22050:
            *VAR_9 |= 0x08;
            break;

        default:
            *VAR_9 |= 0x0c;
            break;
    }

    FUNC_0(VAR_1, VAR_4->connection->log, 0,
                   "mp4: audio settings version=%ui, codec=%i, nchannels==%ui, "
                   "sample_size=%ui, sample_rate=%ui",
                   VAR_10, VAR_7, VAR_8->nchannels, VAR_8->sample_size,
                   VAR_8->sample_rate);

    switch (VAR_10) {
        case 1:
            VAR_5 += 16;
            break;

        case 2:
            VAR_5 += 36;
    }

    if (VAR_5 > VAR_6) {
        return VAR_0;
    }

    if (FUNC_2(VAR_4, VAR_5, VAR_6) != VAR_2) {
        return VAR_0;
    }

    *VAR_9 |= (VAR_8->track->codec << 4);

    return VAR_2;
}
