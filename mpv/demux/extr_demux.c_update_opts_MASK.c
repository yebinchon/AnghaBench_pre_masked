
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_opts {int max_bytes; int seekable_cache; int enable_cache; char* record_file; scalar_t__ disk_cache; int min_secs_cache; scalar_t__ max_bytes_bw; scalar_t__ min_secs; } ;
struct demux_internal {int max_bytes; int seekable_cache; int using_network_cache_opts; char* record_filename; int can_record; int enable_recording; int * recorder; scalar_t__ cache; int log; int global; scalar_t__ max_bytes_bw; scalar_t__ min_secs; int can_cache; TYPE_1__* d_thread; struct demux_opts* opts; } ;
struct TYPE_2__ {int is_streaming; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct demux_internal*,char*) ;
 int FUNC_2 (struct demux_internal*,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct demux_internal*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct demux_internal*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (struct demux_internal*,char*) ;

__attribute__((used)) static void FUNC_10(struct demux_internal *VAR_0)
{
    struct demux_opts *VAR_1 = VAR_0->opts;

    VAR_0->min_secs = VAR_1->min_secs;
    VAR_0->max_bytes = VAR_1->max_bytes;
    VAR_0->max_bytes_bw = VAR_1->max_bytes_bw;

    int VAR_2 = VAR_1->seekable_cache;
    bool VAR_3 = VAR_0->d_thread->is_streaming;
    bool VAR_4 = VAR_3;
    if (VAR_1->enable_cache >= 0)
        VAR_4 = VAR_1->enable_cache == 1;

    if (VAR_4) {
        VAR_0->min_secs = FUNC_0(VAR_0->min_secs, VAR_1->min_secs_cache);
        if (VAR_2 < 0)
            VAR_2 = 1;
    }
    VAR_0->seekable_cache = VAR_2 == 1;
    VAR_0->using_network_cache_opts = VAR_3 && VAR_4;

    if (!VAR_0->seekable_cache)
        VAR_0->max_bytes_bw = 0;

    if (!VAR_0->can_cache) {
        VAR_0->seekable_cache = 0;
        VAR_0->min_secs = 0;
        VAR_0->max_bytes = 1;
        VAR_0->max_bytes_bw = 0;
        VAR_0->using_network_cache_opts = 0;
    }

    if (VAR_0->seekable_cache && VAR_1->disk_cache && !VAR_0->cache) {
        VAR_0->cache = FUNC_3(VAR_0->global, VAR_0->log);
        if (!VAR_0->cache)
            FUNC_1(VAR_0, "Failed to create file cache.\n");
    }



    char *VAR_5 = VAR_0->record_filename ? VAR_0->record_filename : "";
    char *VAR_6 = VAR_1->record_file ? VAR_1->record_file : "";
    if (FUNC_7(VAR_5, VAR_6) != 0) {
        if (VAR_0->recorder) {
            FUNC_2(VAR_0, "Stopping recording.\n");
            FUNC_5(VAR_0->recorder);
            VAR_0->recorder = ((void*)0);
        }
        VAR_0->record_filename = FUNC_9(VAR_0, VAR_1->record_file);
        FUNC_8(VAR_0->record_filename);



        VAR_0->enable_recording = VAR_0->can_record;
    }


    FUNC_6(VAR_0);


    FUNC_4(VAR_0);
}
