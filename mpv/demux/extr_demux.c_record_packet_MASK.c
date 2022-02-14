
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_recorder_sink {int dummy; } ;
struct demux_packet {size_t stream; } ;
struct demux_internal {int enable_recording; scalar_t__ dumper_status; int * recorder; int * streams; TYPE_1__* opts; } ;
struct TYPE_2__ {scalar_t__* record_file; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct demux_internal*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mp_recorder_sink*,struct demux_packet*) ;
 struct mp_recorder_sink* FUNC_3 (int *,int ) ;
 int * FUNC_4 (struct demux_internal*,scalar_t__*) ;
 int FUNC_5 (struct demux_internal*,struct demux_packet*) ;

__attribute__((used)) static void FUNC_6(struct demux_internal *VAR_1, struct demux_packet *VAR_2)
{

    if (VAR_1->enable_recording && !VAR_1->recorder &&
        VAR_1->opts->record_file && VAR_1->opts->record_file[0])
    {


        VAR_1->enable_recording = 0;

        VAR_1->recorder = FUNC_4(VAR_1, VAR_1->opts->record_file);
        if (!VAR_1->recorder)
            FUNC_0(VAR_1, "Disabling recording.\n");
    }

    if (VAR_1->recorder) {
        struct mp_recorder_sink *VAR_3 =
            FUNC_3(VAR_1->recorder, VAR_1->streams[VAR_2->stream]);
        if (VAR_3) {
            FUNC_2(VAR_3, VAR_2);
        } else {
            FUNC_0(VAR_1, "New stream appeared; stopping recording.\n");
            FUNC_1(VAR_1->recorder);
            VAR_1->recorder = ((void*)0);
        }
    }

    if (VAR_1->dumper_status == VAR_0)
        FUNC_5(VAR_1, VAR_2);
}
