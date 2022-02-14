
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {size_t index; scalar_t__ type; } ;
struct priv {size_t num_streams; scalar_t__ base_dts; scalar_t__ last_dts; double base_time; scalar_t__ is_cdda; struct sh_stream** streams; scalar_t__ seek_reinit; int slave; } ;
struct demuxer {struct priv* priv; } ;
struct demux_packet {size_t stream; scalar_t__ pts; scalar_t__ dts; scalar_t__ duration; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct demuxer*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct demuxer*,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct demuxer*) ;
 struct demux_packet* FUNC_3 (int ) ;
 int FUNC_4 (struct sh_stream*) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct demuxer*) ;
 int FUNC_8 (struct demux_packet*) ;

__attribute__((used)) static bool FUNC_9(struct demuxer *VAR_3, struct demux_packet **VAR_4)
{
    struct priv *VAR_5 = VAR_3->priv;

    struct demux_packet *VAR_6 = FUNC_3(VAR_5->slave);
    if (!VAR_6)
        return 0;

    FUNC_5(VAR_5->slave, VAR_1);

    if (VAR_5->seek_reinit)
        FUNC_7(VAR_3);

    FUNC_2(VAR_3);
    if (VAR_6->stream >= VAR_5->num_streams) {
        FUNC_8(VAR_6);
        return 1;
    }

    struct sh_stream *VAR_7 = VAR_5->streams[VAR_6->stream];
    if (!FUNC_4(VAR_7)) {
        FUNC_8(VAR_6);
        return 1;
    }

    VAR_6->stream = VAR_7->index;

    if (VAR_5->is_cdda) {
        *VAR_4 = VAR_6;
        return 1;
    }

    FUNC_0(VAR_3, "ipts: %d %f %f\n", VAR_7->type, VAR_6->pts, VAR_6->dts);

    if (VAR_7->type == VAR_2) {
        if (VAR_5->base_dts == VAR_1)
            FUNC_1(VAR_3, "subtitle packet along PTS reset\n");
    } else if (VAR_6->dts != VAR_1) {


        if (VAR_5->base_dts == VAR_1)
            VAR_5->base_dts = VAR_6->dts;

        if (VAR_5->last_dts == VAR_1)
            VAR_5->last_dts = VAR_6->dts;

        if (FUNC_6(VAR_5->last_dts - VAR_6->dts) >= VAR_0) {
            FUNC_1(VAR_3, "PTS discontinuity: %f->%f\n", VAR_5->last_dts, VAR_6->dts);
            VAR_5->base_time += VAR_5->last_dts - VAR_5->base_dts;
            VAR_5->base_dts = VAR_6->dts - VAR_6->duration;
        }
        VAR_5->last_dts = VAR_6->dts;
    }

    if (VAR_5->base_dts != VAR_1) {
        double VAR_8 = -VAR_5->base_dts + VAR_5->base_time;
        if (VAR_6->pts != VAR_1)
            VAR_6->pts += VAR_8;
        if (VAR_6->dts != VAR_1)
            VAR_6->dts += VAR_8;
    }

    FUNC_0(VAR_3, "opts: %d %f %f\n", VAR_7->type, VAR_6->pts, VAR_6->dts);

    *VAR_4 = VAR_6;
    return 1;
}
