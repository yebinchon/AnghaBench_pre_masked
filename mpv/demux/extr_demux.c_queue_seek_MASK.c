
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_stream {double back_seek_pos; } ;
struct demux_internal {int seeking; int eof; int idle; int reading; int back_demuxing; int seek_flags; double seek_pts; int num_streams; int threading; TYPE_2__** streams; TYPE_1__* d_thread; } ;
struct demux_cached_range {int dummy; } ;
struct TYPE_4__ {struct demux_stream* ds; } ;
struct TYPE_3__ {int seekable; } ;


 double VAR_0 ;
 int FUNC_0 (struct demux_internal*,char*,...) ;
 int FUNC_1 (struct demux_internal*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct demux_stream*) ;
 int FUNC_3 (struct demux_internal*,int) ;
 int FUNC_4 (struct demux_internal*,struct demux_cached_range*,double,int) ;
 int FUNC_5 (struct demux_internal*) ;
 struct demux_cached_range* FUNC_6 (struct demux_internal*,double,int) ;
 int FUNC_7 (struct demux_internal*) ;
 int FUNC_8 (struct demux_stream*) ;

__attribute__((used)) static bool FUNC_9(struct demux_internal *VAR_4, double VAR_5, int VAR_6,
                       bool VAR_7)
{
    if (VAR_5 == VAR_0)
        return 0;

    FUNC_0(VAR_4, "queuing seek to %f%s\n", VAR_5,
               VAR_4->seeking ? " (cascade)" : "");

    bool VAR_8 = VAR_6 & VAR_1;
    VAR_6 &= ~(unsigned)VAR_1;

    bool VAR_9 = VAR_6 & VAR_3;
    VAR_6 &= ~(unsigned)VAR_3;

    bool VAR_10 = VAR_6 & VAR_2;
    VAR_6 &= ~(unsigned)VAR_2;

    struct demux_cached_range *VAR_11 =
        FUNC_6(VAR_4, VAR_5, VAR_6);

    if (!VAR_11) {
        if (VAR_8) {
            FUNC_0(VAR_4, "Cached seek not possible.\n");
            return 0;
        }
        if (!VAR_4->d_thread->seekable && !VAR_10) {
            FUNC_1(VAR_4, "Cannot seek in this file.\n");
            return 0;
        }
    }

    VAR_4->eof = 0;
    VAR_4->idle = 1;
    VAR_4->reading = 0;
    VAR_4->back_demuxing = VAR_9;

    FUNC_3(VAR_4, VAR_7);

    if (VAR_11) {
        FUNC_4(VAR_4, VAR_11, VAR_5, VAR_6);
    } else {
        FUNC_7(VAR_4);

        VAR_4->seeking = 1;
        VAR_4->seek_flags = VAR_6;
        VAR_4->seek_pts = VAR_5;
    }

    for (int VAR_12 = 0; VAR_12 < VAR_4->num_streams; VAR_12++) {
        struct demux_stream *VAR_13 = VAR_4->streams[VAR_12]->ds;

        if (VAR_4->back_demuxing) {
            if (VAR_13->back_seek_pos == VAR_0)
                VAR_13->back_seek_pos = VAR_5;

            FUNC_2(VAR_4->streams[VAR_12]->ds);
        }

        FUNC_8(VAR_13);
    }

    if (!VAR_4->threading && VAR_4->seeking)
        FUNC_5(VAR_4);

    return 1;
}
