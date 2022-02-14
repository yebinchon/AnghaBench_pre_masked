
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {scalar_t__ is_external; scalar_t__ auto_loaded; scalar_t__ forced_track; scalar_t__ default_track; scalar_t__ attached_picture; scalar_t__ user_tid; TYPE_1__* stream; int lang; int no_default; } ;
struct MPOpts {scalar_t__ hls_bitrate; int autoload_files; } ;
struct TYPE_2__ {scalar_t__ hls_bitrate; } ;


 int FUNC_0 (char**,int ) ;

__attribute__((used)) static bool FUNC_1(struct track *VAR_0, struct track *VAR_1, char **VAR_2,
                          struct MPOpts *VAR_3)
{
    if (!VAR_3->autoload_files && VAR_0->is_external != VAR_1->is_external)
        return !VAR_0->is_external;
    bool VAR_4 = VAR_0->is_external && !VAR_0->no_default;
    bool VAR_5 = VAR_1->is_external && !VAR_1->no_default;
    if (VAR_4 != VAR_5)
        return VAR_4;
    if (VAR_0->auto_loaded != VAR_1->auto_loaded)
        return !VAR_0->auto_loaded;
    int VAR_6 = FUNC_0(VAR_2, VAR_0->lang), VAR_7 = FUNC_0(VAR_2, VAR_1->lang);
    if (VAR_6 != VAR_7)
        return VAR_6 > VAR_7;
    if (VAR_0->forced_track != VAR_1->forced_track)
        return VAR_0->forced_track;
    if (VAR_0->default_track != VAR_1->default_track)
        return VAR_0->default_track;
    if (VAR_0->attached_picture != VAR_1->attached_picture)
        return !VAR_0->attached_picture;
    if (VAR_0->stream && VAR_1->stream && VAR_3->hls_bitrate >= 0 &&
        VAR_0->stream->hls_bitrate != VAR_1->stream->hls_bitrate)
    {
        bool VAR_8 = VAR_0->stream->hls_bitrate <= VAR_3->hls_bitrate;
        bool VAR_9 = VAR_1->stream->hls_bitrate <= VAR_3->hls_bitrate;
        if (VAR_8 != VAR_9)
            return VAR_8;
        if (VAR_8 && VAR_9)
            return VAR_0->stream->hls_bitrate > VAR_1->stream->hls_bitrate;
        return VAR_0->stream->hls_bitrate < VAR_1->stream->hls_bitrate;
    }
    return VAR_0->user_tid <= VAR_1->user_tid;
}
